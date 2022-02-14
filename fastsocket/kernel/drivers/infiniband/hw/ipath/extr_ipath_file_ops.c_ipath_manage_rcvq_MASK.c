
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_portdata {scalar_t__ port_port; scalar_t__ port_rcvhdrtail_kvaddr; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {TYPE_1__* ipath_kregs; int ipath_rcvctrl; scalar_t__ ipath_r_portenable_shift; int ipath_unit; } ;
struct TYPE_2__ {int kr_scratch; int kr_rcvctrl; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,char*,char*,int ,scalar_t__,unsigned int) ;
 int FUNC_2 (struct ipath_portdata*) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ,scalar_t__) ;
 int FUNC_5 (struct ipath_devdata*,int ,int ) ;
 int FUNC_6 (scalar_t__,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct ipath_portdata *VAR_2, unsigned VAR_3,
        int VAR_4)
{
 struct ipath_devdata *VAR_5 = VAR_2->port_dd;

 FUNC_1(VAR_0, "%sabling rcv for unit %u port %u:%u\n",
     VAR_4 ? "en" : "dis", VAR_5->ipath_unit,
     VAR_2->port_port, VAR_3);
 if (VAR_3)
  goto bail;

 if (VAR_4) {
  if (VAR_2->port_rcvhdrtail_kvaddr)
   FUNC_2(VAR_2);
  FUNC_6(VAR_5->ipath_r_portenable_shift + VAR_2->port_port,
   &VAR_5->ipath_rcvctrl);
 } else
  FUNC_0(VAR_5->ipath_r_portenable_shift + VAR_2->port_port,
     &VAR_5->ipath_rcvctrl);
 FUNC_5(VAR_5, VAR_5->ipath_kregs->kr_rcvctrl,
    VAR_5->ipath_rcvctrl);

 FUNC_3(VAR_5, VAR_5->ipath_kregs->kr_scratch);
 if (VAR_4) {







  FUNC_4(VAR_5, VAR_1, VAR_2->port_port);
 }

bail:
 return 0;
}
