
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ctl_reg {char* ctl_name; int ctl_flags; int ctl_rcvd; int ctl_send; int ctl_disconnect; int ctl_connect; int ctl_recvsize; int ctl_sendsize; } ;
typedef int ctl_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct kern_ctl_reg*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct kern_ctl_reg*,int ,int) ;
 int VAR_11 ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct kern_ctl_reg VAR_12;
 int VAR_13;

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));

 FUNC_3(VAR_12.ctl_name, VAR_4, sizeof(VAR_12.ctl_name));
 VAR_12.ctl_name[sizeof(VAR_12.ctl_name)-1] = '\0';
 VAR_12.ctl_flags = VAR_0 | VAR_1;
 VAR_12.ctl_sendsize = VAR_3;
 VAR_12.ctl_recvsize = VAR_2;

 VAR_12.ctl_connect = VAR_6;
 VAR_12.ctl_disconnect = VAR_7;
 VAR_12.ctl_send = VAR_9;
 VAR_12.ctl_rcvd = VAR_8;

 VAR_13 = FUNC_1(&VAR_12, &VAR_10);

 if (VAR_13) {
  FUNC_0(VAR_5, &VAR_11, "flow_divert_kctl_init - ctl_register failed: %d\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
