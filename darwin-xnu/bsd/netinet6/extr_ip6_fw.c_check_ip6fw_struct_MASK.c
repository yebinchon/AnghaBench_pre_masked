
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


struct TYPE_16__ {int* s6_addr32; } ;
struct TYPE_15__ {int* s6_addr32; } ;
struct TYPE_14__ {int* s6_addr32; } ;
struct TYPE_13__ {int* s6_addr32; } ;
struct TYPE_11__ {int * name; } ;
struct TYPE_12__ {TYPE_3__ fu_via_if; } ;
struct TYPE_9__ {int * name; } ;
struct TYPE_10__ {TYPE_1__ fu_via_if; } ;
struct ip6_fw {int fw_flg; scalar_t__ fw_prot; scalar_t__ fw_tcpf; scalar_t__ fw_tcpnf; int fw_reject_code; int fw_divert_port; scalar_t__ fw_nports; TYPE_8__ fw_dmsk; TYPE_7__ fw_dst; TYPE_6__ fw_smsk; TYPE_5__ fw_src; TYPE_4__ fw_out_if; TYPE_2__ fw_in_if; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int VAR_12 ;

 int FUNC_0 (struct ip6_fw*) ;
 int FUNC_1 (struct ip6_fw*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 int VAR_15 ;

__attribute__((used)) static struct ip6_fw *
FUNC_3(struct ip6_fw *VAR_16)
{

 if ((VAR_16->fw_flg & ~VAR_8) != 0) {
  FUNC_2(("%s undefined flag bits set (flags=%x)\n",
      VAR_15, VAR_16->fw_flg));
  return (((void*)0));
 }

 if (!(VAR_16->fw_flg & (VAR_7 | VAR_11))) {
  FUNC_2(("%s neither in nor out\n", VAR_15));
  return (((void*)0));
 }

 if (((VAR_16->fw_flg & VAR_6)
       && !*VAR_16->fw_in_if.fu_via_if.name)
     || ((VAR_16->fw_flg & VAR_10)
       && !*VAR_16->fw_out_if.fu_via_if.name)) {
  FUNC_2(("%s empty interface name\n", VAR_15));
  return (((void*)0));
 }

 if ((VAR_16->fw_flg & VAR_0) == VAR_0) {
  ;
 } else if ((VAR_16->fw_flg & VAR_7)
     && (VAR_16->fw_flg & VAR_9)) {
  FUNC_2(("%s outgoing interface check on incoming\n",
      VAR_15));
  return (((void*)0));
 }

 if ((VAR_16->fw_flg & VAR_12) && FUNC_1(VAR_16) < 2) {
  FUNC_2(("%s src range set but n_src_p=%d\n",
      VAR_15, FUNC_1(VAR_16)));
  return (((void*)0));
 }
 if ((VAR_16->fw_flg & VAR_4) && FUNC_0(VAR_16) < 2) {
  FUNC_2(("%s dst range set but n_dst_p=%d\n",
      VAR_15, FUNC_0(VAR_16)));
  return (((void*)0));
 }
 if (FUNC_1(VAR_16) + FUNC_0(VAR_16) > VAR_13) {
  FUNC_2(("%s too many ports (%d+%d)\n",
      VAR_15, FUNC_1(VAR_16), FUNC_0(VAR_16)));
  return (((void*)0));
 }



 if ((VAR_16->fw_prot != VAR_1) &&
     (VAR_16->fw_prot != VAR_2) &&
     (FUNC_1(VAR_16) || FUNC_0(VAR_16))) {
  FUNC_2(("%s port(s) specified for non TCP/UDP rule\n",
      VAR_15));
  return(((void*)0));
 }






 if ((VAR_16->fw_src.s6_addr32[0] & (~VAR_16->fw_smsk.s6_addr32[0])) ||
  (VAR_16->fw_src.s6_addr32[1] & (~VAR_16->fw_smsk.s6_addr32[1])) ||
  (VAR_16->fw_src.s6_addr32[2] & (~VAR_16->fw_smsk.s6_addr32[2])) ||
  (VAR_16->fw_src.s6_addr32[3] & (~VAR_16->fw_smsk.s6_addr32[3])) ||
  (VAR_16->fw_dst.s6_addr32[0] & (~VAR_16->fw_dmsk.s6_addr32[0])) ||
  (VAR_16->fw_dst.s6_addr32[1] & (~VAR_16->fw_dmsk.s6_addr32[1])) ||
  (VAR_16->fw_dst.s6_addr32[2] & (~VAR_16->fw_dmsk.s6_addr32[2])) ||
  (VAR_16->fw_dst.s6_addr32[3] & (~VAR_16->fw_dmsk.s6_addr32[3]))) {
  FUNC_2(("%s rule never matches\n", VAR_15));
  return(((void*)0));
 }

 if ((VAR_16->fw_flg & VAR_5) &&
  (VAR_16->fw_prot == VAR_2 || VAR_16->fw_prot == VAR_1)) {
  if (VAR_16->fw_nports) {
   FUNC_2(("%s cannot mix 'frag' and ports\n", VAR_15));
   return(((void*)0));
  }
  if (VAR_16->fw_prot == VAR_1 &&
   VAR_16->fw_tcpf != VAR_16->fw_tcpnf) {
   FUNC_2(("%s cannot mix 'frag' with TCP flags\n", VAR_15));
   return(((void*)0));
  }
 }


 switch (VAR_16->fw_flg & VAR_3)
 {
 case 130:
  if (VAR_16->fw_reject_code >= 0x100
      && !(VAR_16->fw_prot == VAR_1
        && VAR_16->fw_reject_code == VAR_14)) {
   FUNC_2(("%s unknown reject code\n", VAR_15));
   return(((void*)0));
  }
  break;
 case 131:
 case 128:
  if (VAR_16->fw_divert_port == 0) {
   FUNC_2(("%s can't divert to port 0\n", VAR_15));
   return (((void*)0));
  }
  break;
 case 132:
 case 134:
 case 133:
 case 129:
  break;
 default:
  FUNC_2(("%s invalid command\n", VAR_15));
  return(((void*)0));
 }

 return VAR_16;
}
