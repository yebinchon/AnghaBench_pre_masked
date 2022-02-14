
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ currenttxskb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct lbs_private*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (struct lbs_private*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct lbs_private *VAR_4 = VAR_3->ml_priv;

 FUNC_0(VAR_1);

 FUNC_3("tx watch dog timeout\n");

 VAR_3->trans_start = VAR_2;

 if (VAR_4->currenttxskb)
  FUNC_5(VAR_4, 0);



 FUNC_2(VAR_4);





 FUNC_4(VAR_4, VAR_0, 0,
         0, 0, ((void*)0));

 FUNC_1(VAR_1);
}
