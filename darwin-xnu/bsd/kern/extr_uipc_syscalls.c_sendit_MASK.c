
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
typedef int uio_t ;
struct user_msghdr {int msg_namelen; int msg_controllen; int msg_control; int msg_name; } ;
struct socket {int so_state; int so_flags; TYPE_2__* so_proto; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct cmsghdr {int dummy; } ;
typedef int ss ;
typedef int int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sosend ) (struct socket*,struct sockaddr*,int ,int ,struct mbuf*,int) ;} ;


 int FUNC_0 (int ,int ,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct socket*,struct sockaddr**,int ,int,scalar_t__) ;
 int FUNC_4 (struct socket*,struct sockaddr_storage*,int ,int,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct socket*,struct sockaddr*) ;
 int FUNC_7 (struct proc*,int ) ;
 int VAR_16 ;
 int FUNC_8 (struct mbuf**,int ,int,int ) ;
 int FUNC_9 (struct socket*,struct sockaddr*,int ,int ,struct mbuf*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct proc *VAR_17, struct socket *VAR_18, struct user_msghdr *VAR_19, uio_t VAR_20,
    int VAR_21, int32_t *VAR_22)
{
 struct mbuf *VAR_23 = ((void*)0);
 struct sockaddr_storage VAR_24;
 struct sockaddr *VAR_25 = ((void*)0);
 boolean_t VAR_26 = VAR_14;
 int VAR_27;
 user_ssize_t VAR_28;

 FUNC_2(VAR_0 | VAR_2, 0, 0, 0, 0, 0);

 if (VAR_19->msg_name != VAR_15) {
  if (VAR_19->msg_namelen > sizeof (VAR_24)) {
   VAR_27 = FUNC_3(VAR_18, &VAR_25, VAR_19->msg_name,
       VAR_19->msg_namelen, VAR_14);
  } else {
   VAR_27 = FUNC_4(VAR_18, &VAR_24, VAR_19->msg_name,
       VAR_19->msg_namelen, VAR_14);
   if (VAR_27 == 0) {
    VAR_25 = (struct sockaddr *)&VAR_24;
    VAR_26 = VAR_8;
   }
  }
  if (VAR_27 != 0)
   goto out;
  FUNC_0(VAR_16, FUNC_12(FUNC_11()), VAR_25);
 }
 if (VAR_19->msg_control != VAR_15) {
  if (VAR_19->msg_controllen < sizeof (struct cmsghdr)) {
   VAR_27 = VAR_4;
   goto bad;
  }
  VAR_27 = FUNC_8(&VAR_23, VAR_19->msg_control,
      VAR_19->msg_controllen, VAR_9);
  if (VAR_27 != 0)
   goto bad;
 }
 VAR_28 = FUNC_10(VAR_20);
 VAR_27 = VAR_18->so_proto->pr_usrreqs->pru_sosend(VAR_18, VAR_25, VAR_20, 0,
  VAR_23, VAR_21);
 if (VAR_27 != 0) {
  if (FUNC_10(VAR_20) != VAR_28 && (VAR_27 == VAR_6 ||
      VAR_27 == VAR_3 || VAR_27 == VAR_7))
   VAR_27 = 0;

  if (VAR_27 == VAR_5 && !(VAR_18->so_flags & VAR_12))
   FUNC_7(VAR_17, VAR_11);
 }
 if (VAR_27 == 0)
  *VAR_22 = (int)(VAR_28 - FUNC_10(VAR_20));
bad:
 if (VAR_25 != ((void*)0) && VAR_26)
  FUNC_1(VAR_25, VAR_10);
out:
 FUNC_2(VAR_0 | VAR_1, VAR_27, 0, 0, 0, 0);

 return (VAR_27);
}
