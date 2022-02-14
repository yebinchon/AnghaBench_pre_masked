
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; int so_error; int so_flags1; struct flow_divert_pcb* so_fd_pcb; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct inpcb {scalar_t__ inp_state; } ;
struct flow_divert_pcb {int flags; int * connect_packet; int so; int * remote_address; int * group; } ;
typedef int proc_t ;
typedef int * mbuf_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct flow_divert_pcb*,struct sockaddr*,struct socket*,int ,int **) ;
 int FUNC_4 (struct flow_divert_pcb*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct socket*) ;
 struct inpcb* FUNC_9 (struct socket*) ;

errno_t
FUNC_10(struct socket *VAR_13, struct sockaddr *VAR_14, proc_t VAR_15)
{
 struct flow_divert_pcb *VAR_16 = VAR_13->so_fd_pcb;
 int VAR_17 = 0;
 struct inpcb *VAR_18 = FUNC_9(VAR_13);
 struct sockaddr_in *VAR_19;
 mbuf_t VAR_20 = ((void*)0);
 int VAR_21 = 1;

 FUNC_2((VAR_13->so_flags & VAR_11) && VAR_13->so_fd_pcb != ((void*)0));

 if (VAR_16->group == ((void*)0)) {
  VAR_17 = VAR_4;
  goto done;
 }

 if (VAR_18 == ((void*)0)) {
  VAR_17 = VAR_3;
  goto done;
 } else if (VAR_18->inp_state == VAR_7) {
  if (VAR_13->so_error) {
   VAR_17 = VAR_13->so_error;
   VAR_13->so_error = 0;
  } else {
   VAR_17 = VAR_3;
  }
  goto done;
 }

 if ((VAR_16->flags & VAR_5) && !(VAR_16->flags & VAR_6)) {
  VAR_17 = VAR_2;
  goto done;
 }

 if (VAR_16->flags & VAR_6) {
  FUNC_0(VAR_9, VAR_16, "fully transferred");
  VAR_16->flags &= ~VAR_6;
  if (VAR_16->remote_address != ((void*)0)) {
   FUNC_7(VAR_16->so);
   goto done;
  }
 }

 FUNC_0(VAR_9, VAR_16, "Connecting");

 if (VAR_16->connect_packet == ((void*)0)) {
  if (VAR_14 == ((void*)0)) {
   FUNC_0(VAR_8, VAR_16, "No destination address available when creating connect packet");
   VAR_17 = VAR_3;
   goto done;
  }

  VAR_19 = (struct sockaddr_in *)(void *)VAR_14;
  if (VAR_19->sin_family == VAR_0 && FUNC_1(FUNC_6(VAR_19->sin_addr.s_addr))) {
   VAR_17 = VAR_1;
   goto done;
  }

  VAR_17 = FUNC_3(VAR_16, VAR_14, VAR_13, VAR_15, &VAR_20);
  if (VAR_17) {
   goto done;
  }

  if (VAR_13->so_flags1 & VAR_10) {
   FUNC_0(VAR_9, VAR_16, "Delaying sending the connect packet until send or receive");
   VAR_21 = 0;
  }
 } else {
  FUNC_0(VAR_9, VAR_16, "Sending saved connect packet");
  VAR_20 = VAR_16->connect_packet;
  VAR_16->connect_packet = ((void*)0);
 }

 if (VAR_21) {
  VAR_17 = FUNC_4(VAR_16, VAR_20, VAR_12);
  if (VAR_17) {
   goto done;
  }

  VAR_16->flags |= VAR_5;
 } else {
  VAR_16->connect_packet = VAR_20;
  VAR_20 = ((void*)0);
 }

 FUNC_8(VAR_13);

done:
 if (VAR_17 && VAR_20 != ((void*)0)) {
  FUNC_5(VAR_20);
 }
 return VAR_17;
}
