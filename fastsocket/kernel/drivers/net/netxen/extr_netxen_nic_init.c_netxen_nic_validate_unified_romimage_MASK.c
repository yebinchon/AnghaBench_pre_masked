
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netxen_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;
 scalar_t__ FUNC_3 (struct netxen_adapter*) ;
 scalar_t__ FUNC_4 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  FUNC_0(&VAR_1->pdev->dev,
    "unified image: header validation failed\n");
  return -VAR_0;
 }

 if (FUNC_4(VAR_1)) {
  FUNC_0(&VAR_1->pdev->dev,
    "unified image: product validation failed\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_1)) {
  FUNC_0(&VAR_1->pdev->dev,
    "unified image: bootld validation failed\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_1)) {
  FUNC_0(&VAR_1->pdev->dev,
    "unified image: firmware validation failed\n");
  return -VAR_0;
 }

 return 0;
}
