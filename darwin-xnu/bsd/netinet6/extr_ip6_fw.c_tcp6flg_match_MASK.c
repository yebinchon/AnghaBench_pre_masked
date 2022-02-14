
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tcphdr {int th_flags; } ;
struct ip6_fw {int fw_ipflg; int fw_tcpf; int fw_tcpnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct tcphdr *VAR_4, struct ip6_fw *VAR_5)
{
 u_char VAR_6, VAR_7;






 if ((VAR_5->fw_ipflg & VAR_0) &&
     ((VAR_4->th_flags & (VAR_2 | VAR_1 |
     VAR_3)) == VAR_3))
  return 0;

 VAR_6 = VAR_4->th_flags & VAR_5->fw_tcpf;
 VAR_7 = VAR_4->th_flags & VAR_5->fw_tcpnf;

 if (VAR_6 != VAR_5->fw_tcpf)
  return 0;
 if (VAR_7)
  return 0;

 return 1;
}
