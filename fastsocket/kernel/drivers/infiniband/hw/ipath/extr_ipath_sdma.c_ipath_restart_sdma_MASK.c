
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {int ipath_flags; int verbs_dev; int ipath_sendctrl_lock; TYPE_1__* ipath_kregs; int ipath_sendctrl; int ipath_sdma_status; int ipath_sdma_lock; } ;
struct TYPE_2__ {int kr_scratch; int kr_sendctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct ipath_devdata *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = 1;

 if (!(VAR_7->ipath_flags & VAR_1))
  goto bail;






 FUNC_5(&VAR_7->ipath_sdma_lock, VAR_8);
 if (!FUNC_7(VAR_5, &VAR_7->ipath_sdma_status)
  || FUNC_7(VAR_6, &VAR_7->ipath_sdma_status))
   VAR_9 = 0;
 else {
  FUNC_0(VAR_3, &VAR_7->ipath_sdma_status);
  FUNC_0(VAR_4, &VAR_7->ipath_sdma_status);
  FUNC_0(VAR_2, &VAR_7->ipath_sdma_status);
 }
 FUNC_6(&VAR_7->ipath_sdma_lock, VAR_8);
 if (!VAR_9) {
  FUNC_1("invalid attempt to restart SDMA, status 0x%08lx\n",
   VAR_7->ipath_sdma_status);
  goto bail;
 }
 FUNC_5(&VAR_7->ipath_sendctrl_lock, VAR_8);




 VAR_7->ipath_sendctrl &= ~VAR_0;
 FUNC_4(VAR_7, VAR_7->ipath_kregs->kr_sendctrl, VAR_7->ipath_sendctrl);
 FUNC_3(VAR_7, VAR_7->ipath_kregs->kr_scratch);
 VAR_7->ipath_sendctrl |= VAR_0;
 FUNC_4(VAR_7, VAR_7->ipath_kregs->kr_sendctrl, VAR_7->ipath_sendctrl);
 FUNC_3(VAR_7, VAR_7->ipath_kregs->kr_scratch);
 FUNC_6(&VAR_7->ipath_sendctrl_lock, VAR_8);


 FUNC_2(VAR_7->verbs_dev);

bail:
 return;
}
