
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {size_t size; struct map_info* priv; } ;
struct map_info {scalar_t__ phys; void* virt; struct cfi_private* fldrv_priv; } ;
struct cfi_private {size_t chipshift; int numchips; TYPE_1__* chips; } ;
typedef scalar_t__ resource_size_t ;
typedef size_t loff_t ;
struct TYPE_2__ {long start; } ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,TYPE_1__*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, void **VAR_5, resource_size_t *VAR_6)
{
 struct map_info *VAR_7 = VAR_1->priv;
 struct cfi_private *VAR_8 = VAR_7->fldrv_priv;
 unsigned long VAR_9, VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;

 if (!VAR_7->virt || (VAR_2 + VAR_3 > VAR_1->size))
  return -VAR_0;




 VAR_11 = (VAR_2 >> VAR_8->chipshift);
 VAR_9 = VAR_2 - (VAR_11 << VAR_8->chipshift);

 *VAR_5 = VAR_7->virt + VAR_8->chips[VAR_11].start + VAR_9;
 *VAR_4 = 0;
 if (VAR_6)
  *VAR_6 = VAR_7->phys + VAR_8->chips[VAR_11].start + VAR_9;

 while (VAR_3) {
  unsigned long VAR_13;

  if (VAR_11 >= VAR_8->numchips)
   break;


  if (!VAR_10)
   VAR_10 = VAR_8->chips[VAR_11].start;
  else if (VAR_8->chips[VAR_11].start != VAR_10)
   break;

  if ((VAR_3 + VAR_9 -1) >> VAR_8->chipshift)
   VAR_13 = (1<<VAR_8->chipshift) - VAR_9;
  else
   VAR_13 = VAR_3;

  VAR_12 = FUNC_0(VAR_7, &VAR_8->chips[VAR_11], VAR_9, VAR_13);
  if (VAR_12)
   break;

  *VAR_4 += VAR_13;
  VAR_3 -= VAR_13;

  VAR_9 = 0;
  VAR_10 += 1 << VAR_8->chipshift;
  VAR_11++;
 }
 return 0;
}
