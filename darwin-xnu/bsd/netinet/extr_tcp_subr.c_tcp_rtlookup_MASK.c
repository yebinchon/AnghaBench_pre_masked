
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tcpcb {int t_flags; } ;
struct TYPE_13__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_7__ sin_addr; } ;
struct TYPE_10__ {int rmx_locks; } ;
struct rtentry {int rt_flags; TYPE_5__* rt_ifp; TYPE_4__* rt_gateway; TYPE_3__ rt_rmx; } ;
struct TYPE_8__ {int sa_len; int sa_family; } ;
struct route {struct rtentry* ro_rt; TYPE_1__ ro_dst; } ;
struct inpcb {int inp_flags; TYPE_7__ inp_faddr; TYPE_5__* inp_last_outifp; int inp_socket; TYPE_2__* inp_boundifp; struct route inp_route; } ;
struct TYPE_12__ {int if_hwassist; int if_eflags; int if_flags; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {unsigned int if_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct route*) ;
 scalar_t__ FUNC_2 (struct route*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (TYPE_7__) ;
 struct tcpcb* FUNC_7 (struct inpcb*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct route*,unsigned int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct tcpcb*,TYPE_5__*) ;
 int FUNC_12 (struct tcpcb*,TYPE_5__*) ;

struct rtentry *
FUNC_13(struct inpcb *VAR_15, unsigned int VAR_16)
{
 struct route *VAR_17;
 struct rtentry *VAR_18;
 struct tcpcb *VAR_19;

 FUNC_0(VAR_14, VAR_8);

 VAR_17 = &VAR_15->inp_route;
 if ((VAR_18 = VAR_17->ro_rt) != ((void*)0))
  FUNC_3(VAR_18);

 if (FUNC_2(VAR_17)) {
  if (VAR_18 != ((void*)0)) {
   FUNC_5(VAR_18);
   VAR_18 = ((void*)0);
  }
  FUNC_1(VAR_17);

  if (VAR_15->inp_faddr.s_addr != VAR_6) {
   unsigned int VAR_20;

   VAR_17->ro_dst.sa_family = VAR_0;
   VAR_17->ro_dst.sa_len = sizeof(struct sockaddr_in);
   ((struct sockaddr_in *)(void *)&VAR_17->ro_dst)->sin_addr =
    VAR_15->inp_faddr;
   VAR_20 = (VAR_15->inp_flags & VAR_7) ?
       VAR_15->inp_boundifp->if_index : VAR_16;

   FUNC_8(VAR_17, VAR_20);
   if ((VAR_18 = VAR_17->ro_rt) != ((void*)0))
    FUNC_3(VAR_18);
  }
 }
 if (VAR_18 != ((void*)0))
  FUNC_4(VAR_18);
 VAR_19 = FUNC_7(VAR_15);

 if (!VAR_13 || ((VAR_18 != ((void*)0)) &&
     (!(VAR_18->rt_flags & VAR_9) || (VAR_18->rt_rmx.rmx_locks & VAR_10))))
  VAR_19->t_flags &= ~VAR_12;
 else
  VAR_19->t_flags |= VAR_12;

 if (VAR_18 != ((void*)0) && VAR_18->rt_ifp != ((void*)0)) {
  FUNC_10(VAR_15->inp_socket,
      (VAR_18->rt_ifp->if_hwassist & VAR_5));
  FUNC_12(VAR_19, VAR_18->rt_ifp);
  FUNC_9(VAR_15->inp_socket,
      (VAR_18->rt_ifp->if_eflags & VAR_2));
  FUNC_11(VAR_19, VAR_18->rt_ifp);
  if (VAR_15->inp_last_outifp == ((void*)0)) {
   VAR_15->inp_last_outifp = VAR_18->rt_ifp;

  }
 }


 if (VAR_18 != ((void*)0) && !(VAR_18->rt_ifp->if_flags & VAR_4) &&
  (VAR_18->rt_gateway->sa_family == VAR_1 ||
  VAR_18->rt_ifp->if_flags & VAR_3 ||
  FUNC_6(VAR_15->inp_faddr))) {
  VAR_19->t_flags |= VAR_11;
 }




 return (VAR_18);
}
