
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct tcpcb {int dummy; } ;
struct mptcb {int mpt_sndmax; int mpt_mpte; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mptcb* FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_2(struct tcpcb *VAR_1, u_int64_t VAR_2, u_int32_t VAR_3)
{
 struct mptcb *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->mpt_mpte);

 VAR_2 = (VAR_4->mpt_sndmax & VAR_0) | VAR_2;
 if ((VAR_2 + VAR_3) == VAR_4->mpt_sndmax)
  return (1);

 return (0);
}
