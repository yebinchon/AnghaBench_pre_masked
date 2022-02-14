
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int stats_poll; int in_shutdown; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *) VAR_2;
 struct fe_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_3);

 if (!VAR_4->in_shutdown)
  FUNC_0(&VAR_4->stats_poll,
   FUNC_3(VAR_1 + VAR_0));
}
