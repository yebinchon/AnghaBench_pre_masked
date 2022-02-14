
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; int numeraseregions; struct mtd_erase_region_info* eraseregions; struct map_info* priv; } ;
struct mtd_erase_region_info {scalar_t__ offset; int erasesize; unsigned long numblocks; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; int state; } ;
struct cfi_private {int chipshift; int numchips; int * chips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct map_info*,int *,unsigned long) ;
 int FUNC_1 (struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2,
      struct erase_info *VAR_3)
{ struct map_info *VAR_4 = VAR_2->priv;
 struct cfi_private *VAR_5 = VAR_4->fldrv_priv;
 unsigned long VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11;
 struct mtd_erase_region_info *VAR_12 = VAR_2->eraseregions;

 if (VAR_3->addr > VAR_2->size)
  return -VAR_0;

 if ((VAR_3->len + VAR_3->addr) > VAR_2->size)
  return -VAR_0;





 VAR_10 = 0;







 while (VAR_10 < VAR_2->numeraseregions && VAR_3->addr >= VAR_12[VAR_10].offset)
        VAR_10++;
 VAR_10--;







 if (VAR_3->addr & (VAR_12[VAR_10].erasesize-1))
  return -VAR_0;


 VAR_11 = VAR_10;





 while (VAR_10<VAR_2->numeraseregions && (VAR_3->addr + VAR_3->len) >= VAR_12[VAR_10].offset)
  VAR_10++;




 VAR_10--;

 if ((VAR_3->addr + VAR_3->len) & (VAR_12[VAR_10].erasesize-1))
  return -VAR_0;

 VAR_8 = VAR_3->addr >> VAR_5->chipshift;
 VAR_6 = VAR_3->addr - (VAR_8 << VAR_5->chipshift);
 VAR_7 = VAR_3->len;

 VAR_10=VAR_11;

 while(VAR_7) {
  VAR_9 = FUNC_0(VAR_4, &VAR_5->chips[VAR_8], VAR_6);

  if (VAR_9)
   return VAR_9;

  VAR_6 += VAR_12[VAR_10].erasesize;
  VAR_7 -= VAR_12[VAR_10].erasesize;

  if (VAR_6 % (1<< VAR_5->chipshift) == (((unsigned long)VAR_12[VAR_10].offset + (VAR_12[VAR_10].erasesize * VAR_12[VAR_10].numblocks)) %( 1<< VAR_5->chipshift)))
   VAR_10++;

  if (VAR_6 >> VAR_5->chipshift) {
   VAR_6 = 0;
   VAR_8++;

   if (VAR_8 >= VAR_5->numchips)
   break;
  }
 }

 VAR_3->state = VAR_1;
 FUNC_1(VAR_3);

 return 0;
}
