
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {int num_pports; int cfgctxts; int rcvtidcnt; int ctxtcnt; struct qib_ctxtdata** boardname; int uctxt_lock; struct qib_ctxtdata** rcd; struct page** pageshadow; TYPE_2__* pcidev; int * physshadow; int * pioavailregs_dma; int pioavailregs_phys; TYPE_1__* pport; } ;
struct qib_ctxtdata {int dummy; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cc_shadow_lock; struct qib_ctxtdata** congestion_entries_shadow; struct qib_ctxtdata** ccti_entries_shadow; struct qib_ctxtdata** ccti_entries; struct qib_ctxtdata** congestion_entries; int * statusp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,void*,int ) ;
 int FUNC_1 (struct qib_ctxtdata**) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_5 (struct page**,int) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct page**) ;

__attribute__((used)) static void FUNC_11(struct qib_devdata *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct qib_ctxtdata **VAR_7;
 unsigned long VAR_8;


 for (VAR_6 = 0; VAR_6 < VAR_4->num_pports; ++VAR_6) {
  if (VAR_4->pport[VAR_6].statusp)
   *VAR_4->pport[VAR_6].statusp &= ~VAR_2;

  FUNC_6(&VAR_4->pport[VAR_6].cc_shadow_lock);

  FUNC_1(VAR_4->pport[VAR_6].congestion_entries);
  VAR_4->pport[VAR_6].congestion_entries = ((void*)0);
  FUNC_1(VAR_4->pport[VAR_6].ccti_entries);
  VAR_4->pport[VAR_6].ccti_entries = ((void*)0);
  FUNC_1(VAR_4->pport[VAR_6].ccti_entries_shadow);
  VAR_4->pport[VAR_6].ccti_entries_shadow = ((void*)0);
  FUNC_1(VAR_4->pport[VAR_6].congestion_entries_shadow);
  VAR_4->pport[VAR_6].congestion_entries_shadow = ((void*)0);

  FUNC_8(&VAR_4->pport[VAR_6].cc_shadow_lock);
 }

 if (!VAR_3)
  FUNC_3(VAR_4);

 if (VAR_4->pioavailregs_dma) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_0,
      (void *) VAR_4->pioavailregs_dma,
      VAR_4->pioavailregs_phys);
  VAR_4->pioavailregs_dma = ((void*)0);
 }

 if (VAR_4->pageshadow) {
  struct page **VAR_9 = VAR_4->pageshadow;
  dma_addr_t *VAR_10 = VAR_4->physshadow;
  int VAR_11, VAR_12 = 0;

  for (VAR_5 = 0; VAR_5 < VAR_4->cfgctxts; VAR_5++) {
   int VAR_13 = VAR_5 * VAR_4->rcvtidcnt;
   int VAR_14 = VAR_13 + VAR_4->rcvtidcnt;

   for (VAR_11 = VAR_13; VAR_11 < VAR_14; VAR_11++) {
    if (!VAR_9[VAR_11])
     continue;
    FUNC_2(VAR_4->pcidev, VAR_10[VAR_11],
            VAR_0, VAR_1);
    FUNC_5(&VAR_9[VAR_11], 1);
    VAR_9[VAR_11] = ((void*)0);
    VAR_12++;
   }
  }

  VAR_9 = VAR_4->pageshadow;
  VAR_4->pageshadow = ((void*)0);
  FUNC_10(VAR_9);
 }
 FUNC_7(&VAR_4->uctxt_lock, VAR_8);
 VAR_7 = VAR_4->rcd;
 VAR_4->rcd = ((void*)0);
 FUNC_9(&VAR_4->uctxt_lock, VAR_8);
 for (VAR_5 = 0; VAR_7 && VAR_5 < VAR_4->ctxtcnt; VAR_5++) {
  struct qib_ctxtdata *VAR_15 = VAR_7[VAR_5];

  VAR_7[VAR_5] = ((void*)0);
  FUNC_4(VAR_4, VAR_15);
 }
 FUNC_1(VAR_7);
 FUNC_1(VAR_4->boardname);
}
