
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mite_dma_descriptor_ring {int n_links; int descriptors_dma_addr; TYPE_2__* descriptors; int hw_dev; } ;
struct mite_dma_descriptor {int dummy; } ;
struct comedi_async {unsigned int prealloc_bufsz; TYPE_1__* buf_page_list; } ;
struct TYPE_5__ {void* next; void* addr; void* count; } ;
struct TYPE_4__ {int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,unsigned int,int *,int ) ;
 int FUNC_3 (int ,int,TYPE_2__*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

int FUNC_6(struct mite_dma_descriptor_ring *VAR_4,
      struct comedi_async *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4->descriptors) {
  FUNC_3(VAR_4->hw_dev,
      VAR_4->n_links *
      sizeof(struct mite_dma_descriptor),
      VAR_4->descriptors,
      VAR_4->descriptors_dma_addr);
 }
 VAR_4->descriptors = ((void*)0);
 VAR_4->descriptors_dma_addr = 0;
 VAR_4->n_links = 0;

 if (VAR_5->prealloc_bufsz == 0)
  return 0;

 VAR_6 = VAR_5->prealloc_bufsz >> VAR_2;

 FUNC_0("ring->hw_dev=%p, n_links=0x%04x\n", VAR_4->hw_dev, VAR_6);

 VAR_4->descriptors =
     FUNC_2(VAR_4->hw_dev,
          VAR_6 * sizeof(struct mite_dma_descriptor),
          &VAR_4->descriptors_dma_addr, VAR_1);
 if (!VAR_4->descriptors) {
  FUNC_4("mite: ring buffer allocation failed\n");
  return -VAR_0;
 }
 VAR_4->n_links = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4->descriptors[VAR_7].count = FUNC_1(VAR_3);
  VAR_4->descriptors[VAR_7].addr =
      FUNC_1(VAR_5->buf_page_list[VAR_7].dma_addr);
  VAR_4->descriptors[VAR_7].next =
      FUNC_1(VAR_4->descriptors_dma_addr + (VAR_7 +
             1) *
    sizeof(struct mite_dma_descriptor));
 }
 VAR_4->descriptors[VAR_6 - 1].next =
     FUNC_1(VAR_4->descriptors_dma_addr);


 FUNC_5();
 return 0;
}
