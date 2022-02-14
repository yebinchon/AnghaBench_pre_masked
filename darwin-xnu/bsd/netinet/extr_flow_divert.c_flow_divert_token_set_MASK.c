
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ t_state; } ;
struct sockopt {int dummy; } ;
struct socket {int so_flags; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int log_level; int flags; int * connect_token; } ;
typedef int * mbuf_t ;
typedef int log_level ;
typedef int key_unit ;
typedef int flow_id ;
typedef int errno_t ;
typedef int ctl_unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (struct socket*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ,int ,int,int*,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct socket*,scalar_t__) ;
 int VAR_20 ;
 int FUNC_8 (int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct socket*,int ) ;
 int FUNC_12 (struct sockopt*,int **) ;
 int FUNC_13 (struct sockopt*,int *) ;
 struct tcpcb* FUNC_14 (struct socket*) ;

errno_t
FUNC_15(struct socket *VAR_22, struct sockopt *VAR_23)
{
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 mbuf_t VAR_29 = ((void*)0);

 if (VAR_22->so_flags & VAR_18) {
  VAR_27 = VAR_0;
  goto done;
 }

 if (VAR_20) {
  FUNC_0(VAR_12, &VAR_21, "flow_divert_init failed (%d), cannot use flow divert", VAR_20);
  VAR_27 = VAR_3;
  goto done;
 }

 if ((FUNC_3(VAR_22) != VAR_17 && FUNC_3(VAR_22) != VAR_16) ||
     (FUNC_2(VAR_22) != VAR_10 && FUNC_2(VAR_22) != VAR_11) ||
     (FUNC_1(VAR_22) != VAR_14



  ))
 {
  VAR_27 = VAR_1;
  goto done;
 } else {
  if (FUNC_3(VAR_22) == VAR_17 && FUNC_2(VAR_22) == VAR_10) {
   struct tcpcb *VAR_30 = FUNC_14(VAR_22);
   if (VAR_30 == ((void*)0) || VAR_30->t_state != VAR_19) {
    VAR_27 = VAR_1;
    goto done;
   }
  }
 }

 VAR_27 = FUNC_12(VAR_23, &VAR_29);
 if (VAR_27) {
  VAR_29 = ((void*)0);
  goto done;
 }

 VAR_27 = FUNC_13(VAR_23, VAR_29);
 if (VAR_27) {
  VAR_29 = ((void*)0);
  goto done;
 }

 VAR_27 = FUNC_5(VAR_29, 0, VAR_7, sizeof(VAR_25), (void *)&VAR_25, ((void*)0));
 if (!VAR_27) {
  VAR_25 = FUNC_9(VAR_25);
  if (VAR_25 >= VAR_9) {
   VAR_25 = 0;
  }
 } else if (VAR_27 != VAR_2) {
  FUNC_0(VAR_12, &VAR_21, "Failed to get the key unit from the token: %d", VAR_27);
  goto done;
 } else {
  VAR_25 = 0;
 }

 VAR_27 = FUNC_5(VAR_29, 0, VAR_5, sizeof(VAR_24), (void *)&VAR_24, ((void*)0));
 if (VAR_27) {
  FUNC_0(VAR_12, &VAR_21, "Failed to get the control socket unit from the token: %d", VAR_27);
  goto done;
 }


 VAR_24 = FUNC_9(VAR_24);
 if (VAR_24 == 0 || VAR_24 >= VAR_9) {
  FUNC_0(VAR_12, &VAR_21, "Got an invalid control socket unit: %u", VAR_24);
  VAR_27 = VAR_1;
  goto done;
 }

 FUNC_11(VAR_22, 0);
 VAR_28 = FUNC_6(VAR_29, (VAR_25 != 0 ? VAR_25 : VAR_24));
 FUNC_10(VAR_22, 0);

 if (VAR_28 && VAR_28 != VAR_2) {
  FUNC_0(VAR_12, &VAR_21, "HMAC verfication failed: %d", VAR_28);
  VAR_27 = VAR_28;
  goto done;
 }

 VAR_27 = FUNC_5(VAR_29, 0, VAR_6, sizeof(VAR_26), (void *)&VAR_26, ((void*)0));
 if (VAR_27 && VAR_27 != VAR_2) {
  FUNC_0(VAR_12, &VAR_21, "Failed to get the flow ID from the token: %d", VAR_27);
  goto done;
 }

 if (VAR_26 == 0) {
  VAR_27 = FUNC_7(VAR_22, VAR_24);
  if (VAR_27 == 0) {
   struct flow_divert_pcb *VAR_31 = VAR_22->so_fd_pcb;
   int VAR_32 = VAR_13;

   VAR_27 = FUNC_5(VAR_29, 0, VAR_8,
                                   sizeof(VAR_32), &VAR_32, ((void*)0));
   if (VAR_27 == 0) {
    VAR_31->log_level = VAR_32;
   }
   VAR_27 = 0;

   VAR_31->connect_token = VAR_29;
   VAR_29 = ((void*)0);
  }
 } else {
  VAR_27 = FUNC_4(VAR_22, VAR_26, VAR_24);
 }

 if (VAR_28 == 0) {
  struct flow_divert_pcb *VAR_33 = VAR_22->so_fd_pcb;
  if (VAR_33 != ((void*)0)) {
   VAR_33->flags |= VAR_4;
  }
 }

done:
 if (VAR_29 != ((void*)0)) {
  FUNC_8(VAR_29);
 }

 return VAR_27;
}
