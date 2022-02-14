
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int uio_t ;
struct user_msghdr {int msg_flags; int msg_controllen; scalar_t__ msg_control; int msg_namelen; int msg_name; } ;
struct socket {int so_state; TYPE_2__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int32_t ;
typedef int caddr_t ;
struct TYPE_4__ {int pr_flags; TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_soreceive ) (struct socket*,struct sockaddr**,int ,struct mbuf**,struct mbuf**,int *) ;} ;


 int FUNC_0 (int ,int ,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (struct proc*,struct mbuf*,scalar_t__,int *,int *) ;
 int FUNC_5 (struct sockaddr*,int ,int *) ;
 int FUNC_6 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_7 (struct proc*,int,struct fileproc**,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (int ,struct socket*) ;
 int FUNC_11 (struct proc*) ;
 int FUNC_12 (struct proc*) ;
 int VAR_14 ;
 int FUNC_13 (struct socket*,struct sockaddr**,int ,struct mbuf**,struct mbuf**,int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(struct proc *VAR_15, int VAR_16, struct user_msghdr *VAR_17, uio_t VAR_18,
    user_addr_t VAR_19, int32_t *VAR_20)
{
 ssize_t VAR_21;
 int VAR_22;
 struct mbuf *VAR_23 = 0;
 struct socket *VAR_24;
 struct sockaddr *VAR_25 = 0;
 struct fileproc *VAR_26;

 FUNC_2(VAR_0 | VAR_2, 0, 0, 0, 0, 0);
 FUNC_11(VAR_15);
 if ((VAR_22 = FUNC_7(VAR_15, VAR_16, &VAR_26, 1))) {
  FUNC_2(VAR_0 | VAR_1, VAR_22, 0, 0, 0, 0);
  FUNC_12(VAR_15);
  return (VAR_22);
 }
 if (VAR_26->f_type != VAR_3) {
  FUNC_6(VAR_15, VAR_16, VAR_26, 1);
  FUNC_12(VAR_15);
  return (VAR_7);
 }

 VAR_24 = (struct socket *)VAR_26->f_data;
 if (VAR_24 == ((void*)0)) {
  FUNC_6(VAR_15, VAR_16, VAR_26, 1);
  FUNC_12(VAR_15);
  return (VAR_4);
 }

 FUNC_12(VAR_15);
 if (FUNC_14(VAR_18) < 0) {
  FUNC_2(VAR_0 | VAR_1, VAR_6, 0, 0, 0, 0);
  VAR_22 = VAR_6;
  goto out1;
 }

 VAR_21 = FUNC_14(VAR_18);
 VAR_22 = VAR_24->so_proto->pr_usrreqs->pru_soreceive(VAR_24, &VAR_25, VAR_18,
     (struct mbuf **)0, VAR_17->msg_control ? &VAR_23 : (struct mbuf **)0,
     &VAR_17->msg_flags);
 if (VAR_25)
  FUNC_0(VAR_14, FUNC_16(FUNC_15()),
      VAR_25);
 if (VAR_22) {
  if (FUNC_14(VAR_18) != VAR_21 && (VAR_22 == VAR_8 ||
      VAR_22 == VAR_5 || VAR_22 == VAR_9))
   VAR_22 = 0;
 }
 if (VAR_22)
  goto out;

 *VAR_20 = VAR_21 - FUNC_14(VAR_18);

 if (VAR_17->msg_name) {
  VAR_22 = FUNC_5(VAR_25, VAR_17->msg_name, &VAR_17->msg_namelen);
  if (VAR_22)
   goto out;

  if (VAR_19 &&
      (VAR_22 = FUNC_3((caddr_t)&VAR_17->msg_namelen, VAR_19,
      sizeof (int)))) {
   goto out;
  }
 }

 if (VAR_17->msg_control) {
  VAR_22 = FUNC_4(VAR_15, VAR_23, VAR_17->msg_control,
      &VAR_17->msg_controllen, &VAR_17->msg_flags);
 }
out:
 if (VAR_25)
  FUNC_1(VAR_25, VAR_10);
 if (VAR_23)
  FUNC_9(VAR_23);
 FUNC_2(VAR_0 | VAR_1, VAR_22, 0, 0, 0, 0);
out1:
 FUNC_6(VAR_15, VAR_16, VAR_26, 0);
 return (VAR_22);
}
