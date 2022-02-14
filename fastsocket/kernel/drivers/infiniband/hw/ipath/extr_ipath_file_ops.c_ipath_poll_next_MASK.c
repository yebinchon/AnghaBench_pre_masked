
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct poll_table_struct {int dummy; } ;
struct ipath_portdata {int port_wait; scalar_t__ port_port; int port_flag; scalar_t__ port_rcvhdrtail_kvaddr; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int ipath_rhdrhead_intr_off; int ipath_rcvctrl; TYPE_1__* ipath_kregs; scalar_t__ ipath_r_intravail_shift; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int kr_rcvctrl; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ipath_portdata*) ;
 unsigned int FUNC_1 (struct ipath_portdata*) ;
 int FUNC_2 (struct ipath_devdata*,int ,scalar_t__) ;
 int FUNC_3 (struct ipath_devdata*,int ,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ,int,scalar_t__) ;
 int FUNC_5 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 () ;

__attribute__((used)) static unsigned int FUNC_9(struct ipath_portdata *VAR_5,
        struct file *VAR_6,
        struct poll_table_struct *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 unsigned VAR_10 = 0;
 struct ipath_devdata *VAR_11;

 VAR_11 = VAR_5->port_dd;


 FUNC_6();
 VAR_10 = FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_11, VAR_3, VAR_5->port_port);
 if (VAR_5->port_rcvhdrtail_kvaddr)
  VAR_9 = FUNC_0(VAR_5);
 else
  VAR_9 = FUNC_2(VAR_11, VAR_4, VAR_5->port_port);

 if (VAR_8 != VAR_9)
  VAR_10 |= VAR_1 | VAR_2;
 else {

  FUNC_7(VAR_0, &VAR_5->port_flag);

  FUNC_8();

  FUNC_7(VAR_5->port_port + VAR_11->ipath_r_intravail_shift,
   &VAR_11->ipath_rcvctrl);

  FUNC_3(VAR_11, VAR_11->ipath_kregs->kr_rcvctrl,
     VAR_11->ipath_rcvctrl);

  if (VAR_11->ipath_rhdrhead_intr_off)
   FUNC_4(VAR_11, VAR_3,
      VAR_11->ipath_rhdrhead_intr_off | VAR_8,
      VAR_5->port_port);

  FUNC_5(VAR_6, &VAR_5->port_wait, VAR_7);
 }

 return VAR_10;
}
