
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_1__ s; } ;
struct octeon_ethernet {int port; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct octeon_ethernet* FUNC_5 (struct net_device*) ;

int FUNC_6(struct net_device *VAR_0)
{
 union cvmx_gmxx_prtx_cfg VAR_1;
 struct octeon_ethernet *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = FUNC_2(VAR_2->port);
 int VAR_4 = FUNC_1(VAR_2->port);

 VAR_1.u64 = FUNC_3(FUNC_0(VAR_4, VAR_3));
 VAR_1.s.en = 0;
 FUNC_4(FUNC_0(VAR_4, VAR_3), VAR_1.u64);
 return 0;
}
