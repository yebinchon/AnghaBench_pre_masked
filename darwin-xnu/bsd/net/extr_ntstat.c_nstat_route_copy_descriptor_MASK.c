
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int u_int32_t ;
struct sockaddr {int sa_len; } ;
struct rtentry {int rt_flags; TYPE_3__* rt_ifp; struct sockaddr* rt_gateway; struct rtentry* rt_gwroute; struct rtentry* rt_parent; } ;
struct TYPE_7__ {int sa; } ;
struct TYPE_6__ {int sa; } ;
struct TYPE_9__ {int flags; int ifindex; TYPE_2__ gateway; int mask; TYPE_1__ dst; void* gateway_id; void* parent_id; void* id; } ;
typedef TYPE_4__ nstat_route_descriptor ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;
struct TYPE_8__ {int if_index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtentry*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *,struct sockaddr*,int) ;
 int FUNC_3 (struct sockaddr*,int *,int) ;
 struct sockaddr* FUNC_4 (struct rtentry*) ;
 struct sockaddr* FUNC_5 (struct rtentry*) ;

__attribute__((used)) static errno_t
FUNC_6(
 nstat_provider_cookie_t VAR_1,
 void *VAR_2,
 u_int32_t VAR_3)
{
 nstat_route_descriptor *VAR_4 = (nstat_route_descriptor*)VAR_2;
 if (VAR_3 < sizeof(*VAR_4))
 {
  return VAR_0;
 }
 FUNC_1(VAR_4, sizeof(*VAR_4));

 struct rtentry *VAR_5 = (struct rtentry*)VAR_1;
 VAR_4->id = (uint64_t)FUNC_0(VAR_5);
 VAR_4->parent_id = (uint64_t)FUNC_0(VAR_5->rt_parent);
 VAR_4->gateway_id = (uint64_t)FUNC_0(VAR_5->rt_gwroute);



 struct sockaddr *VAR_6;
 if ((VAR_6 = FUNC_4(VAR_5)))
  FUNC_3(VAR_6, &VAR_4->dst.sa, sizeof(VAR_4->dst));


 if ((VAR_6 = FUNC_5(VAR_5)) && VAR_6->sa_len <= sizeof(VAR_4->mask))
  FUNC_2(&VAR_4->mask, VAR_6, VAR_6->sa_len);


 if ((VAR_6 = VAR_5->rt_gateway))
  FUNC_3(VAR_6, &VAR_4->gateway.sa, sizeof(VAR_4->gateway));

 if (VAR_5->rt_ifp)
  VAR_4->ifindex = VAR_5->rt_ifp->if_index;

 VAR_4->flags = VAR_5->rt_flags;

 return 0;
}
