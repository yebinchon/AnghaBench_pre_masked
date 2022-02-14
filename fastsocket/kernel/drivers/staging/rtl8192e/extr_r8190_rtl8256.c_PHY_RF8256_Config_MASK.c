
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int NumTotalRFPath; } ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

RT_STATUS FUNC_2(struct net_device* VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);


 RT_STATUS VAR_4 = VAR_1;

 VAR_3->NumTotalRFPath = VAR_0;

 VAR_4 = FUNC_1(VAR_2);

 return VAR_4;
}
