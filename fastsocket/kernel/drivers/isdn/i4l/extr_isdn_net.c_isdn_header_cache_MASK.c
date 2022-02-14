
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neighbour {struct net_device* dev; } ;
struct hh_cache {int dummy; } ;
struct TYPE_3__ {scalar_t__ p_encap; } ;
typedef TYPE_1__ isdn_net_local ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct neighbour const*,struct hh_cache*) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct neighbour *VAR_1, struct hh_cache *VAR_2)
{
 const struct net_device *VAR_3 = VAR_1->dev;
 isdn_net_local *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->p_encap == VAR_0)
  return FUNC_0(VAR_1, VAR_2);
 return -1;
}
