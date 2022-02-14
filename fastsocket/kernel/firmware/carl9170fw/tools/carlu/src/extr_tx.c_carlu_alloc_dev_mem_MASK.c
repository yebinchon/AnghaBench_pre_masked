
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame {int len; scalar_t__ data; } ;
struct carlu {unsigned int dma_chunk_size; scalar_t__ tx_pending; scalar_t__ dma_chunks; scalar_t__ used_dma_chunks; int mem_lock; int cookie; } ;
struct TYPE_2__ {scalar_t__ cookie; } ;
struct _carl9170_tx_superframe {TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct carlu *VAR_1,
    struct frame *VAR_2)
{
 struct _carl9170_tx_superframe *VAR_3 = (void *)VAR_2->data;
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_2->len, VAR_1->dma_chunk_size);
 VAR_5 = VAR_4 / VAR_1->dma_chunk_size;

 FUNC_0(VAR_1->mem_lock);
 if (VAR_1->tx_pending >= VAR_1->dma_chunks ||
     VAR_1->used_dma_chunks + VAR_5 >= VAR_1->dma_chunks) {
  FUNC_1(VAR_1->mem_lock);
  return -VAR_0;
 }

 VAR_1->used_dma_chunks += VAR_5;
 VAR_1->tx_pending++;
 VAR_3->s.cookie = VAR_1->cookie++;
 FUNC_1(VAR_1->mem_lock);

 return 0;
}
