
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ u_int32_t ;
struct tcpcb {int t_flagsext; void* t_recv_throttle_ts; scalar_t__ t_rttcur; TYPE_2__* t_inpcb; } ;
struct rtentry {scalar_t__ rtt_expire_ts; scalar_t__ rtt_index; scalar_t__* rtt_hist; scalar_t__ rtt_min; } ;
struct TYPE_3__ {struct rtentry* ro_rt; } ;
struct TYPE_4__ {TYPE_1__ inp_route; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (scalar_t__,void*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;

void
FUNC_3(struct tcpcb *VAR_6, uint32_t VAR_7)
{
 u_int32_t VAR_8, VAR_9;
 struct rtentry *VAR_10;

 if ((VAR_10 = VAR_6->t_inpcb->inp_route.ro_rt) == ((void*)0))
  return;
 if (VAR_10->rtt_expire_ts == 0) {
  FUNC_0(VAR_10);
  if (VAR_10->rtt_expire_ts != 0) {
   FUNC_1(VAR_10);
   goto update;
  }
  VAR_10->rtt_expire_ts = VAR_5;
  VAR_10->rtt_index = 0;
  VAR_10->rtt_hist[0] = VAR_7;
  VAR_10->rtt_min = VAR_7;
  FUNC_1(VAR_10);
  return;
 }
update:
 if ((int)(VAR_5 - VAR_10->rtt_expire_ts) >=
     VAR_2) {
  FUNC_0(VAR_10);

  if ((int)(VAR_5 - VAR_10->rtt_expire_ts) >=
      VAR_2) {
   VAR_10->rtt_index++;
   if (VAR_10->rtt_index >= VAR_0)
    VAR_10->rtt_index = 0;
   VAR_10->rtt_hist[VAR_10->rtt_index] = VAR_7;
   VAR_10->rtt_expire_ts = VAR_5;
  } else {
   VAR_10->rtt_hist[VAR_10->rtt_index] =
       FUNC_2(VAR_10->rtt_hist[VAR_10->rtt_index], VAR_7);
  }

  VAR_10->rtt_min = 0;
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
   if (VAR_10->rtt_hist[VAR_9] != 0 &&
       (VAR_10->rtt_min == 0 ||
       VAR_10->rtt_hist[VAR_9] < VAR_10->rtt_min))
    VAR_10->rtt_min = VAR_10->rtt_hist[VAR_9];
  }
  FUNC_1(VAR_10);
 } else {
  VAR_10->rtt_hist[VAR_10->rtt_index] =
      FUNC_2(VAR_10->rtt_hist[VAR_10->rtt_index], VAR_7);
  if (VAR_10->rtt_min == 0)
   VAR_10->rtt_min = VAR_7;
  else
   VAR_10->rtt_min = FUNC_2(VAR_10->rtt_min, VAR_7);
 }
}
