
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {int ipath_sendctrl_lock; TYPE_1__* ipath_kregs; int ipath_sendctrl; int verbs_dev; } ;
struct TYPE_2__ {int kr_scratch; int kr_sendctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->verbs_dev);
 if (VAR_3 > 0)
  goto set;

 return;
set:
 FUNC_3(&VAR_1->ipath_sendctrl_lock, VAR_2);
 VAR_1->ipath_sendctrl |= VAR_0;
 FUNC_2(VAR_1, VAR_1->ipath_kregs->kr_sendctrl,
    VAR_1->ipath_sendctrl);
 FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_scratch);
 FUNC_4(&VAR_1->ipath_sendctrl_lock, VAR_2);
}
