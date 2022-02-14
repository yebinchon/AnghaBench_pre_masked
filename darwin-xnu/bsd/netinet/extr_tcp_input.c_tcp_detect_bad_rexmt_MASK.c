
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsecr; } ;
struct tcphdr {int th_flags; } ;
struct tcpcb {int t_srtt; int t_rxtshift; int t_flagsext; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tcpcb*) ;
 scalar_t__ VAR_4 ;

int
FUNC_3(struct tcpcb *VAR_5, struct tcphdr *VAR_6,
 struct tcpopt *VAR_7, u_int32_t VAR_8)
{
 int32_t VAR_9, VAR_10;
 VAR_10 = (VAR_5->t_srtt >> (VAR_0 + 1));


 if (FUNC_0(VAR_5) && (VAR_6->th_flags & VAR_2))
  return (0);
 if (FUNC_2(VAR_5)) {
  if (VAR_8 > 0 && (VAR_7->to_flags & VAR_3)
      && VAR_7->to_tsecr != 0
      && FUNC_1(VAR_7->to_tsecr, VAR_8))
      return (1);
 } else {
  if ((VAR_5->t_rxtshift == 1
      || (VAR_5->t_flagsext & VAR_1))
      && VAR_8 > 0) {
   VAR_9 = (int32_t)(VAR_4 - VAR_8);
   if (VAR_9 < VAR_10)
    return(1);
  }
 }
 return(0);
}
