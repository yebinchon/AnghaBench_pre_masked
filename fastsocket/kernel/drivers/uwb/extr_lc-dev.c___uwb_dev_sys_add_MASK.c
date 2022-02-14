
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device* parent; int groups; } ;
struct uwb_dev {TYPE_1__* rc; struct device dev; } ;
struct TYPE_2__ {struct uwb_dev uwb_dev; } ;


 int FUNC_0 (struct device*,struct uwb_dev*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct uwb_dev *VAR_1, struct device *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = &VAR_1->dev;


 if (&VAR_1->rc->uwb_dev != VAR_1)
  VAR_3->groups = VAR_0;
 VAR_3->parent = VAR_2;
 FUNC_0(VAR_3, VAR_1);

 return FUNC_1(VAR_3);
}
