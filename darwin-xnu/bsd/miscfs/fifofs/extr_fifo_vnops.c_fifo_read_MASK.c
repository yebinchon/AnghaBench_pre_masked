
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_ssize_t ;
struct vnop_read_args {int a_ioflag; TYPE_3__* a_vp; struct uio* a_uio; } ;
struct uio {scalar_t__ uio_rw; } ;
struct TYPE_5__ {scalar_t__ sb_cc; } ;
struct socket {int so_state; TYPE_2__ so_rcv; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {TYPE_1__* v_fifoinfo; } ;
struct TYPE_4__ {int fi_writers; struct socket* fi_readsock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*,struct sockaddr**,struct uio*,struct mbuf**,struct mbuf**,int*) ;
 scalar_t__ FUNC_5 (struct uio*) ;

int
FUNC_6(struct vnop_read_args *VAR_5)
{
 struct uio *VAR_6 = VAR_5->a_uio;
 struct socket *VAR_7 = VAR_5->a_vp->v_fifoinfo->fi_readsock;
 user_ssize_t VAR_8;
 int VAR_9;
 int VAR_10;





 if (FUNC_5(VAR_6) == 0)
  return (0);

 VAR_10 = (VAR_5->a_ioflag & VAR_1) ? VAR_2 : 0;

 VAR_8 = FUNC_5(VAR_6);






 VAR_9 = 0;
 if (VAR_5->a_vp->v_fifoinfo->fi_writers < 1) {
  FUNC_2(VAR_7, 1);
  VAR_9 = (VAR_7->so_rcv.sb_cc == 0) ? VAR_0 : 0;
  FUNC_3(VAR_7, 1);
 }


 if (VAR_9 != VAR_0) {
  VAR_9 = FUNC_4(VAR_7, (struct sockaddr **)0, VAR_6, (struct mbuf **)0,
      (struct mbuf **)0, &VAR_10);
  if (VAR_9 == 0)
   FUNC_0(VAR_5->a_vp, 0);
 }
 else {

  VAR_9 = 0;
 }



 if (FUNC_5(VAR_6) == VAR_8) {
  FUNC_2(VAR_7, 1);
  VAR_7->so_state &= ~VAR_3;
  FUNC_3(VAR_7, 1);
 }
 return (VAR_9);
}
