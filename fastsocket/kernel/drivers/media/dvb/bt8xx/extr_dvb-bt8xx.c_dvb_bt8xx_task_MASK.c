
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_bt8xx_card {TYPE_1__* bt; int demux; } ;
struct TYPE_2__ {size_t last_block; size_t finished_block; size_t block_bytes; int block_count; int * buf_cpu; scalar_t__ TS_Size; } ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct dvb_bt8xx_card *VAR_1 = (struct dvb_bt8xx_card *)VAR_0;



 while (VAR_1->bt->last_block != VAR_1->bt->finished_block) {
  (VAR_1->bt->TS_Size ? FUNC_1 : FUNC_0)
   (&VAR_1->demux,
    &VAR_1->bt->buf_cpu[VAR_1->bt->last_block *
         VAR_1->bt->block_bytes],
    VAR_1->bt->block_bytes);
  VAR_1->bt->last_block = (VAR_1->bt->last_block + 1) %
     VAR_1->bt->block_count;
 }
}
