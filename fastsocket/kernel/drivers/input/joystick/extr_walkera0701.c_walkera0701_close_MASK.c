
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walkera_dev {int parport; } ;
struct input_dev {int dummy; } ;


 struct walkera_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct walkera_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->parport);
}
