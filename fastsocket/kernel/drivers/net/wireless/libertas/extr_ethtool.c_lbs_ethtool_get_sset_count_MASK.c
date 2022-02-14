
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {struct net_device* mesh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, int VAR_4)
{
 struct lbs_private *VAR_5 = VAR_3->ml_priv;

 if (VAR_4 == VAR_1 && VAR_3 == VAR_5->mesh_dev)
  return VAR_2;

 return -VAR_0;
}
