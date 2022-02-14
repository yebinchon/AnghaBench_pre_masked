
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; int so_flags1; struct flow_divert_pcb* so_fd_pcb; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {scalar_t__ inp_state; } ;
struct flow_divert_pcb {int flags; int bytes_written_by_app; scalar_t__ send_window; } ;
typedef int * mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,scalar_t__) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct flow_divert_pcb*) ;
 scalar_t__ FUNC_4 (struct flow_divert_pcb*) ;
 int FUNC_5 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_6 (struct flow_divert_pcb*,int *,struct sockaddr*) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 struct inpcb* FUNC_12 (struct socket*) ;

__attribute__((used)) static errno_t
FUNC_13(struct socket *VAR_10, int VAR_11, mbuf_t VAR_12, struct sockaddr *VAR_13, mbuf_t VAR_14, struct proc *VAR_15)
{
 struct flow_divert_pcb *VAR_16 = VAR_10->so_fd_pcb;
 int VAR_17 = 0;
 struct inpcb *VAR_18;

 FUNC_2((VAR_10->so_flags & VAR_9) && VAR_10->so_fd_pcb != ((void*)0));

 VAR_18 = FUNC_12(VAR_10);
 if (VAR_18 == ((void*)0) || VAR_18->inp_state == VAR_3) {
  VAR_17 = VAR_0;
  goto done;
 }

 if (VAR_14 && FUNC_10(VAR_14) > 0) {
  VAR_17 = VAR_1;
  goto done;
 }

 if (VAR_11 & VAR_6) {
  VAR_17 = VAR_1;
  goto done;
 }

 VAR_17 = FUNC_3(VAR_16) ||
     FUNC_4(VAR_16);
 if (VAR_17) {
  goto done;
 }


 if (!(VAR_16->flags & VAR_2)) {
  FUNC_1(VAR_5, VAR_16, "implicit connect");
  VAR_17 = FUNC_5(VAR_10, VAR_13, VAR_15);
  if (VAR_17) {
   goto done;
  }

  if (VAR_10->so_flags1 & VAR_8) {

   VAR_16->send_window = FUNC_11(VAR_12);
  }
 }

 FUNC_0(VAR_4, VAR_16, "app wrote %lu bytes", FUNC_11(VAR_12));

 VAR_16->bytes_written_by_app += FUNC_11(VAR_12);
 VAR_17 = FUNC_6(VAR_16, VAR_12, VAR_13);
 if (VAR_17) {
  goto done;
 }

 VAR_12 = ((void*)0);

 if (VAR_11 & VAR_7) {
  FUNC_7(VAR_10);
 }

done:
 if (VAR_12) {
  FUNC_9(VAR_12);
 }
 if (VAR_14) {
  FUNC_8(VAR_14);
 }
 return VAR_17;
}
