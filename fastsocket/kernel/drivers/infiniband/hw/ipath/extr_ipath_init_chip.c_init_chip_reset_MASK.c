
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipath_devdata {unsigned long long ipath_rcvctrl; unsigned long long ipath_r_tailupd_shift; int ipath_portcnt; unsigned int ipath_sendctrl; scalar_t__ ipath_rcvtidcnt; scalar_t__ ipath_rcvtidbase; scalar_t__ ipath_rcvegrcnt; scalar_t__ ipath_rcvegrbase; TYPE_2__* pcidev; TYPE_1__* ipath_kregs; int ipath_sendctrl_lock; scalar_t__ ipath_r_intravail_shift; scalar_t__ ipath_r_portenable_shift; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int kr_rcvegrbase; int kr_rcvegrcnt; int kr_rcvtidbase; int kr_rcvtidcnt; int kr_control; int kr_scratch; int kr_sendctrl; int kr_rcvctrl; } ;


 int FUNC_0 (scalar_t__,unsigned long long*) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ,unsigned long long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ipath_devdata *VAR_0)
{
 u32 VAR_1;
 int VAR_2;
 unsigned long VAR_3;





 VAR_0->ipath_rcvctrl &= ~(1ULL << VAR_0->ipath_r_tailupd_shift);
 for (VAR_2 = 0; VAR_2 < VAR_0->ipath_portcnt; VAR_2++) {
  FUNC_0(VAR_0->ipath_r_portenable_shift + VAR_2,
     &VAR_0->ipath_rcvctrl);
  FUNC_0(VAR_0->ipath_r_intravail_shift + VAR_2,
     &VAR_0->ipath_rcvctrl);
 }
 FUNC_4(VAR_0, VAR_0->ipath_kregs->kr_rcvctrl,
  VAR_0->ipath_rcvctrl);

 FUNC_5(&VAR_0->ipath_sendctrl_lock, VAR_3);
 VAR_0->ipath_sendctrl = 0U;
 FUNC_4(VAR_0, VAR_0->ipath_kregs->kr_sendctrl, VAR_0->ipath_sendctrl);
 FUNC_3(VAR_0, VAR_0->ipath_kregs->kr_scratch);
 FUNC_6(&VAR_0->ipath_sendctrl_lock, VAR_3);

 FUNC_4(VAR_0, VAR_0->ipath_kregs->kr_control, 0ULL);

 VAR_1 = FUNC_2(VAR_0, VAR_0->ipath_kregs->kr_rcvtidcnt);
 if (VAR_1 != VAR_0->ipath_rcvtidcnt)
  FUNC_1(&VAR_0->pcidev->dev, "tidcnt was %u before "
    "reset, now %u, using original\n",
    VAR_0->ipath_rcvtidcnt, VAR_1);
 VAR_1 = FUNC_2(VAR_0, VAR_0->ipath_kregs->kr_rcvtidbase);
 if (VAR_1 != VAR_0->ipath_rcvtidbase)
  FUNC_1(&VAR_0->pcidev->dev, "tidbase was %u before "
    "reset, now %u, using original\n",
    VAR_0->ipath_rcvtidbase, VAR_1);
 VAR_1 = FUNC_2(VAR_0, VAR_0->ipath_kregs->kr_rcvegrcnt);
 if (VAR_1 != VAR_0->ipath_rcvegrcnt)
  FUNC_1(&VAR_0->pcidev->dev, "egrcnt was %u before "
    "reset, now %u, using original\n",
    VAR_0->ipath_rcvegrcnt, VAR_1);
 VAR_1 = FUNC_2(VAR_0, VAR_0->ipath_kregs->kr_rcvegrbase);
 if (VAR_1 != VAR_0->ipath_rcvegrbase)
  FUNC_1(&VAR_0->pcidev->dev, "egrbase was %u before "
    "reset, now %u, using original\n",
    VAR_0->ipath_rcvegrbase, VAR_1);

 return 0;
}
