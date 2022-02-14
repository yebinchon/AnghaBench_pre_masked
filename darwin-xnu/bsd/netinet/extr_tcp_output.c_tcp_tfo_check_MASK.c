
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcpcb {int t_flags; int t_flagsext; scalar_t__ t_rxtshift; unsigned int t_maxopd; int t_tfo_stats; TYPE_1__* t_inpcb; } ;
struct TYPE_5__ {unsigned int sb_cc; } ;
struct socket {int so_flags1; int so_flags; TYPE_2__ so_snd; } ;
struct mptcp_mpcapable_opt_common {int dummy; } ;
typedef int mptcp_key_t ;
typedef int int32_t ;
struct TYPE_6__ {int tcps_tfo_heuristics_disable; } ;
struct TYPE_4__ {struct socket* inp_socket; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (struct tcpcb*) ;
 TYPE_3__ VAR_15 ;

__attribute__((used)) static int32_t FUNC_3(struct tcpcb *VAR_16, int32_t VAR_17)
{
 struct socket *VAR_18 = VAR_16->t_inpcb->inp_socket;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;

 if (VAR_16->t_flags & VAR_10)
  goto fallback;

 if ((VAR_18->so_flags1 & VAR_1) &&
     !(VAR_16->t_flagsext & VAR_9))
  return (VAR_17);

 if (!FUNC_2(VAR_16)) {
  VAR_16->t_tfo_stats |= VAR_7;
  VAR_15.tcps_tfo_heuristics_disable++;
  goto fallback;
 }

 if (VAR_18->so_flags1 & VAR_1)
  return (VAR_17);

 VAR_19 += VAR_4;

 if (VAR_16->t_flags & VAR_11)
  VAR_19 += 4;







 if (VAR_16->t_flags & VAR_12)
  VAR_19 += VAR_6;

 if (FUNC_0(VAR_16))
  VAR_19 += VAR_5;




 if (VAR_0 - VAR_19 < VAR_3)
  goto fallback;

 VAR_20 = FUNC_1(VAR_16);
 if (VAR_20 == 0)

  return (0);


 if (VAR_0 - VAR_19 < VAR_20)
  goto fallback;


 if (VAR_18->so_snd.sb_cc > (VAR_16->t_maxopd - VAR_0))
  goto fallback;


 return (VAR_17);

fallback:
 VAR_16->t_flagsext &= ~VAR_8;
 return (0);
}
