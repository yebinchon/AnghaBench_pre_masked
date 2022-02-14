
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tcpopt {int to_flags; } ;
struct tcphdr {int dummy; } ;
struct tcpcb {int dummy; } ;
struct mptcb {int mpt_mpte; } ;
 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int*,struct tcphdr*,int) ;
 int FUNC_1 (struct tcpcb*,int*,struct tcphdr*) ;
 int FUNC_2 (struct tcpcb*,int*,struct tcphdr*,int) ;
 int FUNC_3 (struct tcpcb*,int*,struct tcphdr*) ;
 int FUNC_4 (struct tcpcb*,int*,struct tcphdr*,int) ;
 scalar_t__ FUNC_5 (struct tcpcb*,int) ;
 int FUNC_6 (int ) ;
 struct mptcb* FUNC_7 (struct tcpcb*) ;

void
FUNC_8(struct tcpcb *VAR_1, u_char *VAR_2, struct tcphdr *VAR_3,
    struct tcpopt *VAR_4, int VAR_5)
{
 int VAR_6;
 struct mptcb *VAR_7 = FUNC_7(VAR_1);

 if (VAR_7 == ((void*)0))
  return;

 FUNC_6(VAR_7->mpt_mpte);


 if (VAR_5 < 4)
  return;

 VAR_6 = (VAR_2[2] >> 4);

 if (FUNC_5(VAR_1, VAR_6) == 0)
  return;

 switch (VAR_6) {
  case 134:
   FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
   break;
  case 130:
   FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5);
   break;
  case 133:
   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
   break;
  case 131:
   FUNC_1(VAR_1, VAR_2, VAR_3);
   break;
  case 132:
   FUNC_3(VAR_1, VAR_2, VAR_3);
   break;
  case 135:
  case 128:
  case 129:
   VAR_4->to_flags |= VAR_0;
   break;
  default:
   break;
 }
 return;
}
