
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rmx_mtu; } ;
struct rtentry {TYPE_1__ rt_rmx; TYPE_3__* rt_ifp; } ;
struct TYPE_7__ {int if_mtu; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct rtentry*) ;
 TYPE_2__* FUNC_4 (struct rtentry*) ;

__attribute__((used)) static inline unsigned int
FUNC_5(struct rtentry *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;

 FUNC_3(VAR_2);
 VAR_4 = VAR_2->rt_ifp->if_mtu;

 if (FUNC_4(VAR_2)->sa_family == VAR_0 &&
     FUNC_1(VAR_2->rt_ifp)) {
  VAR_4 = FUNC_0(VAR_2->rt_ifp);

  VAR_4 -= VAR_1;
 }

 if (VAR_2->rt_rmx.rmx_mtu == 0)
  VAR_3 = VAR_4;
 else
  VAR_3 = FUNC_2(VAR_2->rt_rmx.rmx_mtu, VAR_4);

 return (VAR_3);
}
