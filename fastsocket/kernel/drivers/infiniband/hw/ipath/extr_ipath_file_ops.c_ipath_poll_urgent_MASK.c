
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ipath_portdata {scalar_t__ port_urgent; scalar_t__ port_urgent_poll; int port_wait; int port_flag; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct ipath_portdata*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned int FUNC_5(struct ipath_portdata *VAR_3,
          struct file *VAR_4,
          struct poll_table_struct *VAR_5)
{
 unsigned VAR_6 = 0;
 struct ipath_devdata *VAR_7;

 VAR_7 = VAR_3->port_dd;


 FUNC_2();
 VAR_6 = FUNC_0(VAR_3);

 if (VAR_3->port_urgent != VAR_3->port_urgent_poll) {
  VAR_6 |= VAR_1 | VAR_2;
  VAR_3->port_urgent_poll = VAR_3->port_urgent;
 }

 if (!VAR_6) {

  FUNC_3(VAR_0, &VAR_3->port_flag);

  FUNC_4();
  FUNC_1(VAR_4, &VAR_3->port_wait, VAR_5);
 }

 return VAR_6;
}
