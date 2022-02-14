
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ctl_reg {int ctl_sendsize; int ctl_recvsize; int ctl_getopt; int ctl_setopt; int ctl_send; int ctl_disconnect; int ctl_connect; int ctl_bind; int ctl_flags; scalar_t__* ctl_name; } ;
struct ipsec_pcb {int dummy; } ;
typedef int kern_ctl ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kern_ctl_reg*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kern_ctl_reg*,int *) ;
 int VAR_7 ;
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
 int * VAR_22 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int ,int,int ,int *) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
 int * FUNC_14 (int,int,int ,int ) ;

errno_t
FUNC_15(void)
{
 struct kern_ctl_reg VAR_23;
 errno_t VAR_24 = 0;


 VAR_24 = FUNC_9(VAR_2, &VAR_14);
 if (VAR_24 != 0) {
  FUNC_10("ipsec_register_control - mbuf_tag_id_find_internal failed: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_21 = sizeof(struct ipsec_pcb);
 VAR_22 = FUNC_14(VAR_21,
         VAR_3 * VAR_21,
         0, VAR_4);
 if (VAR_22 == ((void*)0)) {
  FUNC_10("ipsec_register_control - zinit(ipsec_pcb) failed");
  return VAR_1;
 }





 FUNC_0(&VAR_15);

 FUNC_1(&VAR_23, sizeof(VAR_23));
 FUNC_13(VAR_23.ctl_name, VAR_2, sizeof(VAR_23.ctl_name));
 VAR_23.ctl_name[sizeof(VAR_23.ctl_name) - 1] = 0;
 VAR_23.ctl_flags = VAR_0;
 VAR_23.ctl_sendsize = 64 * 1024;
 VAR_23.ctl_recvsize = 64 * 1024;
 VAR_23.ctl_bind = VAR_8;
 VAR_23.ctl_connect = VAR_9;
 VAR_23.ctl_disconnect = VAR_10;
 VAR_23.ctl_send = VAR_12;
 VAR_23.ctl_setopt = VAR_13;
 VAR_23.ctl_getopt = VAR_11;

 VAR_24 = FUNC_3(&VAR_23, &VAR_16);
 if (VAR_24 != 0) {
  FUNC_10("ipsec_register_control - ctl_register failed: %d\n", VAR_24);
  return VAR_24;
 }


 if ((VAR_24 = FUNC_11(VAR_5, VAR_14,
           VAR_7, ((void*)0))) != 0) {
  FUNC_10("ipsec_register_control - proto_register_plumber(PF_INET, %d) failed: %d\n",
      VAR_14, VAR_24);
  FUNC_2(VAR_16);
  return VAR_24;
 }


 if ((VAR_24 = FUNC_11(VAR_6, VAR_14,
           VAR_7, ((void*)0))) != 0) {
  FUNC_12(VAR_5, VAR_14);
  FUNC_2(VAR_16);
  FUNC_10("ipsec_register_control - proto_register_plumber(PF_INET6, %d) failed: %d\n",
      VAR_14, VAR_24);
  return VAR_24;
 }

 VAR_17 = FUNC_5();
 VAR_19 = FUNC_7();
 VAR_18 = FUNC_6("ipsec", VAR_19);
 FUNC_8(&VAR_20, VAR_18, VAR_17);

 return 0;
}
