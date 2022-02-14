
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct tcpopt {int to_flags; unsigned char* to_tfo; } ;
struct tcpcb {int t_tfo_stats; int t_tfo_flags; int t_inpcb; } ;
typedef int out ;
typedef int boolean_t ;
struct TYPE_2__ {int tcps_tfo_syn_data_rcv; int tcps_tfo_cookie_invalid; int tcps_tfo_cookie_req_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int *,unsigned char*,unsigned char) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;

__attribute__((used)) static boolean_t
FUNC_4(struct tcpcb *VAR_16, struct tcpopt *VAR_17)
{
 u_char VAR_18[VAR_0];
 unsigned char VAR_19;

 if (!(VAR_17->to_flags & (VAR_9 | VAR_10)) ||
     !(VAR_12 & VAR_3))
  return (VAR_1);

 if ((VAR_17->to_flags & VAR_10)) {
  VAR_16->t_tfo_flags |= VAR_5;

  VAR_16->t_tfo_stats |= VAR_6;
  VAR_15.tcps_tfo_cookie_req_rcv++;
  return (VAR_1);
 }


 FUNC_3(VAR_16->t_inpcb, VAR_18, sizeof(VAR_18));

 VAR_19 = *VAR_17->to_tfo - VAR_2;
 VAR_17->to_tfo++;
 if (FUNC_2(VAR_18, VAR_17->to_tfo, VAR_19)) {

  VAR_16->t_tfo_flags |= VAR_5;

  VAR_16->t_tfo_stats |= VAR_7;
  VAR_15.tcps_tfo_cookie_invalid++;
  return (VAR_1);
 }

 if (FUNC_1(&VAR_14) >= VAR_13) {

  FUNC_0(&VAR_14);
  return (VAR_1);
 }

 VAR_16->t_tfo_flags |= VAR_4;

 VAR_16->t_tfo_stats |= VAR_8;
 VAR_15.tcps_tfo_syn_data_rcv++;

 return (VAR_11);
}
