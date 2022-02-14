
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hw_breakpoint {int dummy; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(void)
{
 int VAR_5;

 FUNC_0(VAR_4, 0, sizeof(struct hw_breakpoint)*VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4[VAR_5].type = VAR_3;
 for (; VAR_5 < VAR_1; VAR_5++)
  VAR_4[VAR_5].type = VAR_2;
}
