
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parport {int dummy; } ;
struct TYPE_3__ {scalar_t__ dev_state; struct parport* pport; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 if (VAR_1[VAR_3].dev_state != 0 && VAR_1[VAR_3].pport == VAR_2)
  FUNC_0(&VAR_1[VAR_3]);
}
