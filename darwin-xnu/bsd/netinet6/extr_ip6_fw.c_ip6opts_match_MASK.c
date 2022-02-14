
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_char ;
struct mbuf {int m_len; } ;
struct ip6_hdr {int ip6_nxt; int ip6_plen; } ;
struct ip6_fw {scalar_t__ fw_ip6opt; scalar_t__ fw_ip6nopt; } ;
struct ip6_frag {int ip6f_offlg; } ;
struct ip6_ext {int ip6e_nxt; int ip6e_len; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;







 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ip6_hdr **VAR_8, struct ip6_fw *VAR_9, struct mbuf **VAR_10,
       int *VAR_11, int *VAR_12, u_short *VAR_13)
{
 int VAR_14;
 struct ip6_hdr *VAR_15 = *VAR_8;
 struct ip6_ext *VAR_16;
 u_char VAR_17, VAR_18, VAR_19;

 VAR_17 = VAR_9->fw_ip6opt;
 VAR_18 = VAR_19 = VAR_9->fw_ip6nopt;

 *VAR_12 = VAR_15->ip6_nxt;
 *VAR_11 = sizeof(struct ip6_hdr);
 VAR_14 = FUNC_0(VAR_15->ip6_plen) + sizeof(struct ip6_hdr);
 while (*VAR_11 < VAR_14) {
  VAR_16 = (struct ip6_ext *)((caddr_t) VAR_15 + *VAR_11);
  if ((*VAR_10)->m_len < *VAR_11 + sizeof(*VAR_16))
   goto opts_check;

  switch(*VAR_12) {
  case 131:
   if ((*VAR_10)->m_len >= *VAR_11 + sizeof(struct ip6_frag)) {
    struct ip6_frag *VAR_20;

    VAR_20 = (struct ip6_frag *) ((caddr_t)VAR_15 + *VAR_11);
    *VAR_13 = VAR_20->ip6f_offlg & VAR_0;
   }
   VAR_17 &= ~VAR_3;
   VAR_18 &= ~VAR_3;
   *VAR_11 += sizeof(struct ip6_frag);
   break;
  case 134:
   VAR_17 &= ~VAR_1;
   VAR_18 &= ~VAR_1;
   *VAR_11 += (VAR_16->ip6e_len + 2) << 2;
   break;
  default:
   switch (*VAR_12) {
   case 130:
    VAR_17 &= ~VAR_4;
    VAR_18 &= ~VAR_4;
    break;
   case 128:
    VAR_17 &= ~VAR_7;
    VAR_18 &= ~VAR_7;
    break;
   case 132:
    VAR_17 &= ~VAR_2;
    VAR_18 &= ~VAR_2;
    break;
   case 129:
    VAR_17 &= ~VAR_5;
    VAR_18 &= ~VAR_5;
    goto opts_check;
    break;
   case 133:
    VAR_17 &= ~VAR_6;
    VAR_18 &= ~VAR_6;
    break;
   default:
    goto opts_check;
    break;
   }
   *VAR_11 += (VAR_16->ip6e_len + 1) << 3;
   break;
  }
  *VAR_12 = VAR_16->ip6e_nxt;

 }
 opts_check:
 if (VAR_9->fw_ip6opt == VAR_9->fw_ip6nopt)
  return 1;

 if (VAR_17 == 0 && VAR_18 == VAR_19)
  return 1;
 else
  return 0;
}
