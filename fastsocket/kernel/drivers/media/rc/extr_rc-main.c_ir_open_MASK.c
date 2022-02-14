
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int (* open ) (struct rc_dev*) ;} ;
struct input_dev {int dummy; } ;


 struct rc_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct rc_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct rc_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->open(VAR_1);
}
