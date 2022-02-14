
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* varsize_frob_t ) (struct map_info*,int *,unsigned long,int,void*) ;
struct mtd_info {size_t size; int numeraseregions; struct mtd_erase_region_info* eraseregions; struct map_info* priv; } ;
struct mtd_erase_region_info {size_t offset; int erasesize; int numblocks; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {size_t chipshift; int numchips; int * chips; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,int *,unsigned long,int,void*) ;

int FUNC_1(struct mtd_info *VAR_1, varsize_frob_t VAR_2,
         loff_t VAR_3, size_t VAR_4, void *VAR_5)
{
 struct map_info *VAR_6 = VAR_1->priv;
 struct cfi_private *VAR_7 = VAR_6->fldrv_priv;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12;
 struct mtd_erase_region_info *VAR_13 = VAR_1->eraseregions;

 if (VAR_3 > VAR_1->size)
  return -VAR_0;

 if ((VAR_4 + VAR_3) > VAR_1->size)
  return -VAR_0;





 VAR_11 = 0;







 while (VAR_11 < VAR_1->numeraseregions && VAR_3 >= VAR_13[VAR_11].offset)
        VAR_11++;
 VAR_11--;







 if (VAR_3 & (VAR_13[VAR_11].erasesize-1))
  return -VAR_0;


 VAR_12 = VAR_11;





 while (VAR_11<VAR_1->numeraseregions && (VAR_3 + VAR_4) >= VAR_13[VAR_11].offset)
  VAR_11++;




 VAR_11--;

 if ((VAR_3 + VAR_4) & (VAR_13[VAR_11].erasesize-1))
  return -VAR_0;

 VAR_9 = VAR_3 >> VAR_7->chipshift;
 VAR_8 = VAR_3 - (VAR_9 << VAR_7->chipshift);

 VAR_11=VAR_12;

 while(VAR_4) {
  int VAR_14 = VAR_13[VAR_11].erasesize;

  VAR_10 = (*VAR_2)(VAR_6, &VAR_7->chips[VAR_9], VAR_8, VAR_14, VAR_5);

  if (VAR_10)
   return VAR_10;

  VAR_8 += VAR_14;
  VAR_3 += VAR_14;
  VAR_4 -= VAR_14;

  if (VAR_3 == VAR_13[VAR_11].offset + VAR_14 * VAR_13[VAR_11].numblocks)
   VAR_11++;

  if (VAR_8 >> VAR_7->chipshift) {
   VAR_8 = 0;
   VAR_9++;

   if (VAR_9 >= VAR_7->numchips)
   break;
  }
 }

 return 0;
}
