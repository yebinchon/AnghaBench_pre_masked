
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct octeon_ethernet {scalar_t__ link_info; int queue; int port; } ;
struct net_device {int name; } ;
struct TYPE_5__ {scalar_t__ full_duplex; int speed; scalar_t__ link_up; } ;
struct TYPE_6__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (char*,int ,...) ;
 TYPE_2__ FUNC_1 (int ) ;
 TYPE_2__ FUNC_2 (int ) ;
 struct octeon_ethernet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct octeon_ethernet *VAR_1 = FUNC_3(VAR_0);
 cvmx_helper_link_info_t VAR_2;

 VAR_2 = FUNC_2(VAR_1->port);
 if (VAR_2.u64 == VAR_1->link_info)
  return;

 VAR_2 = FUNC_1(VAR_1->port);
 VAR_1->link_info = VAR_2.u64;


 if (VAR_2.s.link_up) {

  if (!FUNC_5(VAR_0))
   FUNC_6(VAR_0);
  if (VAR_1->queue != -1)
   FUNC_0
       ("%s: %u Mbps %s duplex, port %2d, queue %2d\n",
        VAR_0->name, VAR_2.s.speed,
        (VAR_2.s.full_duplex) ? "Full" : "Half",
        VAR_1->port, VAR_1->queue);
  else
   FUNC_0("%s: %u Mbps %s duplex, port %2d, POW\n",
       VAR_0->name, VAR_2.s.speed,
       (VAR_2.s.full_duplex) ? "Full" : "Half",
       VAR_1->port);
 } else {
  if (FUNC_5(VAR_0))
   FUNC_4(VAR_0);
  FUNC_0("%s: Link down\n", VAR_0->name);
 }
}
