
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {unsigned int cur_blksize; int num; TYPE_3__* card; } ;
struct TYPE_4__ {scalar_t__ multi_block; } ;
struct TYPE_6__ {TYPE_2__* host; TYPE_1__ cccr; } ;
struct TYPE_5__ {unsigned int max_blk_count; unsigned int max_seg_size; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_3__*,int,int ,unsigned int,int,int *,int,unsigned int) ;
 unsigned int FUNC_2 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_3(struct sdio_func *VAR_0, int VAR_1,
 unsigned VAR_2, int VAR_3, u8 *VAR_4, unsigned VAR_5)
{
 unsigned VAR_6 = VAR_5;
 unsigned VAR_7;
 int VAR_8;


 if (VAR_0->card->cccr.multi_block && (VAR_5 > FUNC_2(VAR_0))) {



  VAR_7 = FUNC_0(VAR_0->card->host->max_blk_count,
   VAR_0->card->host->max_seg_size / VAR_0->cur_blksize);
  VAR_7 = FUNC_0(VAR_7, 511u);

  while (VAR_6 > VAR_0->cur_blksize) {
   unsigned VAR_9;

   VAR_9 = VAR_6 / VAR_0->cur_blksize;
   if (VAR_9 > VAR_7)
    VAR_9 = VAR_7;
   VAR_5 = VAR_9 * VAR_0->cur_blksize;

   VAR_8 = FUNC_1(VAR_0->card, VAR_1,
    VAR_0->num, VAR_2, VAR_3, VAR_4,
    VAR_9, VAR_0->cur_blksize);
   if (VAR_8)
    return VAR_8;

   VAR_6 -= VAR_5;
   VAR_4 += VAR_5;
   if (VAR_3)
    VAR_2 += VAR_5;
  }
 }


 while (VAR_6 > 0) {
  VAR_5 = FUNC_0(VAR_6, FUNC_2(VAR_0));

  VAR_8 = FUNC_1(VAR_0->card, VAR_1, VAR_0->num, VAR_2,
    VAR_3, VAR_4, 1, VAR_5);
  if (VAR_8)
   return VAR_8;

  VAR_6 -= VAR_5;
  VAR_4 += VAR_5;
  if (VAR_3)
   VAR_2 += VAR_5;
 }
 return 0;
}
