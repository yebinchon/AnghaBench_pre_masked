
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_iod {int npages; int first_dma; } ;
struct nvme_dev {int prp_page_pool; int prp_small_pool; } ;
typedef int dma_addr_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int ** FUNC_1 (struct nvme_iod*) ;
 int FUNC_2 (struct nvme_iod*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct nvme_dev *VAR_1, struct nvme_iod *VAR_2)
{
 const int VAR_3 = VAR_0 / 8 - 1;
 int VAR_4;
 __le64 **VAR_5 = FUNC_1(VAR_2);
 dma_addr_t VAR_6 = VAR_2->first_dma;

 if (VAR_2->npages == 0)
  FUNC_0(VAR_1->prp_small_pool, VAR_5[0], VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_2->npages; VAR_4++) {
  __le64 *VAR_7 = VAR_5[VAR_4];
  dma_addr_t VAR_8 = FUNC_3(VAR_7[VAR_3]);
  FUNC_0(VAR_1->prp_page_pool, VAR_7, VAR_6);
  VAR_6 = VAR_8;
 }
 FUNC_2(VAR_2);
}
