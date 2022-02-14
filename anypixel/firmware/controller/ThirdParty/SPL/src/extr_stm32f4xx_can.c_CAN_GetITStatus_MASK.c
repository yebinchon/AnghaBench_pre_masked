
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int IER; int MSR; int ESR; int RF1R; int RF0R; int TSR; } ;
typedef int ITStatus ;
typedef TYPE_1__ CAN_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (int ) ;

ITStatus FUNC_4(CAN_TypeDef* VAR_17, uint32_t VAR_18)
{
  ITStatus VAR_19 = VAR_16;

  FUNC_3(FUNC_1(VAR_17));
  FUNC_3(FUNC_2(VAR_18));


 if((VAR_17->IER & VAR_18) != VAR_16)
 {

    switch (VAR_18)
    {
      case 129:

        VAR_19 = FUNC_0(VAR_17->TSR, VAR_13|VAR_14|VAR_15);
        break;
      case 135:

        VAR_19 = FUNC_0(VAR_17->RF0R, VAR_7);
        break;
      case 137:

        VAR_19 = FUNC_0(VAR_17->RF0R, VAR_9);
        break;
      case 133:

        VAR_19 = FUNC_0(VAR_17->RF0R, VAR_8);
        break;
      case 134:

        VAR_19 = FUNC_0(VAR_17->RF1R, VAR_10);
        break;
      case 136:

        VAR_19 = FUNC_0(VAR_17->RF1R, VAR_12);
        break;
      case 132:

        VAR_19 = FUNC_0(VAR_17->RF1R, VAR_11);
        break;
      case 128:

        VAR_19 = FUNC_0(VAR_17->MSR, VAR_6);
        break;
      case 130:

        VAR_19 = FUNC_0(VAR_17->MSR, VAR_5);
        break;
      case 138:

        VAR_19 = FUNC_0(VAR_17->ESR, VAR_2);
        break;
      case 140:

        VAR_19 = FUNC_0(VAR_17->ESR, VAR_1);
        break;
      case 141:

        VAR_19 = FUNC_0(VAR_17->ESR, VAR_0);
        break;
      case 131:

        VAR_19 = FUNC_0(VAR_17->ESR, VAR_3);
        break;
      case 139:

        VAR_19 = FUNC_0(VAR_17->MSR, VAR_4);
        break;
      default:

        VAR_19 = VAR_16;
        break;
    }
  }
  else
  {

    VAR_19 = VAR_16;
  }


  return VAR_19;
}
