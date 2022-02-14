
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uio_t ;
struct user_msghdr {int msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; scalar_t__ msg_iovlen; scalar_t__ msg_iov; int msg_name; scalar_t__ msg_namelen; } ;
struct recvfrom_nocancel_args {int fromlenaddr; int s; int flags; int len; int buf; int from; } ;
struct proc {int dummy; } ;
typedef int int32_t ;
typedef int caddr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct proc*) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_4 (struct proc*,int ,struct user_msghdr*,int *,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct proc *VAR_8, struct recvfrom_nocancel_args *VAR_9,
    int32_t *VAR_10)
{
 struct user_msghdr VAR_11;
 int VAR_12;
 uio_t VAR_13 = ((void*)0);

 FUNC_2(VAR_0 | VAR_2, 0, 0, 0, 0, 0);
 FUNC_0(VAR_7, VAR_9->s);

 if (VAR_9->fromlenaddr) {
  VAR_12 = FUNC_3(VAR_9->fromlenaddr,
      (caddr_t)&VAR_11.msg_namelen, sizeof (VAR_11.msg_namelen));
  if (VAR_12)
   return (VAR_12);
 } else {
  VAR_11.msg_namelen = 0;
 }
 VAR_11.msg_name = VAR_9->from;
 VAR_13 = FUNC_6(1, 0,
     (FUNC_1(VAR_8) ? VAR_6 : VAR_5),
     VAR_4);
 if (VAR_13 == ((void*)0)) {
  return (VAR_3);
 }

 FUNC_5(VAR_13, VAR_9->buf, VAR_9->len);

 VAR_11.msg_iov = 0;
 VAR_11.msg_iovlen = 0;
 VAR_11.msg_control = 0;
 VAR_11.msg_controllen = 0;
 VAR_11.msg_flags = VAR_9->flags;
 VAR_12 = FUNC_4(VAR_8, VAR_9->s, &VAR_11, VAR_13, VAR_9->fromlenaddr, VAR_10);
 if (VAR_13 != ((void*)0)) {
  FUNC_7(VAR_13);
 }

 FUNC_2(VAR_0 | VAR_1, VAR_12, 0, 0, 0, 0);

 return (VAR_12);
}
