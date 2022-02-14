
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int rcv_by_unackwin; int t_maxseg; int t_flags; int t_flagsext; scalar_t__ rcv_nostrack_pkts; scalar_t__ rcv_waitforss; scalar_t__ rcv_nostrack_ts; scalar_t__ rcv_unackwin; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static inline int
FUNC_2(struct tcpcb *VAR_10, int VAR_11)
{
 if (VAR_10->rcv_by_unackwin >= (VAR_6 * VAR_10->t_maxseg) &&
     FUNC_0(VAR_10->rcv_unackwin, VAR_8))
  VAR_10->t_flags |= VAR_4;
 else
  VAR_10->t_flags &= ~VAR_4;


 if (FUNC_1(VAR_8, VAR_10->rcv_unackwin + VAR_7))
  VAR_10->t_flags &= ~VAR_4;





 if (VAR_11 & ~VAR_5)
  VAR_10->t_flags &= ~VAR_4;

 if (VAR_10->t_flagsext & VAR_1) {
  if (VAR_10->rcv_nostrack_pkts >= VAR_0) {
   VAR_10->t_flagsext &= ~VAR_1;
   VAR_10->rcv_nostrack_pkts = 0;
   VAR_10->rcv_nostrack_ts = 0;
  } else {
   VAR_10->rcv_nostrack_pkts++;
  }
 }

  if (!(VAR_10->t_flagsext & (VAR_2|VAR_1)) &&
     (VAR_10->t_flags & VAR_4) &&
     (!(VAR_10->t_flagsext & VAR_3) ||
     (VAR_10->rcv_waitforss >= VAR_9))) {
  return(1);
 }

 return(0);
}
