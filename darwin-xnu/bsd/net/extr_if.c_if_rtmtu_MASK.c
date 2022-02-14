
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rmx_locks; scalar_t__ rmx_mtu; } ;
struct rtentry {TYPE_1__ rt_rmx; struct ifnet* rt_ifp; } ;
struct radix_node {int dummy; } ;
struct ifnet {scalar_t__ if_mtu; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 int VAR_2 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 TYPE_2__* FUNC_4 (struct rtentry*) ;

__attribute__((used)) static int
FUNC_5(struct radix_node *VAR_3, void *VAR_4)
{
 struct rtentry *VAR_5 = (struct rtentry *)VAR_3;
 struct ifnet *VAR_6 = VAR_4;

 FUNC_2(VAR_5);
 if (VAR_5->rt_ifp == VAR_6) {





  if (!(VAR_5->rt_rmx.rmx_locks & VAR_2) && VAR_5->rt_rmx.rmx_mtu) {
   VAR_5->rt_rmx.rmx_mtu = VAR_6->if_mtu;
   if (FUNC_4(VAR_5)->sa_family == VAR_0 &&
       FUNC_1(VAR_6)) {
    VAR_5->rt_rmx.rmx_mtu = FUNC_0(VAR_6);

    VAR_5->rt_rmx.rmx_mtu -= VAR_1;
   }
  }
 }
 FUNC_3(VAR_5);

 return (0);
}
