
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int len; scalar_t__ data; } ;
struct carlu {unsigned int dma_chunk_size; unsigned int used_dma_chunks; int mem_lock; int tx_pending; } ;
struct _carl9170_tx_superframe {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct carlu *VAR_0,
     struct frame *VAR_1)
{
 struct _carl9170_tx_superframe *VAR_2 = (void *)VAR_1->data;
 unsigned int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_1->len, VAR_0->dma_chunk_size);
 VAR_4 = VAR_3 / VAR_0->dma_chunk_size;

 FUNC_0(VAR_0->mem_lock);
 VAR_0->used_dma_chunks -= VAR_4;
 VAR_0->tx_pending--;
 FUNC_1(VAR_0->mem_lock);
}
