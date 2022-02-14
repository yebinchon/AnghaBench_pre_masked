
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags1; } ;
struct mptcb {scalar_t__ mpt_sndnxt; scalar_t__ mpt_sndmax; scalar_t__ mpt_state; scalar_t__ mpt_sndwnd; scalar_t__ mpt_snduna; TYPE_1__* mpt_mpte; } ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ mpte_reinjectq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct socket* FUNC_2 (TYPE_1__*) ;

boolean_t
FUNC_3(struct mptcb *VAR_5, boolean_t VAR_6)
{
 struct socket *VAR_7 = FUNC_2(VAR_5->mpt_mpte);




 if (!VAR_6 && VAR_5->mpt_mpte->mpte_reinjectq)
  return (VAR_4);
 if (!(VAR_7->so_flags1 & VAR_3) && FUNC_0(VAR_5->mpt_sndnxt, VAR_5->mpt_sndmax))
  return (VAR_0);

 if (FUNC_1(VAR_5->mpt_snduna + VAR_5->mpt_sndwnd, VAR_5->mpt_sndnxt))
  return (VAR_0);

 if (VAR_5->mpt_sndnxt + 1 == VAR_5->mpt_sndmax && VAR_5->mpt_state > VAR_1)
  return (VAR_0);

 if (VAR_5->mpt_state >= VAR_2)
  return (VAR_0);

 return (VAR_4);
}
