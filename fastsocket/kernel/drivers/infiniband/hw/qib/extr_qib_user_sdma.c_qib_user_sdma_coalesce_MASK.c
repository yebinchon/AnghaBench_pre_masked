
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_pkt {int naddr; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct page {int dummy; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int *,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct qib_user_sdma_pkt*,int,int ,int,int ,int,struct page*,void*,int ) ;

__attribute__((used)) static int FUNC_8(const struct qib_devdata *VAR_4,
      struct qib_user_sdma_pkt *VAR_5,
      const struct iovec *VAR_6,
      unsigned long VAR_7)
{
 int VAR_8 = 0;
 struct page *VAR_9 = FUNC_1(VAR_3);
 void *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 dma_addr_t VAR_14;

 if (!VAR_9) {
  VAR_8 = -VAR_2;
  goto done;
 }

 VAR_11 = FUNC_5(VAR_9);
 VAR_10 = VAR_11;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  int VAR_15;

  VAR_15 = FUNC_2(VAR_11,
          VAR_6[VAR_12].iov_base, VAR_6[VAR_12].iov_len);
  if (VAR_15) {
   VAR_8 = -VAR_1;
   goto free_unmap;
  }

  VAR_11 += VAR_6[VAR_12].iov_len;
  VAR_13 += VAR_6[VAR_12].iov_len;
 }

 VAR_14 = FUNC_3(&VAR_4->pcidev->dev, VAR_9, 0, VAR_13,
    VAR_0);
 if (FUNC_4(&VAR_4->pcidev->dev, VAR_14)) {
  VAR_8 = -VAR_2;
  goto free_unmap;
 }

 FUNC_7(VAR_5, 1, 0, VAR_13, 0, 1, VAR_9, VAR_10,
    VAR_14);
 VAR_5->naddr = 2;

 goto done;

free_unmap:
 FUNC_6(VAR_9);
 FUNC_0(VAR_9);
done:
 return VAR_8;
}
