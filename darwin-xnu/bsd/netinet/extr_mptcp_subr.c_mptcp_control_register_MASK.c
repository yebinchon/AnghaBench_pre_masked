
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ctl_reg {int ctl_flags; int ctl_send; int ctl_disconnect; int ctl_connect; int ctl_name; } ;
typedef int mptcp_kern_ctl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kern_ctl_reg*,int) ;
 int FUNC_1 (struct kern_ctl_reg*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(void)
{

 struct kern_ctl_reg VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_6.ctl_name, VAR_1,
     sizeof(VAR_6.ctl_name));
 VAR_6.ctl_connect = VAR_3;
 VAR_6.ctl_disconnect = VAR_4;
 VAR_6.ctl_send = VAR_5;
 VAR_6.ctl_flags = VAR_0;

 (void)FUNC_1(&VAR_6, &VAR_2);
}
