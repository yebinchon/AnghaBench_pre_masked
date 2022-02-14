
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* input; } ;
struct TYPE_5__ {void** system; } ;
struct TYPE_4__ {int padtype; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 void* VAR_2 ;
 void* VAR_3 ;

 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(void)
{
   unsigned VAR_7;

   switch (VAR_6)
   {
      case 129:
      case 130:
         for(VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
         {
            VAR_4.input[VAR_7].padtype = VAR_0;
         }
         VAR_5.system[0] = VAR_2;
         VAR_5.system[1] = VAR_2;
         break;
      case 131:
      case 128:
         VAR_5.system[0] = VAR_3;
         VAR_5.system[1] = VAR_3;
         break;
      default:
         break;
   }
}
