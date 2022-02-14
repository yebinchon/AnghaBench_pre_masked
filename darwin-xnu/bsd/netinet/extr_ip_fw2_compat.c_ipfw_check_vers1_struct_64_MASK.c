
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int s_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_13__ {int s_addr; } ;
struct TYPE_11__ {int * name; } ;
struct TYPE_12__ {TYPE_3__ fu_via_if_compat; } ;
struct TYPE_9__ {int * name; } ;
struct TYPE_10__ {TYPE_1__ fu_via_if_compat; } ;
struct ip_fw_compat_64 {int fw_flg; scalar_t__ fw_prot; scalar_t__ fw_tcpf; scalar_t__ fw_tcpnf; int fw_reject_code_compat; int fw_divert_port_compat; scalar_t__ fw_nports; TYPE_8__ fw_dmsk; TYPE_7__ fw_dst; TYPE_6__ fw_smsk; TYPE_5__ fw_src; TYPE_4__ fw_out_if; TYPE_2__ fw_in_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int VAR_14 ;


 int FUNC_0 (struct ip_fw_compat_64*) ;
 int FUNC_1 (struct ip_fw_compat_64*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_compat_64 *VAR_17)
{

 if ((VAR_17->fw_flg & ~VAR_10) != 0) {





  return (VAR_0);
 }
 if (VAR_17->fw_flg == VAR_4) {

  return 0 ;
 }

 if (!(VAR_17->fw_flg & (VAR_9 | VAR_13))) {




  return (VAR_0);
 }

 if (((VAR_17->fw_flg & VAR_8)
       && !*VAR_17->fw_in_if.fu_via_if_compat.name)
     || ((VAR_17->fw_flg & VAR_12)
       && !*VAR_17->fw_out_if.fu_via_if_compat.name)) {




  return (VAR_0);
 }

 if ((VAR_17->fw_flg & VAR_1) == VAR_1) {
  ;
 } else if ((VAR_17->fw_flg & VAR_9)
     && (VAR_17->fw_flg & VAR_11)) {





  return (VAR_0);
 }

 if ((VAR_17->fw_flg & VAR_14) && FUNC_1(VAR_17) < 2) {





  return (VAR_0);
 }
 if ((VAR_17->fw_flg & VAR_6) && FUNC_0(VAR_17) < 2) {





  return (VAR_0);
 }
 if (FUNC_1(VAR_17) + FUNC_0(VAR_17) > VAR_15) {





  return (VAR_0);
 }



 if ((VAR_17->fw_prot != VAR_2) &&
     (VAR_17->fw_prot != VAR_3) &&
     (FUNC_1(VAR_17) || FUNC_0(VAR_17))) {





  return (VAR_0);
 }






 if ((VAR_17->fw_src.s_addr & (~VAR_17->fw_smsk.s_addr)) ||
  (VAR_17->fw_dst.s_addr & (~VAR_17->fw_dmsk.s_addr))) {




  return (VAR_0);
 }

 if ((VAR_17->fw_flg & VAR_7) &&
  (VAR_17->fw_prot == VAR_3 || VAR_17->fw_prot == VAR_2)) {
  if (VAR_17->fw_nports) {




   return (VAR_0);
  }
  if (VAR_17->fw_prot == VAR_2 &&
   VAR_17->fw_tcpf != VAR_17->fw_tcpnf) {




   return (VAR_0);
  }
 }


 switch (VAR_17->fw_flg & VAR_5)
 {
 case 131:
  if (VAR_17->fw_reject_code_compat >= 0x100
      && !(VAR_17->fw_prot == VAR_2
        && VAR_17->fw_reject_code_compat == VAR_16)) {




   return (VAR_0);
  }
  break;
 case 135:
 case 129:
 case 133:
 case 132:
  if (VAR_17->fw_divert_port_compat == 0) {




   return (VAR_0);
  }
  break;
 case 136:
 case 138:
 case 137:
 case 130:
 case 134:
 case 128:
  break;
 default:




  return (VAR_0);
 }

 return 0;
}
