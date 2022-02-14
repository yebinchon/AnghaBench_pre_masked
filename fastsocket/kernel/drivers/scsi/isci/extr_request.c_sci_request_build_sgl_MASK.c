
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {void* address_lower; void* address_upper; int length; } ;
struct scu_sgl_element_pair {void* next_pair_lower; void* next_pair_upper; TYPE_2__ A; TYPE_2__ B; } ;
struct scatterlist {int dummy; } ;
struct sas_task {scalar_t__ num_scatter; int total_xfer_len; int data_dir; struct scatterlist* scatter; } ;
struct isci_request {int zero_scatter_daddr; struct isci_host* isci_host; } ;
struct isci_host {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,struct scatterlist*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct scatterlist*) ;
 struct sas_task* FUNC_2 (struct isci_request*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 struct scu_sgl_element_pair* FUNC_6 (struct isci_request*,scalar_t__) ;
 int FUNC_7 (struct isci_host*,struct isci_request*,scalar_t__) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct isci_request *VAR_0)
{
 struct isci_host *VAR_1 = VAR_0->isci_host;
 struct sas_task *VAR_2 = FUNC_2(VAR_0);
 struct scatterlist *VAR_3 = ((void*)0);
 dma_addr_t VAR_4;
 u32 VAR_5 = 0;
 struct scu_sgl_element_pair *VAR_6 = ((void*)0);
 struct scu_sgl_element_pair *VAR_7 = ((void*)0);

 if (VAR_2->num_scatter > 0) {
  VAR_3 = VAR_2->scatter;

  while (VAR_3) {
   VAR_6 = FUNC_6(VAR_0, VAR_5);
   FUNC_1(&VAR_6->A, VAR_3);
   VAR_3 = FUNC_5(VAR_3);
   if (VAR_3) {
    FUNC_1(&VAR_6->B, VAR_3);
    VAR_3 = FUNC_5(VAR_3);
   } else
    FUNC_4(&VAR_6->B, 0, sizeof(VAR_6->B));

   if (VAR_7) {
    VAR_4 = FUNC_7(VAR_1,
           VAR_0,
           VAR_5);

    VAR_7->next_pair_upper =
     FUNC_8(VAR_4);
    VAR_7->next_pair_lower =
     FUNC_3(VAR_4);
   }

   VAR_7 = VAR_6;
   VAR_5++;
  }
 } else {
  VAR_6 = FUNC_6(VAR_0, VAR_5);

  VAR_4 = FUNC_0(&VAR_1->pdev->dev,
       VAR_2->scatter,
       VAR_2->total_xfer_len,
       VAR_2->data_dir);

  VAR_0->zero_scatter_daddr = VAR_4;

  VAR_6->A.length = VAR_2->total_xfer_len;
  VAR_6->A.address_upper = FUNC_8(VAR_4);
  VAR_6->A.address_lower = FUNC_3(VAR_4);
 }

 if (VAR_6) {
  VAR_6->next_pair_upper = 0;
  VAR_6->next_pair_lower = 0;
 }
}
