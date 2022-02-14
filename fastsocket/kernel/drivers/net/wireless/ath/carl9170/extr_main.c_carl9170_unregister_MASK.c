
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pbc; } ;
struct ar9170 {int registered; int hw; int restart_work; TYPE_1__ wps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ar9170 *VAR_0)
{
 if (!VAR_0->registered)
  return;

 VAR_0->registered = 0;
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->restart_work);

 FUNC_5(VAR_0->hw);
}
