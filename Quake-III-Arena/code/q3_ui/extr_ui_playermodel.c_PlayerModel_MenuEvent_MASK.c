
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int modelpage; int numpages; } ;





 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_3( void* VAR_2, int VAR_3 )
{
 if (VAR_3 != VAR_0)
  return;

 switch (((menucommon_s*)VAR_2)->id)
 {
  case 128:
   if (VAR_1.modelpage > 0)
   {
    VAR_1.modelpage--;
    FUNC_1();
   }
   break;

  case 129:
   if (VAR_1.modelpage < VAR_1.numpages-1)
   {
    VAR_1.modelpage++;
    FUNC_1();
   }
   break;

  case 130:
   FUNC_0();
   FUNC_2();
   break;
 }
}
