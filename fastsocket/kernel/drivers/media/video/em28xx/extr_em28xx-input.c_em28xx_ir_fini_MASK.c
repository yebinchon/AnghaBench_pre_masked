
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_IR {int rc; } ;
struct em28xx {struct em28xx_IR* ir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct em28xx_IR*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct em28xx *VAR_0)
{
 struct em28xx_IR *VAR_1 = VAR_0->ir;


 if (!VAR_1)
  return 0;

 FUNC_0(VAR_1->rc);
 FUNC_2(VAR_1->rc);
 FUNC_1(VAR_1);


 VAR_0->ir = ((void*)0);
 return 0;
}
