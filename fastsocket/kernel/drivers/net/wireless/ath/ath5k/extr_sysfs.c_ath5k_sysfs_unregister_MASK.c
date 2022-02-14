
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct ath5k_hw {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct ath5k_hw *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;

 FUNC_0(&VAR_2->kobj, &VAR_0);
}
