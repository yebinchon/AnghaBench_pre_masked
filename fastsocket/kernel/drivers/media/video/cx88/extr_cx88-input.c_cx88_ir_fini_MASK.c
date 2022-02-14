
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {struct cx88_IR* ir; } ;
struct cx88_IR {int dev; } ;


 int FUNC_0 (struct cx88_core*) ;
 int FUNC_1 (struct cx88_IR*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct cx88_core *VAR_0)
{
 struct cx88_IR *VAR_1 = VAR_0->ir;


 if (((void*)0) == VAR_1)
  return 0;

 FUNC_0(VAR_0);
 FUNC_2(VAR_1->dev);
 FUNC_1(VAR_1);


 VAR_0->ir = ((void*)0);
 return 0;
}
