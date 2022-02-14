
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * tqh_first; } ;
struct socket {int so_options; int so_state; scalar_t__ so_error; int so_flags; TYPE_2__* so_proto; int * so_filt; int so_flags1; int so_qlen; int * so_head; TYPE_4__ so_comp; int so_timeo; } ;
struct sockaddr {int sa_len; } ;
typedef struct socket* socket_t ;
typedef int * sock_upcall ;
typedef int lck_mtx_t ;
typedef scalar_t__ errno_t ;
typedef int caddr_t ;
struct TYPE_9__ {int nas_socket_in_kernel_os_total; int nas_socket_in_kernel_total; } ;
struct TYPE_8__ {int * (* pr_getlock ) (struct socket*,int ) ;TYPE_1__* pr_domain; } ;
struct TYPE_7__ {int * dom_mtx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 struct socket* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,struct socket*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sockaddr*,struct sockaddr*,int) ;
 scalar_t__ FUNC_8 (int ,int *,int,char*,int *) ;
 TYPE_3__ VAR_17 ;
 int FUNC_9 (struct socket*,int *) ;
 int VAR_18 ;
 int FUNC_10 (struct socket*) ;
 scalar_t__ FUNC_11 (struct socket*,struct socket*) ;
 int FUNC_12 (struct socket*,struct sockaddr**,int ) ;
 int FUNC_13 (struct socket*,int *,void*,int *,void*,int ) ;
 int FUNC_14 (struct socket*,int) ;
 int FUNC_15 (struct socket*,int) ;
 int FUNC_16 (int ,struct socket*,int ) ;
 int FUNC_17 (struct socket*) ;
 int * FUNC_18 (struct socket*,int ) ;
 int * FUNC_19 (struct socket*,int ) ;

errno_t
FUNC_20(socket_t VAR_19, struct sockaddr *VAR_20, int VAR_21, int VAR_22,
    sock_upcall VAR_23, void *VAR_24, socket_t *VAR_25, bool VAR_26)
{
 struct sockaddr *VAR_27;
 struct socket *VAR_28;
 lck_mtx_t *VAR_29;
 int VAR_30;
 errno_t VAR_31 = 0;

 if (VAR_19 == ((void*)0) || VAR_25 == ((void*)0))
  return (VAR_1);

 FUNC_14(VAR_19, 1);
 if ((VAR_19->so_options & VAR_13) == 0) {
  FUNC_15(VAR_19, 1);
  return (VAR_1);
 }
 if ((VAR_22 & ~(VAR_5)) != 0) {
  FUNC_15(VAR_19, 1);
  return (VAR_2);
 }
check_again:
 if (((VAR_22 & VAR_5) != 0 || (VAR_19->so_state & VAR_16) != 0) &&
     VAR_19->so_comp.tqh_first == ((void*)0)) {
  FUNC_15(VAR_19, 1);
  return (VAR_3);
 }

 if (VAR_19->so_proto->pr_getlock != ((void*)0)) {
  VAR_29 = (*VAR_19->so_proto->pr_getlock)(VAR_19, VAR_8);
  VAR_30 = 1;
 } else {
  VAR_29 = VAR_19->so_proto->pr_domain->dom_mtx;
  VAR_30 = 0;
 }

 while (FUNC_3(&VAR_19->so_comp) && VAR_19->so_error == 0) {
  if (VAR_19->so_state & VAR_14) {
   VAR_19->so_error = VAR_0;
   break;
  }
  VAR_31 = FUNC_8((caddr_t)&VAR_19->so_timeo, VAR_29,
      VAR_9 | VAR_7, "sock_accept", ((void*)0));
  if (VAR_31 != 0) {
   FUNC_15(VAR_19, 1);
   return (VAR_31);
  }
 }
 if (VAR_19->so_error != 0) {
  VAR_31 = VAR_19->so_error;
  VAR_19->so_error = 0;
  FUNC_15(VAR_19, 1);
  return (VAR_31);
 }

 FUNC_9(VAR_19, ((void*)0));
 if (FUNC_3(&VAR_19->so_comp)) {
  FUNC_10(VAR_19);
  goto check_again;
 }
 VAR_28 = FUNC_4(&VAR_19->so_comp);
 FUNC_5(&VAR_19->so_comp, VAR_28, VAR_18);
 VAR_28->so_state &= ~VAR_15;
 VAR_28->so_head = ((void*)0);
 VAR_19->so_qlen--;

 FUNC_10(VAR_19);




 VAR_28->so_flags1 |= VAR_11;
 FUNC_1(VAR_17.nas_socket_in_kernel_total);
 if (VAR_26) {
  FUNC_1(VAR_17.nas_socket_in_kernel_os_total);
 }





 if (VAR_28->so_filt != ((void*)0)) {






  FUNC_15(VAR_19, 0);
  if ((VAR_31 = FUNC_11(VAR_28, VAR_19)) != 0) {

   FUNC_17(VAR_19);
   return (VAR_31);
  }
  FUNC_14(VAR_19, 0);
 }

 if (VAR_30) {
  FUNC_2(VAR_28->so_proto->pr_getlock(VAR_28, 0),
      VAR_4);
  FUNC_14(VAR_28, 1);
 }

 (void) FUNC_12(VAR_28, &VAR_27, 0);

 FUNC_15(VAR_19, 1);


 if (VAR_23 != ((void*)0)) {



  FUNC_13(VAR_28, VAR_23, VAR_24, ((void*)0), ((void*)0), 0);

 }

 if (VAR_27 != ((void*)0) && VAR_20 != ((void*)0)) {
  if (VAR_21 > VAR_27->sa_len)
   VAR_21 = VAR_27->sa_len;
  FUNC_7(VAR_20, VAR_27, VAR_21);
 }
 if (VAR_27 != ((void*)0))
  FUNC_0(VAR_27, VAR_6);





 if (VAR_28->so_flags & VAR_12) {
  (void) FUNC_16(FUNC_6(), VAR_28,
      VAR_10);
 }
 *VAR_25 = VAR_28;
 if (VAR_30)
  FUNC_15(VAR_28, 1);
 return (VAR_31);
}
