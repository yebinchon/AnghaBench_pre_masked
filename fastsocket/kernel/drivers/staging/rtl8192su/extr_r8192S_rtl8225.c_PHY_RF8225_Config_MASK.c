
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int NumTotalRFPath; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

bool FUNC_3(struct net_device* VAR_0 )
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);
 bool VAR_2 = 1;
 VAR_1->NumTotalRFPath = 2;
   FUNC_1(VAR_0);
   FUNC_2(VAR_0);






 return VAR_2;

}
