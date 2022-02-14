
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_user_sdma_queue {int pkt_slab; int header_cache; int counter; } ;
struct qib_user_sdma_pkt {int list; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct page {int dummy; } ;
struct list_head {int dummy; } ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long const VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;
 int FUNC_3 (int *,struct page*,int ,size_t,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *,int ,size_t,int ) ;
 int * FUNC_8 (struct page*) ;
 struct qib_user_sdma_pkt* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct qib_user_sdma_pkt*) ;
 int FUNC_11 (struct page*) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (int *,struct list_head*) ;
 int FUNC_14 (int *,struct qib_user_sdma_queue*,struct list_head*) ;
 int FUNC_15 (struct qib_user_sdma_pkt*,int ,int ,size_t,int,struct page*,int *,int ) ;
 int FUNC_16 (struct qib_devdata const*,struct qib_user_sdma_queue*,struct qib_user_sdma_pkt*,struct iovec const*,int,int) ;

__attribute__((used)) static int FUNC_17(const struct qib_devdata *VAR_10,
        struct qib_user_sdma_queue *VAR_11,
        struct list_head *VAR_12,
        const struct iovec *VAR_13,
        unsigned long VAR_14,
        int VAR_15)
{
 unsigned long VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 struct page *VAR_19 = ((void*)0);
 __le32 *VAR_20;
 dma_addr_t VAR_21;
 struct qib_user_sdma_pkt *VAR_22 = ((void*)0);
 size_t VAR_23;
 size_t VAR_24;
 u32 VAR_25 = VAR_11->counter;
 int VAR_26 = 0;

 while (VAR_16 < VAR_14 && VAR_18 < VAR_15) {
  const unsigned long VAR_27 = (unsigned long) VAR_13[VAR_16].iov_base;
  const unsigned long VAR_28 = VAR_16;
  unsigned VAR_29;
  unsigned VAR_30;
  int VAR_31 = 0;
  int VAR_32 = 0;
  int VAR_33;

  VAR_26 = 0;
  VAR_23 = VAR_13[VAR_16].iov_len;
  VAR_24 = VAR_23 >> 2;
  VAR_19 = ((void*)0);

  VAR_22 = FUNC_9(VAR_11->pkt_slab, VAR_4);
  if (!VAR_22) {
   VAR_17 = -VAR_3;
   goto free_list;
  }

  if (VAR_23 < VAR_9 ||
      VAR_23 > VAR_6 || VAR_23 & 3 || VAR_27 & 3) {
   VAR_17 = -VAR_2;
   goto free_pkt;
  }

  if (VAR_23 == VAR_8)
   VAR_20 = FUNC_5(VAR_11->header_cache, VAR_4,
          &VAR_21);
  else
   VAR_20 = ((void*)0);

  if (!VAR_20) {
   VAR_19 = FUNC_1(VAR_4);
   if (!VAR_19) {
    VAR_17 = -VAR_3;
    goto free_pkt;
   }
   VAR_20 = FUNC_8(VAR_19);
  }

  VAR_33 = FUNC_2(VAR_20, VAR_13[VAR_16].iov_base, VAR_23);
  if (VAR_33) {
   VAR_17 = -VAR_1;
   goto free_pbc;
  }






  VAR_30 = VAR_24 - 1;
  VAR_29 = FUNC_12(*VAR_20) & VAR_7;
  if (VAR_29 < VAR_30 || VAR_29 > VAR_30 + (VAR_6 >> 2)) {
   VAR_17 = -VAR_2;
   goto free_pbc;
  }

  VAR_16++;
  while (VAR_30 < VAR_29 && VAR_16 < VAR_14) {
   const size_t VAR_34 = VAR_13[VAR_16].iov_len;
   const unsigned long VAR_35 =
    (unsigned long) VAR_13[VAR_16].iov_base;

   if (VAR_34 & 3 || VAR_35 & 3 || !VAR_34 ||
       VAR_34 > VAR_6) {
    VAR_17 = -VAR_2;
    goto free_pbc;
   }

   VAR_32++;
   if ((VAR_35 & VAR_5) !=
       ((VAR_35 + VAR_34 - 1) & VAR_5))
    VAR_32++;

   VAR_30 += VAR_34 >> 2;
   VAR_16++;
   VAR_31++;
  }

  if (VAR_30 != VAR_29) {
   VAR_17 = -VAR_2;
   goto free_pbc;
  }

  if (VAR_19) {
   VAR_21 = FUNC_3(&VAR_10->pcidev->dev,
      VAR_19, 0, VAR_23, VAR_0);
   if (FUNC_4(&VAR_10->pcidev->dev, VAR_21)) {
    VAR_17 = -VAR_3;
    goto free_pbc;
   }

   VAR_26 = 1;
  }

  FUNC_15(VAR_22, VAR_25, 0, VAR_23, VAR_26,
       VAR_19, VAR_20, VAR_21);

  if (VAR_31) {
   VAR_17 = FUNC_16(VAR_10, VAR_11, VAR_22,
        VAR_13 + VAR_28 + 1,
        VAR_31, VAR_32);
   if (VAR_17 < 0)
    goto free_pbc_dma;
  }

  VAR_25++;
  VAR_18++;

  FUNC_13(&VAR_22->list, VAR_12);
 }

 VAR_17 = VAR_16;
 goto done;

free_pbc_dma:
 if (VAR_26)
  FUNC_7(&VAR_10->pcidev->dev, VAR_21, VAR_23, VAR_0);
free_pbc:
 if (VAR_19) {
  FUNC_11(VAR_19);
  FUNC_0(VAR_19);
 } else
  FUNC_6(VAR_11->header_cache, VAR_20, VAR_21);
free_pkt:
 FUNC_10(VAR_11->pkt_slab, VAR_22);
free_list:
 FUNC_14(&VAR_10->pcidev->dev, VAR_11, VAR_12);
done:
 return VAR_17;
}
