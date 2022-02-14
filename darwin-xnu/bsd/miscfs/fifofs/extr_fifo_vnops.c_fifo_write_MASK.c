
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnop_write_args {int a_ioflag; TYPE_3__* a_vp; TYPE_2__* a_uio; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {TYPE_1__* v_fifoinfo; } ;
struct TYPE_5__ {scalar_t__ uio_rw; } ;
struct TYPE_4__ {struct socket* fi_writesock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct socket*,struct sockaddr*,TYPE_2__*,int *,struct mbuf*,int ) ;

int
FUNC_3(struct vnop_write_args *VAR_3)
{
 struct socket *VAR_4 = VAR_3->a_vp->v_fifoinfo->fi_writesock;
 int VAR_5;





 VAR_5 = FUNC_2(VAR_4, (struct sockaddr *)0, VAR_3->a_uio, ((void*)0),
         (struct mbuf *)0, (VAR_3->a_ioflag & VAR_0) ? VAR_1 : 0);
 if (VAR_5 == 0)
  FUNC_0(VAR_3->a_vp, 0);

 return (VAR_5);
}
