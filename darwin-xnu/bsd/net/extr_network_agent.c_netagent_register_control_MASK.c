
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ctl_reg {int ctl_sendsize; int ctl_recvsize; int ctl_getopt; int ctl_setopt; int ctl_rcvd; int ctl_send; int ctl_disconnect; int ctl_connect; int ctl_flags; scalar_t__* ctl_name; } ;
typedef int kern_ctl ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kern_ctl_reg*,int) ;
 scalar_t__ FUNC_3 (struct kern_ctl_reg*,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static errno_t
FUNC_6(void)
{
 struct kern_ctl_reg VAR_13;
 errno_t VAR_14 = 0;


 VAR_12 = FUNC_1(VAR_2, VAR_3);


 VAR_14 = FUNC_4(VAR_2, &VAR_10);
 if (VAR_14 != 0) {
  FUNC_0(VAR_1, "mbuf_tag_id_find_internal failed: %d", VAR_14);
  return (VAR_14);
 }

 FUNC_2(&VAR_13, sizeof(VAR_13));
 FUNC_5(VAR_13.ctl_name, VAR_2, sizeof(VAR_13.ctl_name));
 VAR_13.ctl_name[sizeof(VAR_13.ctl_name) - 1] = 0;
 VAR_13.ctl_flags = VAR_0;
 VAR_13.ctl_sendsize = 64 * 1024;
 VAR_13.ctl_recvsize = 64 * 1024;
 VAR_13.ctl_connect = VAR_4;
 VAR_13.ctl_disconnect = VAR_5;
 VAR_13.ctl_send = VAR_8;
 VAR_13.ctl_rcvd = VAR_7;
 VAR_13.ctl_setopt = VAR_9;
 VAR_13.ctl_getopt = VAR_6;

 VAR_14 = FUNC_3(&VAR_13, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_0(VAR_1, "ctl_register failed: %d", VAR_14);
  return (VAR_14);
 }

 return (0);
}
