
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hh_cache {int dummy; } ;
struct TYPE_3__ {scalar_t__ p_encap; } ;
typedef TYPE_1__ isdn_net_local ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hh_cache*,struct net_device const*,unsigned char const*) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static void FUNC_2(struct hh_cache *VAR_1,
         const struct net_device *VAR_2,
         const unsigned char *VAR_3)
{
 isdn_net_local *VAR_4 = FUNC_1(VAR_2);
 if (VAR_4->p_encap == VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
