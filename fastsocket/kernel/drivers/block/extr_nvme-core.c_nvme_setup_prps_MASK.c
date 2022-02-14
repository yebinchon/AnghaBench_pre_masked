
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scatterlist {int dummy; } ;
struct nvme_iod {int npages; int first_dma; struct scatterlist* sg; } ;
struct nvme_dev {struct dma_pool* prp_page_pool; struct dma_pool* prp_small_pool; } ;
struct nvme_common_command {void* prp2; void* prp1; } ;
struct dma_pool {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
typedef void* __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 void** FUNC_3 (struct dma_pool*,int ,int*) ;
 void*** FUNC_4 (struct nvme_iod*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;

int FUNC_9(struct nvme_dev *VAR_1, struct nvme_common_command *VAR_2,
   struct nvme_iod *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct dma_pool *VAR_6;
 int VAR_7 = VAR_4;
 struct scatterlist *VAR_8 = VAR_3->sg;
 int VAR_9 = FUNC_7(VAR_8);
 u64 VAR_10 = FUNC_6(VAR_8);
 int VAR_11 = FUNC_5(VAR_10);
 __le64 *VAR_12;
 __le64 **VAR_13 = FUNC_4(VAR_3);
 dma_addr_t VAR_14;
 int VAR_15, VAR_16;

 VAR_2->prp1 = FUNC_2(VAR_10);
 VAR_7 -= (VAR_0 - VAR_11);
 if (VAR_7 <= 0)
  return VAR_4;

 VAR_9 -= (VAR_0 - VAR_11);
 if (VAR_9) {
  VAR_10 += (VAR_0 - VAR_11);
 } else {
  VAR_8 = FUNC_8(VAR_8);
  VAR_10 = FUNC_6(VAR_8);
  VAR_9 = FUNC_7(VAR_8);
 }

 if (VAR_7 <= VAR_0) {
  VAR_2->prp2 = FUNC_2(VAR_10);
  return VAR_4;
 }

 VAR_15 = FUNC_1(VAR_7, VAR_0);
 if (VAR_15 <= (256 / 8)) {
  VAR_6 = VAR_1->prp_small_pool;
  VAR_3->npages = 0;
 } else {
  VAR_6 = VAR_1->prp_page_pool;
  VAR_3->npages = 1;
 }

 VAR_12 = FUNC_3(VAR_6, VAR_5, &VAR_14);
 if (!VAR_12) {
  VAR_2->prp2 = FUNC_2(VAR_10);
  VAR_3->npages = -1;
  return (VAR_4 - VAR_7) + VAR_0;
 }
 VAR_13[0] = VAR_12;
 VAR_3->first_dma = VAR_14;
 VAR_2->prp2 = FUNC_2(VAR_14);
 VAR_16 = 0;
 for (;;) {
  if (VAR_16 == VAR_0 / 8) {
   __le64 *VAR_17 = VAR_12;
   VAR_12 = FUNC_3(VAR_6, VAR_5, &VAR_14);
   if (!VAR_12)
    return VAR_4 - VAR_7;
   VAR_13[VAR_3->npages++] = VAR_12;
   VAR_12[0] = VAR_17[VAR_16 - 1];
   VAR_17[VAR_16 - 1] = FUNC_2(VAR_14);
   VAR_16 = 1;
  }
  VAR_12[VAR_16++] = FUNC_2(VAR_10);
  VAR_9 -= VAR_0;
  VAR_10 += VAR_0;
  VAR_7 -= VAR_0;
  if (VAR_7 <= 0)
   break;
  if (VAR_9 > 0)
   continue;
  FUNC_0(VAR_9 < 0);
  VAR_8 = FUNC_8(VAR_8);
  VAR_10 = FUNC_6(VAR_8);
  VAR_9 = FUNC_7(VAR_8);
 }

 return VAR_4;
}
