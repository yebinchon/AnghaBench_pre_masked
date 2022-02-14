
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_5__ {scalar_t__ index; scalar_t__ runtime; scalar_t__ mode; scalar_t__ timer_start; } ;
struct tcpcb {scalar_t__* t_timer; TYPE_2__ tentry; int t_flagsext; TYPE_3__* t_inpcb; } ;
struct socket {int dummy; } ;
typedef int needtorun ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {TYPE_1__* inp_last_outifp; struct socket* inp_socket; } ;
struct TYPE_4__ {scalar_t__ if_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct tcpcb*) ;
 int FUNC_8 (struct tcpcb*) ;
 struct tcpcb* FUNC_9 (struct tcpcb*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ) ;

u_int32_t
FUNC_11(struct tcpcb *VAR_9, u_int16_t *VAR_10,
 u_int16_t VAR_11)
{
 struct socket *VAR_12;
 u_int16_t VAR_13 = 0, VAR_14 = VAR_1, VAR_15 = VAR_1;
 u_int32_t VAR_16, VAR_17 = 0, VAR_18 = 0;
 int32_t VAR_19;
 boolean_t VAR_20[VAR_2];
 int VAR_21 = 0;

 FUNC_2(VAR_9 != ((void*)0));
 FUNC_3(VAR_20, sizeof(VAR_20));
 *VAR_10 = 0;

 FUNC_5(VAR_9->t_inpcb->inp_socket, 1);

 VAR_12 = VAR_9->t_inpcb->inp_socket;

 if (FUNC_4(VAR_9->t_inpcb, VAR_6, 1)
  == VAR_7) {
  if (FUNC_1(VAR_9)) {
   FUNC_7(VAR_9);
  }




  goto done;
 }





 if (VAR_11 > 0 && VAR_9->t_inpcb->inp_last_outifp != ((void*)0) &&
     VAR_9->t_inpcb->inp_last_outifp->if_index == VAR_11) {
  VAR_9->t_flagsext |= VAR_4;
  FUNC_9(VAR_9, VAR_3);
  VAR_9->t_timer[VAR_3] = 0;
  VAR_9->t_flagsext &= ~VAR_4;
 }






 if ((VAR_14 = VAR_9->tentry.index) == VAR_1)
  goto done;

 VAR_16 = VAR_9->t_timer[VAR_14];

 VAR_19 = FUNC_10(VAR_9->tentry.runtime, 0, VAR_8, 0);
 if (VAR_19 > 0) {
  if (VAR_9->tentry.index != VAR_1) {
   VAR_17 = VAR_19;
   *(VAR_10) = VAR_9->tentry.mode;
  }
  goto done;
 }

 VAR_9->t_timer[VAR_14] = 0;
 if (VAR_16 > 0) {
  VAR_9 = FUNC_9(VAR_9, VAR_14);
  if (VAR_9 == ((void*)0))
   goto done;
 }





 VAR_9->tentry.mode = 0;
 for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13) {
  if (VAR_9->t_timer[VAR_13] != 0) {
   VAR_19 = FUNC_10(VAR_9->tentry.timer_start,
    VAR_9->t_timer[VAR_13], VAR_8, 0);
   if (VAR_19 <= 0) {
    VAR_20[VAR_13] = VAR_5;
    VAR_21++;
   } else {
    VAR_9->t_timer[VAR_13] = VAR_19;
    VAR_20[VAR_13] = VAR_0;
    if (VAR_18 == 0 || VAR_19 < VAR_18) {
     VAR_18 = VAR_19;
     VAR_15 = VAR_13;
    }
    FUNC_0(VAR_9->tentry.mode, VAR_13);
   }
  }
 }

 VAR_9->tentry.timer_start = VAR_8;
 VAR_9->tentry.index = VAR_15;
 FUNC_2(VAR_9->tentry.index == VAR_1 || VAR_9->tentry.mode > 0);

 if (VAR_9->tentry.index != VAR_1) {
  VAR_9->tentry.runtime = VAR_9->tentry.timer_start +
   VAR_9->t_timer[VAR_9->tentry.index];
  if (VAR_9->tentry.runtime == 0)
   VAR_9->tentry.runtime++;
 }

 if (VAR_21 > 0) {

  for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13) {
   if (VAR_20[VAR_13]) {
    VAR_9->t_timer[VAR_13] = 0;
    VAR_9 = FUNC_9(VAR_9, VAR_13);
    if (VAR_9 == ((void*)0)) {
     VAR_17 = 0;
     *(VAR_10) = 0;
     goto done;
    }
   }
  }
  FUNC_8(VAR_9);
 }

 if (VAR_9->tentry.index < VAR_1) {
  VAR_17 = VAR_9->t_timer[VAR_9->tentry.index];
  *(VAR_10) = VAR_9->tentry.mode;
 }

done:
 if (VAR_9 != ((void*)0) && VAR_9->tentry.index == VAR_1) {
  FUNC_7(VAR_9);
  VAR_17 = 0;
 }

 FUNC_6(VAR_12, 1);
 return(VAR_17);
}
