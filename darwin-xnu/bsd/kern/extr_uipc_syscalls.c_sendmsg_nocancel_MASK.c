
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uio_t ;
struct user_msghdr {scalar_t__ msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_iov; int msg_name; int msg_namelen; int msg_control; int msg_controllen; } ;
struct user_iovec {int dummy; } ;
struct user64_msghdr {scalar_t__ msg_iovlen; int msg_name; int msg_namelen; scalar_t__ msg_iov; int msg_control; int msg_controllen; scalar_t__ msg_flags; } ;
struct user32_msghdr {scalar_t__ msg_iovlen; int msg_name; int msg_namelen; scalar_t__ msg_iov; int msg_control; int msg_controllen; scalar_t__ msg_flags; } ;
struct socket {int dummy; } ;
struct sendmsg_nocancel_args {int s; int flags; int msg; } ;
struct proc {int dummy; } ;
typedef int msg64 ;
typedef int msg32 ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct user_iovec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int FUNC_3 (int,int,int ,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__,struct user_iovec*) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct socket**) ;
 int FUNC_8 (struct proc*,struct socket*,struct user_msghdr*,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (scalar_t__,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 struct user_iovec* FUNC_12 (int *) ;

int
FUNC_13(struct proc *VAR_11, struct sendmsg_nocancel_args *VAR_12,
    int32_t *VAR_13)
{
 struct user32_msghdr VAR_14;
 struct user64_msghdr VAR_15;
 struct user_msghdr VAR_16;
 caddr_t VAR_17;
 int VAR_18;
 int VAR_19;
 uio_t VAR_20 = ((void*)0);
 struct user_iovec *VAR_21;
 struct socket *VAR_22;

 FUNC_3(VAR_0 | VAR_2, 0, 0, 0, 0, 0);
 FUNC_0(VAR_10, VAR_12->s);
 if (FUNC_2(VAR_11)) {
  VAR_17 = (caddr_t)&VAR_15;
  VAR_18 = sizeof (VAR_15);
 } else {
  VAR_17 = (caddr_t)&VAR_14;
  VAR_18 = sizeof (VAR_14);
 }
 VAR_19 = FUNC_4(VAR_12->msg, VAR_17, VAR_18);
 if (VAR_19) {
  FUNC_3(VAR_0 | VAR_1, VAR_19, 0, 0, 0, 0);
  return (VAR_19);
 }

 if (FUNC_2(VAR_11)) {
  VAR_16.msg_flags = VAR_15;
  VAR_16.msg_controllen = VAR_15;
  VAR_16.msg_control = VAR_15;
  VAR_16.msg_iovlen = VAR_15;
  VAR_16.msg_iov = VAR_15;
  VAR_16.msg_namelen = VAR_15;
  VAR_16.msg_name = VAR_15;
 } else {
  VAR_16.msg_flags = VAR_14;
  VAR_16.msg_controllen = VAR_14;
  VAR_16.msg_control = VAR_14;
  VAR_16.msg_iovlen = VAR_14;
  VAR_16.msg_iov = VAR_14;
  VAR_16.msg_namelen = VAR_14;
  VAR_16.msg_name = VAR_14;
 }

 if (VAR_16.msg_iovlen <= 0 || VAR_16.msg_iovlen > VAR_6) {
  FUNC_3(VAR_0 | VAR_1, VAR_4,
      0, 0, 0, 0);
  return (VAR_4);
 }


 VAR_20 = FUNC_10(VAR_16.msg_iovlen, 0,
     (FUNC_2(VAR_11) ? VAR_8 : VAR_7),
     VAR_9);
 if (VAR_20 == ((void*)0)) {
  VAR_19 = VAR_5;
  goto done;
 }

 if (VAR_16.msg_iovlen) {




  VAR_21 = FUNC_12(VAR_20);
  if (VAR_21 == ((void*)0)) {
   VAR_19 = VAR_5;
   goto done;
  }
  VAR_19 = FUNC_5(VAR_16.msg_iov,
   FUNC_2(VAR_11) ? VAR_8 : VAR_7,
   VAR_16.msg_iovlen, VAR_21);
  if (VAR_19)
   goto done;
  VAR_16.msg_iov = FUNC_1(VAR_21);


  VAR_19 = FUNC_9(VAR_20);
  if (VAR_19) {
   goto done;
  }
 } else {
  VAR_16.msg_iov = 0;
 }


 VAR_16.msg_flags = 0;

 VAR_19 = FUNC_7(VAR_12->s, &VAR_22);
 if (VAR_19) {
  goto done;
 }
 if (VAR_22 == ((void*)0)) {
  VAR_19 = VAR_3;
 } else {
  VAR_19 = FUNC_8(VAR_11, VAR_22, &VAR_16, VAR_20, VAR_12->flags, VAR_13);
 }
 FUNC_6(VAR_12->s);
done:
 if (VAR_20 != ((void*)0)) {
  FUNC_11(VAR_20);
 }
 FUNC_3(VAR_0 | VAR_1, VAR_19, 0, 0, 0, 0);

 return (VAR_19);
}
