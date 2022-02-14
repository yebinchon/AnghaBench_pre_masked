
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {int chipshift; int numchips; int * chips; } ;
typedef int loff_t ;


 int FUNC_0 (struct map_info*,int *,unsigned long,unsigned long,int *) ;

__attribute__((used)) static int FUNC_1 (struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2, size_t *VAR_3, u_char *VAR_4)
{
 struct map_info *VAR_5 = VAR_0->priv;
 struct cfi_private *VAR_6 = VAR_5->fldrv_priv;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = 0;


 VAR_8 = (VAR_1 >> VAR_6->chipshift);
 VAR_7 = VAR_1 - (VAR_8 << VAR_6->chipshift);

 *VAR_3 = 0;

 while (VAR_2) {
  unsigned long VAR_10;

  if (VAR_8 >= VAR_6->numchips)
   break;

  if ((VAR_2 + VAR_7 -1) >> VAR_6->chipshift)
   VAR_10 = (1<<VAR_6->chipshift) - VAR_7;
  else
   VAR_10 = VAR_2;

  VAR_9 = FUNC_0(VAR_5, &VAR_6->chips[VAR_8], VAR_7, VAR_10, VAR_4);
  if (VAR_9)
   break;

  *VAR_3 += VAR_10;
  VAR_2 -= VAR_10;
  VAR_4 += VAR_10;

  VAR_7 = 0;
  VAR_8++;
 }
 return VAR_9;
}
