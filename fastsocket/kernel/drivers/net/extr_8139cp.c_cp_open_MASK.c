
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;
struct cp_private {int napi; int mii_if; } ;


 int VAR_0 ;
 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (struct cp_private*) ;
 int VAR_1 ;
 int FUNC_4 (struct cp_private*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cp_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct cp_private*) ;
 int FUNC_11 (struct cp_private*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_15 (struct net_device *VAR_2)
{
 struct cp_private *VAR_3 = FUNC_8(VAR_2);
 int VAR_4;

 if (FUNC_10(VAR_3))
  FUNC_13("%s: enabling interface\n", VAR_2->name);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_7(&VAR_3->napi);

 FUNC_3(VAR_3);

 VAR_4 = FUNC_14(VAR_2->irq, VAR_1, VAR_0, VAR_2->name, VAR_2);
 if (VAR_4)
  goto err_out_hw;

 FUNC_1(VAR_3);

 FUNC_9(VAR_2);
 FUNC_5(&VAR_3->mii_if, FUNC_11(VAR_3), 1);
 FUNC_12(VAR_2);

 return 0;

err_out_hw:
 FUNC_6(&VAR_3->napi);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
 return VAR_4;
}
