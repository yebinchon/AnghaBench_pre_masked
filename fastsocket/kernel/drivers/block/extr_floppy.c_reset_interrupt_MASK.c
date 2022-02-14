
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reset; } ;
struct TYPE_3__ {int (* redo ) () ;int (* error ) () ;} ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int (*) ()) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_0("reset interrupt:");
 FUNC_2();
 if (VAR_0->reset) {
  FUNC_1("reset set in interrupt, calling %p\n", VAR_1->error);
  VAR_1->error();
 }
 VAR_1->redo();
}
