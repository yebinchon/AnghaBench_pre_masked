
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct symbol {int type; TYPE_1__ curr; } ;




 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct symbol*) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0);
 switch (VAR_0->type) {
 case 128:
  VAR_1 = 10;
  break;
 case 129:
  VAR_1 = 16;
  break;
 default:
  break;
 }
 return FUNC_0(VAR_0->curr.val, ((void*)0), VAR_1);
}
