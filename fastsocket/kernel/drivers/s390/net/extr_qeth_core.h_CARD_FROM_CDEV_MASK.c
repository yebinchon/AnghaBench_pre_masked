
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct ccwgroup_device {int dev; } ;
struct ccw_device {int dev; } ;


 struct qeth_card* FUNC_0 (int *) ;

__attribute__((used)) static inline struct qeth_card *FUNC_1(struct ccw_device *VAR_0)
{
 struct qeth_card *VAR_1 = FUNC_0(&((struct ccwgroup_device *)
  FUNC_0(&VAR_0->dev))->dev);
 return VAR_1;
}
