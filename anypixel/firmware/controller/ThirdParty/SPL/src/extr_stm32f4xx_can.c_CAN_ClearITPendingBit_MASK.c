
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int TSR; void* MSR; void* ESR; int RF1R; int RF0R; } ;
typedef TYPE_1__ CAN_TypeDef ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 void* VAR_10 ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_11, uint32_t VAR_12)
{

  FUNC_2(FUNC_0(VAR_11));
  FUNC_2(FUNC_1(VAR_12));

  switch (VAR_12)
  {
    case 129:

      VAR_11->TSR = VAR_7|VAR_8|VAR_9;
      break;
    case 135:

      VAR_11->RF0R = VAR_4;
      break;
    case 133:

      VAR_11->RF0R = VAR_3;
      break;
    case 134:

      VAR_11->RF1R = VAR_6;
      break;
    case 132:

      VAR_11->RF1R = VAR_5;
      break;
    case 128:

      VAR_11->MSR = VAR_2;
      break;
    case 130:

      VAR_11->MSR = VAR_1;
      break;
    case 136:

      VAR_11->MSR = VAR_0;

      break;
    case 138:

      VAR_11->MSR = VAR_0;

      break;
    case 139:

      VAR_11->MSR = VAR_0;

       break;
    case 131:

      VAR_11->ESR = VAR_10;

      VAR_11->MSR = VAR_0;
      break;
    case 137:

      VAR_11->ESR = VAR_10;

      VAR_11->MSR = VAR_0;

       break;
    default:
       break;
   }
}
