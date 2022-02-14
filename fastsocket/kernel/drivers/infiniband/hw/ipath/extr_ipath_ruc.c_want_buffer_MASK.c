
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qp_type; } ;
struct ipath_qp {TYPE_2__ ibqp; } ;
struct ipath_devdata {int ipath_flags; int ipath_sendctrl_lock; TYPE_1__* ipath_kregs; int ipath_sendctrl; } ;
struct TYPE_3__ {int kr_scratch; int kr_sendctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipath_devdata*,int ) ;
 int FUNC_1 (struct ipath_devdata*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipath_devdata *VAR_3, struct ipath_qp *VAR_4)
{
 if (!(VAR_3->ipath_flags & VAR_2) ||
     VAR_4->ibqp.qp_type == VAR_0) {
  unsigned long VAR_5;

  FUNC_2(&VAR_3->ipath_sendctrl_lock, VAR_5);
  VAR_3->ipath_sendctrl |= VAR_1;
  FUNC_1(VAR_3, VAR_3->ipath_kregs->kr_sendctrl,
     VAR_3->ipath_sendctrl);
  FUNC_0(VAR_3, VAR_3->ipath_kregs->kr_scratch);
  FUNC_3(&VAR_3->ipath_sendctrl_lock, VAR_5);
 }
}
