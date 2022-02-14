
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utun_pcb {int dummy; } ;
struct kern_ctl_reg {int ctl_flags; int ctl_sendsize; int ctl_recvsize; int ctl_rcvd; int ctl_getopt; int ctl_setopt; int ctl_send; int ctl_disconnect; int ctl_connect; int ctl_bind; scalar_t__* ctl_name; } ;
typedef int kern_ctl ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct kern_ctl_reg*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kern_ctl_reg*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int ,int,int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (scalar_t__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_13 () ;
 int * FUNC_14 (int,int,int ,int ) ;

errno_t
FUNC_15(void)
{
 struct kern_ctl_reg VAR_25;
 errno_t VAR_26 = 0;


 VAR_26 = FUNC_8(VAR_5, &VAR_16);
 if (VAR_26 != 0) {
  FUNC_9("utun_register_control - mbuf_tag_id_find_internal failed: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_23 = sizeof(struct utun_pcb);
 VAR_24 = FUNC_14(VAR_23,
        VAR_6 * VAR_23,
        0, VAR_7);
 if (VAR_24 == ((void*)0)) {
  FUNC_9("utun_register_control - zinit(utun_pcb) failed");
  return VAR_2;
 }





 FUNC_0(&VAR_17);

 FUNC_1(&VAR_25, sizeof(VAR_25));
 FUNC_12(VAR_25.ctl_name, VAR_5, sizeof(VAR_25.ctl_name));
 VAR_25.ctl_name[sizeof(VAR_25.ctl_name) - 1] = 0;
 VAR_25.ctl_flags = VAR_0 | VAR_1;
 VAR_25.ctl_sendsize = 512 * 1024;
 VAR_25.ctl_recvsize = 512 * 1024;
 VAR_25.ctl_bind = VAR_9;
 VAR_25.ctl_connect = VAR_10;
 VAR_25.ctl_disconnect = VAR_11;
 VAR_25.ctl_send = VAR_14;
 VAR_25.ctl_setopt = VAR_15;
 VAR_25.ctl_getopt = VAR_12;
 VAR_25.ctl_rcvd = VAR_13;

 VAR_26 = FUNC_3(&VAR_25, &VAR_18);
 if (VAR_26 != 0) {
  FUNC_9("utun_register_control - ctl_register failed: %d\n", VAR_26);
  return VAR_26;
 }


 if ((VAR_26 = FUNC_10(VAR_3, VAR_16,
           VAR_8, ((void*)0))) != 0) {
  FUNC_9("utun_register_control - proto_register_plumber(PF_INET, %d) failed: %d\n",
      VAR_16, VAR_26);
  FUNC_2(VAR_18);
  return VAR_26;
 }


 if ((VAR_26 = FUNC_10(VAR_4, VAR_16,
           VAR_8, ((void*)0))) != 0) {
  FUNC_11(VAR_3, VAR_16);
  FUNC_2(VAR_18);
  FUNC_9("utun_register_control - proto_register_plumber(PF_INET6, %d) failed: %d\n",
      VAR_16, VAR_26);
  return VAR_26;
 }

 VAR_19 = FUNC_4();
 VAR_21 = FUNC_6();
 VAR_20 = FUNC_5("utun", VAR_21);

 FUNC_7(&VAR_22, VAR_20, VAR_19);

 return 0;
}
