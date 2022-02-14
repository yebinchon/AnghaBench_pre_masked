
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcpiphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct tcpcb {TYPE_2__* t_inpcb; int t_flags; } ;
struct rtentry {TYPE_1__* rt_ifp; } ;
struct ip6_hdr {int dummy; } ;
struct TYPE_6__ {int inp_vflag; } ;
struct TYPE_5__ {scalar_t__ if_type; int if_baudrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtentry*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int VAR_5 ;
 struct rtentry* FUNC_4 (TYPE_2__*,int ) ;
 struct rtentry* FUNC_5 (TYPE_2__*,int ) ;
 int VAR_6 ;

int
FUNC_6(struct tcpcb *VAR_7)
{
 struct rtentry *VAR_8;
 int VAR_9;
 VAR_8 = FUNC_4(VAR_7->t_inpcb, VAR_0);
 if (VAR_8 == ((void*)0)) {
  return (



   VAR_5);
 }






 if (VAR_8->rt_ifp->if_type == VAR_1 && VAR_4 > 0 &&
     VAR_8->rt_ifp->if_baudrate > 9600 && VAR_8->rt_ifp->if_baudrate <= 128000) {
  VAR_7->t_flags |= VAR_3;
 }




 VAR_9 = FUNC_2(VAR_8);


 FUNC_0(VAR_8);






 return (VAR_9 - (sizeof (struct tcpiphdr)));
}
