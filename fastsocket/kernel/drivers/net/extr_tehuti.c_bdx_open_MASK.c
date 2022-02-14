
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bdx_priv {int nic; int napi; int rxf_fifo0; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bdx_priv*) ;
 int FUNC_3 (struct bdx_priv*) ;
 int FUNC_4 (struct bdx_priv*) ;
 int FUNC_5 (struct bdx_priv*,int *) ;
 int FUNC_6 (struct bdx_priv*) ;
 int FUNC_7 (struct bdx_priv*) ;
 int FUNC_8 (int *) ;
 struct bdx_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_1)
{
 struct bdx_priv *VAR_2;
 int VAR_3;

 VAR_0;
 VAR_2 = FUNC_9(VAR_1);
 FUNC_4(VAR_2);
 if (FUNC_10(VAR_1))
  FUNC_11(VAR_2->ndev);

 if ((VAR_3 = FUNC_7(VAR_2)))
  goto err;

 if ((VAR_3 = FUNC_6(VAR_2)))
  goto err;

 if ((VAR_3 = FUNC_2(VAR_2)))
  goto err;

 FUNC_5(VAR_2, &VAR_2->rxf_fifo0);

 if ((VAR_3 = FUNC_3(VAR_2)))
  goto err;

 FUNC_8(&VAR_2->napi);

 FUNC_12(VAR_2->nic);

 FUNC_0(0);

err:
 FUNC_1(VAR_1);
 FUNC_0(VAR_3);
}
