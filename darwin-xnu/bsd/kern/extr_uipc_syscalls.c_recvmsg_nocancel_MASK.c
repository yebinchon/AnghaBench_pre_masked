
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int * uio_t ;
struct user_msghdr {scalar_t__ msg_iovlen; int msg_name; int msg_namelen; int msg_iov; int msg_control; int msg_controllen; int msg_flags; } ;
struct user_iovec {int dummy; } ;
struct user64_msghdr {scalar_t__ msg_iovlen; int msg_name; int msg_namelen; int msg_iov; int msg_control; int msg_controllen; int msg_flags; } ;
struct user32_msghdr {scalar_t__ msg_iovlen; int msg_name; int msg_namelen; int msg_iov; int msg_control; int msg_controllen; int msg_flags; } ;
struct recvmsg_nocancel_args {int msg; int s; int flags; } ;
struct proc {int dummy; } ;
typedef int msg64 ;
typedef int msg32 ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct user_iovec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int FUNC_3 (int,int,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,int ,scalar_t__,struct user_iovec*) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int VAR_9 ;
 int FUNC_7 (struct proc*,int ,struct user_msghdr*,int *,int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 struct user_iovec* FUNC_11 (int *) ;

int
FUNC_12(struct proc *VAR_10, struct recvmsg_nocancel_args *VAR_11,
    int32_t *VAR_12)
{
 struct user32_msghdr VAR_13;
 struct user64_msghdr VAR_14;
 struct user_msghdr VAR_15;
 caddr_t VAR_16;
 int VAR_17;
 user_addr_t VAR_18;
 int VAR_19;
 uio_t VAR_20 = ((void*)0);
 struct user_iovec *VAR_21;

 FUNC_3(VAR_0 | VAR_2, 0, 0, 0, 0, 0);
 FUNC_0(VAR_9, VAR_11->s);
 if (FUNC_2(VAR_10)) {
  VAR_16 = (caddr_t)&VAR_14;
  VAR_17 = sizeof (VAR_14);
 } else {
  VAR_16 = (caddr_t)&VAR_13;
  VAR_17 = sizeof (VAR_13);
 }
 VAR_19 = FUNC_4(VAR_11->msg, VAR_16, VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_0 | VAR_1, VAR_19, 0, 0, 0, 0);
  return (VAR_19);
 }


 if (FUNC_2(VAR_10)) {
  VAR_15.msg_flags = VAR_14;
  VAR_15.msg_controllen = VAR_14;
  VAR_15.msg_control = VAR_14;
  VAR_15.msg_iovlen = VAR_14;
  VAR_15.msg_iov = VAR_14;
  VAR_15.msg_namelen = VAR_14;
  VAR_15.msg_name = VAR_14;
 } else {
  VAR_15.msg_flags = VAR_13;
  VAR_15.msg_controllen = VAR_13;
  VAR_15.msg_control = VAR_13;
  VAR_15.msg_iovlen = VAR_13;
  VAR_15.msg_iov = VAR_13;
  VAR_15.msg_namelen = VAR_13;
  VAR_15.msg_name = VAR_13;
 }

 if (VAR_15.msg_iovlen <= 0 || VAR_15.msg_iovlen > VAR_5) {
  FUNC_3(VAR_0 | VAR_1, VAR_3,
      0, 0, 0, 0);
  return (VAR_3);
 }

 VAR_15.msg_flags = VAR_11->flags;


 VAR_20 = FUNC_9(VAR_15.msg_iovlen, 0,
     (FUNC_2(VAR_10) ? VAR_8 : VAR_7),
     VAR_6);
 if (VAR_20 == ((void*)0)) {
  VAR_19 = VAR_4;
  goto done;
 }





 VAR_21 = FUNC_11(VAR_20);
 if (VAR_21 == ((void*)0)) {
  VAR_19 = VAR_4;
  goto done;
 }
 VAR_18 = VAR_15.msg_iov;
 VAR_15.msg_iov = FUNC_1(VAR_21);
 VAR_19 = FUNC_5(VAR_18,
  FUNC_2(VAR_10) ? VAR_8 : VAR_7,
  VAR_15.msg_iovlen, VAR_21);
 if (VAR_19)
  goto done;


 VAR_19 = FUNC_8(VAR_20);
 if (VAR_19) {
  goto done;
 }

 VAR_19 = FUNC_7(VAR_10, VAR_11->s, &VAR_15, VAR_20, 0, VAR_12);
 if (!VAR_19) {
  VAR_15.msg_iov = VAR_18;
  if (FUNC_2(VAR_10)) {
   VAR_14 = VAR_15.msg_flags;
   VAR_14 = VAR_15.msg_controllen;
   VAR_14 = VAR_15.msg_control;
   VAR_14 = VAR_15.msg_iovlen;
   VAR_14 = VAR_15.msg_iov;
   VAR_14 = VAR_15.msg_namelen;
   VAR_14 = VAR_15.msg_name;
  } else {
   VAR_13 = VAR_15.msg_flags;
   VAR_13 = VAR_15.msg_controllen;
   VAR_13 = VAR_15.msg_control;
   VAR_13 = VAR_15.msg_iovlen;
   VAR_13 = VAR_15.msg_iov;
   VAR_13 = VAR_15.msg_namelen;
   VAR_13 = VAR_15.msg_name;
  }
  VAR_19 = FUNC_6(VAR_16, VAR_11->msg, VAR_17);
 }
done:
 if (VAR_20 != ((void*)0)) {
  FUNC_10(VAR_20);
 }
 FUNC_3(VAR_0 | VAR_1, VAR_19, 0, 0, 0, 0);
 return (VAR_19);
}
