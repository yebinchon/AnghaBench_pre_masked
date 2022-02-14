
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; struct map_info* priv; } ;
struct map_info {scalar_t__ virt; struct lpddr_private* fldrv_priv; } ;
struct lpddr_private {scalar_t__ chipshift; int numchips; struct flchip* chips; } ;
struct flchip {long start; int ref_point_counter; int state; int mutex; } ;
typedef int resource_size_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct map_info*,struct flchip*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
   size_t *VAR_5, void **VAR_6, resource_size_t *VAR_7)
{
 struct map_info *VAR_8 = VAR_2->priv;
 struct lpddr_private *VAR_9 = VAR_8->fldrv_priv;
 int VAR_10 = VAR_3 >> VAR_9->chipshift;
 unsigned long VAR_11, VAR_12 = 0;
 struct flchip *VAR_13 = &VAR_9->chips[VAR_10];
 int VAR_14 = 0;

 if (!VAR_8->virt || (VAR_3 + VAR_4 > VAR_2->size))
  return -VAR_0;


 VAR_11 = VAR_3 - (VAR_10 << VAR_9->chipshift);

 *VAR_6 = (void *)VAR_8->virt + VAR_13->start + VAR_11;
 *VAR_5 = 0;

 while (VAR_4) {
  unsigned long VAR_15;

  if (VAR_10 >= VAR_9->numchips)
   break;


  if (!VAR_12)
   VAR_12 = VAR_13->start;
  else if (VAR_13->start != VAR_12)
   break;

  if ((VAR_4 + VAR_11 - 1) >> VAR_9->chipshift)
   VAR_15 = (1<<VAR_9->chipshift) - VAR_11;
  else
   VAR_15 = VAR_4;

  FUNC_1(VAR_13->mutex);
  VAR_14 = FUNC_0(VAR_8, VAR_13, VAR_1);
  FUNC_2(VAR_13->mutex);
  if (VAR_14)
   break;

  VAR_13->state = VAR_1;
  VAR_13->ref_point_counter++;
  *VAR_5 += VAR_15;
  VAR_4 -= VAR_15;

  VAR_11 = 0;
  VAR_12 += 1 << VAR_9->chipshift;
  VAR_10++;
  VAR_13 = &VAR_9->chips[VAR_10];
 }
 return 0;
}
