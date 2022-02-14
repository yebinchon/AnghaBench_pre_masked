
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keycode; } ;
struct TYPE_4__ {TYPE_1__ xkey; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int VAR_27 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_28 ;
 TYPE_2__ VAR_29 ;

int FUNC_1(void)
{

    int VAR_30;

    switch(VAR_30 = FUNC_0(VAR_28, VAR_29.xkey.keycode, 0))
    {
      case 139: VAR_30 = VAR_17; break;
      case 134: VAR_30 = VAR_22; break;
      case 155: VAR_30 = VAR_1; break;
      case 130: VAR_30 = VAR_25; break;
      case 154: VAR_30 = VAR_4; break;
      case 135: VAR_30 = VAR_2; break;
      case 131: VAR_30 = VAR_24; break;
      case 153: VAR_30 = VAR_5; break;
      case 149: VAR_30 = VAR_9; break;
      case 148: VAR_30 = VAR_10; break;
      case 147: VAR_30 = VAR_11; break;
      case 146: VAR_30 = VAR_12; break;
      case 145: VAR_30 = VAR_13; break;
      case 144: VAR_30 = VAR_14; break;
      case 143: VAR_30 = VAR_15; break;
      case 142: VAR_30 = VAR_16; break;
      case 152: VAR_30 = VAR_6; break;
      case 151: VAR_30 = VAR_7; break;
      case 150: VAR_30 = VAR_8; break;

      case 159:
      case 156: VAR_30 = VAR_0; break;

      case 136: VAR_30 = VAR_19; break;

      case 141:
      case 129: VAR_30 = VAR_3; break;

      case 140:
      case 128: VAR_30 = VAR_18; break;

      case 133:
      case 132:
 VAR_30 = VAR_23;
 break;

      case 158:
      case 157:
 VAR_30 = VAR_21;
 break;

      case 161:
      case 138:
      case 160:
      case 137:
 VAR_30 = VAR_20;
 break;

      default:
 if (VAR_30 >= VAR_27 && VAR_30 <= VAR_26)
     VAR_30 = VAR_30 - VAR_27 + ' ';
 if (VAR_30 >= 'A' && VAR_30 <= 'Z')
     VAR_30 = VAR_30 - 'A' + 'a';
 break;
    }

    return VAR_30;

}
