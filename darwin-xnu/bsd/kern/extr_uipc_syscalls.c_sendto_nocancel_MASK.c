
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uio_t ;
struct user_msghdr {scalar_t__ msg_flags; scalar_t__ msg_control; scalar_t__ msg_iovlen; scalar_t__ msg_iov; int msg_namelen; int msg_name; } ;
struct socket {int dummy; } ;
struct sendto_nocancel_args {int s; int flags; int tolen; int to; int len; int buf; } ;
struct proc {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct proc*) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct socket**) ;
 int FUNC_5 (struct proc*,struct socket*,struct user_msghdr*,int *,int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int,int ,int ,int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct proc *VAR_9,
  struct sendto_nocancel_args *VAR_10,
  int32_t *VAR_11)
{
 struct user_msghdr VAR_12;
 int VAR_13;
 uio_t VAR_14 = ((void*)0);
 struct socket *VAR_15;

 FUNC_2(VAR_0 | VAR_2, 0, 0, 0, 0, 0);
 FUNC_0(VAR_8, VAR_10->s);

 VAR_14 = FUNC_7(1, 0,
     (FUNC_1(VAR_9) ? VAR_6 : VAR_5),
     VAR_7);
 if (VAR_14 == ((void*)0)) {
  VAR_13 = VAR_4;
  goto done;
 }
 FUNC_6(VAR_14, VAR_10->buf, VAR_10->len);

 VAR_12.msg_name = VAR_10->to;
 VAR_12.msg_namelen = VAR_10->tolen;

 VAR_12.msg_iov = 0;
 VAR_12.msg_iovlen = 0;
 VAR_12.msg_control = 0;
 VAR_12.msg_flags = 0;

 VAR_13 = FUNC_4(VAR_10->s, &VAR_15);
 if (VAR_13)
  goto done;

 if (VAR_15 == ((void*)0)) {
  VAR_13 = VAR_3;
 } else {
  VAR_13 = FUNC_5(VAR_9, VAR_15, &VAR_12, VAR_14, VAR_10->flags, VAR_11);
 }

 FUNC_3(VAR_10->s);
done:
 if (VAR_14 != ((void*)0))
  FUNC_8(VAR_14);

 FUNC_2(VAR_0 | VAR_1, VAR_13, *VAR_11, 0, 0, 0);

 return (VAR_13);
}
