
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_portdata {int port_wait; int port_urgent; int port_flag; scalar_t__ port_cnt; } ;
struct ipath_devdata {int ipath_i_rcvavail_shift; int ipath_i_rcvavail_mask; int ipath_i_rcvurg_shift; int ipath_i_rcvurg_mask; int ipath_cfgports; int ipath_rcvctrl; TYPE_1__* ipath_kregs; scalar_t__ ipath_r_intravail_shift; struct ipath_portdata** ipath_pd; } ;
struct TYPE_2__ {int kr_rcvctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct ipath_devdata*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 int VAR_5;
 int VAR_6 = 0;
 FUNC_2();
 VAR_4 = ((VAR_3 >> VAR_2->ipath_i_rcvavail_shift) &
   VAR_2->ipath_i_rcvavail_mask) |
  ((VAR_3 >> VAR_2->ipath_i_rcvurg_shift) &
   VAR_2->ipath_i_rcvurg_mask);
 for (VAR_5 = 1; VAR_5 < VAR_2->ipath_cfgports; VAR_5++) {
  struct ipath_portdata *VAR_7 = VAR_2->ipath_pd[VAR_5];

  if (VAR_4 & (1 << VAR_5) && VAR_7 && VAR_7->port_cnt) {
   if (FUNC_3(VAR_0,
            &VAR_7->port_flag)) {
    FUNC_0(VAR_5 + VAR_2->ipath_r_intravail_shift,
       &VAR_2->ipath_rcvctrl);
    FUNC_4(&VAR_7->port_wait);
    VAR_6 = 1;
   } else if (FUNC_3(VAR_1,
            &VAR_7->port_flag)) {
    VAR_7->port_urgent++;
    FUNC_4(&VAR_7->port_wait);
   }
  }
 }
 if (VAR_6) {




  FUNC_1(VAR_2, VAR_2->ipath_kregs->kr_rcvctrl,
     VAR_2->ipath_rcvctrl);
 }
}
