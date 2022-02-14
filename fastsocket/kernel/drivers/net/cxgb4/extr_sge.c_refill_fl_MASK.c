
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_fl {unsigned int avail; size_t pidx; size_t size; unsigned int pend_cred; scalar_t__ cntxt_id; int * desc; struct rx_sw_desc* sdesc; int alloc_failed; int large_alloc_failed; } ;
struct rx_sw_desc {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int starving_fl; scalar_t__ egr_start; } ;
struct adapter {TYPE_1__ sge; int pdev_dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*,int) ;
 struct page* FUNC_1 (int) ;
 struct page* FUNC_2 (int,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct page*,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sge_fl*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct adapter*,struct sge_fl*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct rx_sw_desc*,struct page*,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static unsigned int FUNC_13(struct adapter *VAR_7, struct sge_fl *VAR_8, int VAR_9,
         gfp_t VAR_10)
{
 struct page *VAR_11;
 dma_addr_t VAR_12;
 unsigned int VAR_13 = VAR_8->avail;
 __be64 *VAR_14 = &VAR_8->desc[VAR_8->pidx];
 struct rx_sw_desc *VAR_15 = &VAR_8->sdesc[VAR_8->pidx];

 VAR_10 |= VAR_6 | VAR_4;
 while (VAR_9--) {
  VAR_11 = FUNC_1(VAR_10);
  if (FUNC_12(!VAR_11)) {
   VAR_8->alloc_failed++;
   break;
  }

  VAR_12 = FUNC_4(VAR_7->pdev_dev, VAR_11, 0, VAR_1,
           VAR_2);
  if (FUNC_12(FUNC_5(VAR_7->pdev_dev, VAR_12))) {
   FUNC_7(VAR_11);
   goto out;
  }
  *VAR_14++ = FUNC_3(VAR_12);

  FUNC_10(VAR_15, VAR_11, VAR_12);
  VAR_15++;

  VAR_8->avail++;
  if (++VAR_8->pidx == VAR_8->size) {
   VAR_8->pidx = 0;
   VAR_15 = VAR_8->sdesc;
   VAR_14 = VAR_8->desc;
  }
 }

out: VAR_13 = VAR_8->avail - VAR_13;
 VAR_8->pend_cred += VAR_13;
 FUNC_8(VAR_7, VAR_8);

 if (FUNC_12(FUNC_6(VAR_8))) {
  FUNC_11();
  FUNC_9(VAR_8->cntxt_id - VAR_7->sge.egr_start,
   VAR_7->sge.starving_fl);
 }

 return VAR_13;
}
