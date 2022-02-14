
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {unsigned int length; unsigned int offset; } ;
struct tifm_sd {size_t sg_pos; unsigned int block_pos; size_t sg_len; struct scatterlist bounce_buf; TYPE_1__* dev; } ;
struct page {int dummy; } ;
struct mmc_data {unsigned int blksz; int flags; struct scatterlist* sg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 struct page* FUNC_2 (struct page*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 struct page* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct page*,unsigned int,struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct tifm_sd *VAR_4, struct mmc_data *VAR_5)
{
 struct scatterlist *VAR_6 = VAR_5->sg;
 unsigned int VAR_7 = VAR_5->blksz;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 struct page *VAR_12;

 FUNC_0(&VAR_4->dev->dev, "bouncing block\n");
 while (VAR_7) {
  VAR_9 = VAR_6[VAR_4->sg_pos].length - VAR_4->block_pos;
  if (!VAR_9) {
   VAR_4->block_pos = 0;
   VAR_4->sg_pos++;
   if (VAR_4->sg_pos == VAR_4->sg_len)
    return;
   VAR_9 = VAR_6[VAR_4->sg_pos].length;
  }
  VAR_8 = VAR_6[VAR_4->sg_pos].offset + VAR_4->block_pos;

  VAR_12 = FUNC_2(FUNC_4(&VAR_6[VAR_4->sg_pos]), VAR_8 >> VAR_2);
  VAR_10 = FUNC_3(VAR_8);
  VAR_11 = VAR_3 - VAR_10;
  VAR_11 = FUNC_1(VAR_11, VAR_9);
  VAR_11 = FUNC_1(VAR_11, VAR_7);

  if (VAR_5->flags & VAR_1)
   FUNC_5(FUNC_4(&VAR_4->bounce_buf),
       VAR_5->blksz - VAR_7,
       VAR_12, VAR_10, VAR_11);
  else if (VAR_5->flags & VAR_0)
   FUNC_5(VAR_12, VAR_10, FUNC_4(&VAR_4->bounce_buf),
       VAR_5->blksz - VAR_7, VAR_11);

  VAR_7 -= VAR_11;
  VAR_4->block_pos += VAR_11;
 }
}
