
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sb_flags; } ;
struct TYPE_8__ {int sb_flags; } ;
struct TYPE_12__ {int * tqh_first; } ;
struct socket {int so_options; int so_state; int so_error; int so_usecount; int so_flags; TYPE_2__ so_snd; TYPE_1__ so_rcv; int * so_filt; int so_qlen; int * so_head; TYPE_5__ so_comp; int so_timeo; TYPE_4__* so_proto; } ;
struct sockaddr {int sa_len; } ;
struct proc {int dummy; } ;
struct fileproc {short f_flag; struct sockaddr* f_data; int * f_ops; } ;
struct accept_nocancel_args {int s; int anamelen; int name; } ;
typedef int socklen_t ;
typedef int lck_mtx_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef struct sockaddr* caddr_t ;
struct TYPE_11__ {int pr_flags; TYPE_3__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_10__ {int * dom_mtx; } ;


 int FUNC_0 (int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 struct socket* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,struct socket*,int ) ;
 scalar_t__ FUNC_7 (struct socket*) ;
 int FUNC_8 (int ,struct sockaddr*,int) ;
 int FUNC_9 (struct sockaddr*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct proc*,struct fileproc**,int*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_14 (struct proc*,int,struct fileproc**,struct socket**) ;
 int VAR_26 ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int ,struct socket*) ;
 int FUNC_18 (int ,struct socket*) ;
 int FUNC_19 (struct sockaddr*,int *,int,char*,int ) ;
 int FUNC_20 (char*,struct socket*,int) ;
 int FUNC_21 (struct proc*) ;
 int FUNC_22 (struct proc*) ;
 int FUNC_23 (struct proc*,int,int *) ;
 int FUNC_24 (struct socket*,int *) ;
 int VAR_27 ;
 int FUNC_25 (struct socket*) ;
 int FUNC_26 (struct socket*,struct socket*) ;
 int FUNC_27 (struct socket*,struct sockaddr**,int ) ;
 int VAR_28 ;
 int FUNC_28 (struct socket*,int) ;
 int FUNC_29 (struct socket*,int) ;
 int VAR_29 ;
 int FUNC_30 (struct socket*) ;
 int FUNC_31 (int ,struct socket*,int ) ;
 int FUNC_32 (struct socket*) ;
 int * FUNC_33 (struct socket*,int ) ;
 int FUNC_34 () ;
 int FUNC_35 (int ) ;

int
FUNC_36(struct proc *VAR_30, struct accept_nocancel_args *VAR_31,
    int32_t *VAR_32)
{
 struct fileproc *VAR_33;
 struct sockaddr *VAR_34 = ((void*)0);
 socklen_t VAR_35;
 int VAR_36;
 struct socket *VAR_37, *VAR_38 = ((void*)0);
 lck_mtx_t *VAR_39;
 int VAR_40 = VAR_31->s;
 int VAR_41;
 short VAR_42;
 int VAR_43 = 0;

 *VAR_32 = -1;

 FUNC_0(VAR_40, VAR_31->s);

 if (VAR_31->name) {
  VAR_36 = FUNC_8(VAR_31->anamelen, (caddr_t)&VAR_35,
      sizeof (socklen_t));
  if (VAR_36)
   return (VAR_36);
 }
 VAR_36 = FUNC_14(VAR_30, VAR_40, &VAR_33, &VAR_37);
 if (VAR_36) {
  if (VAR_36 == VAR_6)
   VAR_36 = VAR_4;
  return (VAR_36);
 }
 if (VAR_37 == ((void*)0)) {
  VAR_36 = VAR_1;
  goto out;
 }





 FUNC_28(VAR_37, 1);

 if (VAR_37->so_proto->pr_getlock != ((void*)0)) {
  VAR_39 = (*VAR_37->so_proto->pr_getlock)(VAR_37, VAR_14);
  VAR_43 = 1;
 } else {
  VAR_39 = VAR_37->so_proto->pr_domain->dom_mtx;
  VAR_43 = 0;
 }

 if ((VAR_37->so_options & VAR_19) == 0) {
  if ((VAR_37->so_proto->pr_flags & VAR_13) == 0) {
   VAR_36 = VAR_6;
  } else {

   VAR_36 = VAR_3;
  }
  FUNC_29(VAR_37, 1);
  goto out;
 }
check_again:
 if ((VAR_37->so_state & VAR_24) && VAR_37->so_comp.tqh_first == ((void*)0)) {
  FUNC_29(VAR_37, 1);
  VAR_36 = VAR_7;
  goto out;
 }
 while (FUNC_4(&VAR_37->so_comp) && VAR_37->so_error == 0) {
  if (VAR_37->so_state & VAR_21) {
   VAR_37->so_error = VAR_2;
   break;
  }
  if (VAR_37->so_usecount < 1)
   FUNC_20("accept: head=%p refcount=%d\n", VAR_37,
       VAR_37->so_usecount);
  VAR_36 = FUNC_19((caddr_t)&VAR_37->so_timeo, VAR_39,
      VAR_15 | VAR_12, "accept", 0);
  if (VAR_37->so_usecount < 1)
   FUNC_20("accept: 2 head=%p refcount=%d\n", VAR_37,
       VAR_37->so_usecount);
  if ((VAR_37->so_state & VAR_23)) {
   VAR_36 = VAR_2;
  }
  if (VAR_36) {
   FUNC_29(VAR_37, 1);
   goto out;
  }
 }
 if (VAR_37->so_error) {
  VAR_36 = VAR_37->so_error;
  VAR_37->so_error = 0;
  FUNC_29(VAR_37, 1);
  goto out;
 }
 FUNC_16(VAR_39, VAR_10);

 FUNC_24(VAR_37, ((void*)0));
 if (FUNC_4(&VAR_37->so_comp)) {
  FUNC_25(VAR_37);
  goto check_again;
 }

 VAR_38 = FUNC_5(&VAR_37->so_comp);
 FUNC_6(&VAR_37->so_comp, VAR_38, VAR_27);
 VAR_38->so_head = ((void*)0);
 VAR_38->so_state &= ~VAR_22;
 VAR_37->so_qlen--;
 FUNC_25(VAR_37);


 FUNC_29(VAR_37, 0);
 if (VAR_38->so_filt != ((void*)0) && (VAR_36 = FUNC_26(VAR_38, VAR_37)) != 0) {

  FUNC_32(VAR_37);

  goto out;
 }

 VAR_42 = VAR_33->f_flag;
 VAR_36 = FUNC_11(VAR_30, &VAR_33, &VAR_41, FUNC_34());
 if (VAR_36) {







  FUNC_28(VAR_38, 1);
  VAR_38->so_state &= ~VAR_25;
  FUNC_29(VAR_38, 1);
  FUNC_30(VAR_38);
  FUNC_32(VAR_37);
  goto out;
 }
 *VAR_32 = VAR_41;
 VAR_33->f_flag = VAR_42;
 VAR_33->f_ops = &VAR_29;
 VAR_33->f_data = (caddr_t)VAR_38;

 FUNC_28(VAR_37, 0);
 if (VAR_43)
  FUNC_28(VAR_38, 1);


 if (VAR_33->f_flag & VAR_9) {
  VAR_38->so_state |= VAR_24;
 } else {
  VAR_38->so_state &= ~VAR_24;
 }

 if (VAR_33->f_flag & VAR_8) {
  VAR_38->so_state |= VAR_20;
  VAR_38->so_rcv.sb_flags |= VAR_16;
  VAR_38->so_snd.sb_flags |= VAR_16;
 } else {
  VAR_38->so_state &= ~VAR_20;
  VAR_38->so_rcv.sb_flags &= ~VAR_16;
  VAR_38->so_snd.sb_flags &= ~VAR_16;
 }

 (void) FUNC_27(VAR_38, &VAR_34, 0);
 FUNC_29(VAR_37, 1);
 if (VAR_34 == ((void*)0)) {
  VAR_35 = 0;
  if (VAR_31->name)
   goto gotnoname;
  VAR_36 = 0;
  goto releasefd;
 }
 FUNC_0(VAR_28, FUNC_35(FUNC_34()), VAR_34);

 if (VAR_31->name) {
  socklen_t VAR_44;


  VAR_44 = VAR_34->sa_len;
  VAR_35 = FUNC_3(VAR_35, VAR_44);
  VAR_36 = FUNC_9(VAR_34, VAR_31->name, VAR_35);
  if (!VAR_36)

   VAR_35 = VAR_44;
gotnoname:
  VAR_36 = FUNC_9((caddr_t)&VAR_35, VAR_31->anamelen,
      sizeof (socklen_t));
 }
 FUNC_1(VAR_34, VAR_11);

releasefd:




 if (VAR_38->so_flags & VAR_18) {
  FUNC_31(FUNC_10(), VAR_38,
      VAR_17);
 }

 if (VAR_43)
  FUNC_29(VAR_38, 1);

 FUNC_21(VAR_30);
 FUNC_23(VAR_30, VAR_41, ((void*)0));
 FUNC_13(VAR_30, VAR_41, VAR_33, 1);
 FUNC_22(VAR_30);

out:
 FUNC_12(VAR_40);

 if (VAR_36 == 0 && VAR_5) {
  FUNC_2(VAR_26, VAR_0,
      VAR_41, 0, (int64_t)FUNC_7(VAR_38));
 }
 return (VAR_36);
}
