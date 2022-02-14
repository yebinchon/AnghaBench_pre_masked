
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpopt {int to_flags; int to_requested_s_scale; int to_mss; int to_tsval; } ;
struct tcpcb {scalar_t__ request_r_scale; int t_flags; int requested_s_scale; int t_flagsext; int ts_recent_age; int ts_recent; } ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct tcpcb*,int ,unsigned int) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_10, struct tcpopt *VAR_11, unsigned int VAR_12)
{
 if (VAR_11->to_flags & VAR_8) {
  VAR_10->t_flags |= VAR_1;
  VAR_10->ts_recent = VAR_11->to_tsval;
  VAR_10->ts_recent_age = VAR_9;

 }
 if (VAR_11->to_flags & VAR_5)
  FUNC_1(VAR_10, VAR_11->to_mss, VAR_12);
 if (FUNC_0(VAR_10)) {
  if (!(VAR_11->to_flags & VAR_6))
   VAR_10->t_flagsext &= ~(VAR_3);
  else
   VAR_10->t_flags |= VAR_4;
 }
 if (VAR_11->to_flags & VAR_7) {
  VAR_10->t_flags |= VAR_0;
  VAR_10->requested_s_scale = VAR_11->to_requested_s_scale;


  if (VAR_10->request_r_scale > 0)
   VAR_10->t_flags |= VAR_2;
 }
}
