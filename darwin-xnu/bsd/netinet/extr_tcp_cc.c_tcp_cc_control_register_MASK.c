
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ctl_reg {int ctl_flags; int ctl_disconnect; int ctl_connect; int ctl_name; } ;
typedef scalar_t__ errno_t ;
typedef int ccdbg_control ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kern_ctl_reg*,int) ;
 scalar_t__ FUNC_1 (struct kern_ctl_reg*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct kern_ctl_reg VAR_7;
 errno_t VAR_8;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_7.ctl_name, VAR_3,
     sizeof(VAR_7.ctl_name));
 VAR_7.ctl_connect = VAR_4;
 VAR_7.ctl_disconnect = VAR_5;
 VAR_7.ctl_flags |= VAR_0;
 VAR_7.ctl_flags |= VAR_1;

 VAR_8 = FUNC_1(&VAR_7, &VAR_6);
 if (VAR_8 != 0) {
  FUNC_2(VAR_2, "failed to register tcp_cc debug control");
 }
}
