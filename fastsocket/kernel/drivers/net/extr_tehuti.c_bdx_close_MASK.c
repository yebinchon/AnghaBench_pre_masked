
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bdx_priv {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bdx_priv*) ;
 int FUNC_2 (struct bdx_priv*) ;
 int FUNC_3 (struct bdx_priv*) ;
 int FUNC_4 (struct bdx_priv*) ;
 int FUNC_5 (int *) ;
 struct bdx_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct bdx_priv *VAR_2 = ((void*)0);

 VAR_0;
 VAR_2 = FUNC_6(VAR_1);

 FUNC_5(&VAR_2->napi);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_0(0);
}
