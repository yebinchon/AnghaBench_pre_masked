
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctcm_priv {int protocol; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,char*,struct ccwgroup_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ccwgroup_device*) ;
 struct ctcm_priv* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ctcm_priv*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ccwgroup_device *VAR_3)
{
 struct ctcm_priv *VAR_4 = FUNC_4(&VAR_3->dev);

 FUNC_0(VAR_4 == ((void*)0));

 FUNC_1(VAR_2, VAR_1,
   "removing device %p, proto : %d",
   VAR_3, VAR_4->protocol);

 if (VAR_3->state == VAR_0)
  FUNC_3(VAR_3);
 FUNC_2(&VAR_3->dev);
 FUNC_5(&VAR_3->dev, ((void*)0));
 FUNC_6(VAR_4);
 FUNC_7(&VAR_3->dev);
}
