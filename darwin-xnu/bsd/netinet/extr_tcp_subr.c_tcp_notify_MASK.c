
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_state; int t_rxtshift; int t_softerror; } ;
struct rtentry {int dummy; } ;
struct TYPE_5__ {struct rtentry* ro_rt; } ;
struct inpcb {scalar_t__ inp_state; TYPE_1__ inp_route; scalar_t__ inp_ppcb; } ;
typedef int caddr_t ;
struct TYPE_6__ {int so_timeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtentry*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct tcpcb*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct inpcb *VAR_6, int VAR_7)
{
 struct tcpcb *VAR_8;

 if (VAR_6 == ((void*)0) || (VAR_6->inp_state == VAR_3))
  return;

 VAR_8 = (struct tcpcb *)VAR_6->inp_ppcb;

 FUNC_0(VAR_8 != ((void*)0));







 if (VAR_8->t_state == VAR_4 &&
     (VAR_7 == VAR_1 || VAR_7 == VAR_2 ||
     VAR_7 == VAR_0)) {
  if (VAR_6->inp_route.ro_rt) {
   FUNC_1(VAR_6->inp_route.ro_rt);
   VAR_6->inp_route.ro_rt = (struct rtentry *)((void*)0);
  }
 } else if (VAR_8->t_state < VAR_4 && VAR_8->t_rxtshift > 3 &&
     VAR_8->t_softerror)
  FUNC_4(VAR_8, VAR_7);
 else
  VAR_8->t_softerror = VAR_7;





}
