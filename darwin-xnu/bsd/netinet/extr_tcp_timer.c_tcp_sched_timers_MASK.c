
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct tcptimerlist {scalar_t__ entries; scalar_t__ maxentries; scalar_t__ pref_mode; scalar_t__ pref_offset; scalar_t__ mode; int mtx; scalar_t__ idleruns; int runtime; scalar_t__ scheduled; scalar_t__ running; int lhead; } ;
struct tcptimerentry {scalar_t__ index; scalar_t__ mode; int runtime; } ;
struct tcpcb {int t_flags; TYPE_1__* t_inpcb; struct tcptimerentry tentry; } ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ inp_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct tcptimerentry*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct tcptimerentry*,int ) ;
 int FUNC_3 (struct tcptimerentry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_8 (struct tcpcb*) ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__) ;
 int VAR_12 ;
 struct tcptimerlist VAR_13 ;
 scalar_t__ FUNC_10 (int ,int ,int ,scalar_t__) ;

void
FUNC_11(struct tcpcb *VAR_14)
{
 struct tcptimerentry *VAR_15 = &VAR_14->tentry;
 u_int16_t VAR_16 = VAR_15->index;
 u_int16_t VAR_17 = VAR_15->mode;
 struct tcptimerlist *VAR_18 = &VAR_13;
 int32_t VAR_19 = 0;
 boolean_t VAR_20 = VAR_0;

 if (VAR_14->t_inpcb->inp_state == VAR_1) {

  if (FUNC_1(VAR_14)) {
   FUNC_8(VAR_14);
  }
  return;
 }

 if (VAR_16 == VAR_2) {

  FUNC_8(VAR_14);
  return;
 }





 VAR_19 = FUNC_10(VAR_15->runtime, 0, VAR_10, 0);
 if (VAR_19 <= 0) {
  VAR_19 = 1;
  VAR_12++;
 }

 if (!FUNC_1(VAR_14)) {
  if (!VAR_20) {
   FUNC_4(VAR_18->mtx);
   VAR_20 = VAR_8;
  }

  if (!FUNC_1(VAR_14)) {
   FUNC_0(&VAR_18->lhead, VAR_15, VAR_9);
   VAR_14->t_flags |= VAR_7;

   VAR_18->entries++;
   if (VAR_18->entries > VAR_18->maxentries)
    VAR_18->maxentries = VAR_18->entries;


   if (!VAR_18->scheduled)
    goto schedule;
  }
 }





 if (FUNC_7(VAR_15->runtime, VAR_17)) {
  VAR_11++;

  if (!VAR_20) {
   FUNC_4(VAR_18->mtx);
   VAR_20 = VAR_8;
  }

  FUNC_2(VAR_15, VAR_9);
  FUNC_3(VAR_15, VAR_9);

  if (VAR_18->running) {
   VAR_18->pref_mode |= VAR_17;
   if (VAR_18->pref_offset == 0 ||
    VAR_19 < VAR_18->pref_offset) {
    VAR_18->pref_offset = VAR_19;
   }
  } else {




   if (VAR_18->scheduled) {
    int32_t VAR_21;
    VAR_21 = FUNC_10(VAR_18->runtime, 0,
        VAR_10, VAR_19);
    if (VAR_21 <= 0)
     goto done;
    else
     goto schedule;
   } else {
    goto schedule;
   }
  }
 }
 goto done;

schedule:





 if (VAR_17 & VAR_4) {
  VAR_18->mode = VAR_4;
  VAR_18->idleruns = 0;
  VAR_19 = FUNC_6(VAR_19, VAR_6);
 } else if (VAR_17 & VAR_3) {
  if (VAR_18->mode > VAR_3)
   VAR_18->mode = VAR_3;
  VAR_18->idleruns = 0;
  VAR_19 = FUNC_6(VAR_19, VAR_5);
 }
 FUNC_9(VAR_19);

done:
 if (VAR_20)
  FUNC_5(VAR_18->mtx);

 return;
}
