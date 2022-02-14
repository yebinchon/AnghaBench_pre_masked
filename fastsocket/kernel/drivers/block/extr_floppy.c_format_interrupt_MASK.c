
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* redo ) () ;int (* done ) (int) ;int (* error ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 switch (FUNC_0()) {
 case 1:
  VAR_0->error();
 case 2:
  break;
 case 0:
  VAR_0->done(1);
 }
 VAR_0->redo();
}
