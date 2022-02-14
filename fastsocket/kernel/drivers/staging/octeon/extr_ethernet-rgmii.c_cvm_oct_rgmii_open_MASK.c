
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_2__ s; } ;
struct octeon_ethernet {int port; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int link_up; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct octeon_ethernet* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;

int FUNC_9(struct net_device *VAR_0)
{
 union cvmx_gmxx_prtx_cfg VAR_1;
 struct octeon_ethernet *VAR_2 = FUNC_6(VAR_0);
 int VAR_3 = FUNC_2(VAR_2->port);
 int VAR_4 = FUNC_1(VAR_2->port);
 cvmx_helper_link_info_t VAR_5;

 VAR_1.u64 = FUNC_4(FUNC_0(VAR_4, VAR_3));
 VAR_1.s.en = 1;
 FUNC_5(FUNC_0(VAR_4, VAR_3), VAR_1.u64);

 if (!FUNC_8()) {
  VAR_5 = FUNC_3(VAR_2->port);
  if (!VAR_5.s.link_up)
   FUNC_7(VAR_0);
 }

 return 0;
}
