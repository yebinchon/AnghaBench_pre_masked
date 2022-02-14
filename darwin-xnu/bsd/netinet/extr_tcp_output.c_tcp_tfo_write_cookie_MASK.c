
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u_int8_t ;
typedef int u_char ;
struct tcpcb {int t_tfo_stats; int t_tfo_flags; TYPE_1__* t_inpcb; } ;
struct socket {int so_flags1; } ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int tcps_tfo_syn_data_sent; int tcps_tfo_cookie_req; } ;
struct TYPE_3__ {struct socket* inp_socket; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tcpcb*,int *,unsigned int*) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static unsigned
FUNC_1(struct tcpcb *VAR_9, unsigned VAR_10, int32_t VAR_11,
       u_char *VAR_12)
{
 u_int8_t VAR_13 = VAR_0 - VAR_10 - VAR_2;
 struct socket *VAR_14 = VAR_9->t_inpcb->inp_socket;
 unsigned VAR_15 = 0;
 int VAR_16;
 u_char *VAR_17;

 if (VAR_14->so_flags1 & VAR_1) {

  if (VAR_11 > 0) {
   VAR_9->t_tfo_stats |= VAR_7;
   VAR_8.tcps_tfo_syn_data_sent++;
  }

  return (0);
 }

 VAR_17 = VAR_12 + VAR_10;






 VAR_16 = FUNC_0(VAR_9, VAR_17 + VAR_2, &VAR_13);
 if (VAR_16 == 0) {
  *VAR_17++ = VAR_3;
  *VAR_17++ = VAR_2;
  VAR_15 += VAR_2;

  VAR_9->t_tfo_flags |= VAR_4;

  VAR_9->t_tfo_stats |= VAR_6;
  VAR_8.tcps_tfo_cookie_req++;
 } else {
  *VAR_17++ = VAR_3;
  *VAR_17++ = VAR_2 + VAR_13;

  VAR_15 += VAR_2 + VAR_13;

  VAR_9->t_tfo_flags |= VAR_5;


  if (VAR_11 > 0) {
   VAR_9->t_tfo_stats |= VAR_7;
   VAR_8.tcps_tfo_syn_data_sent++;
  }
 }

 return (VAR_15);
}
