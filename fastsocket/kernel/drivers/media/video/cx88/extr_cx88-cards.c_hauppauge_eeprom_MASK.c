
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tveeprom {int model; scalar_t__ has_radio; int tuner_formats; int tuner_type; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ radio; int tuner_type; } ;
struct cx88_core {TYPE_2__ board; int tuner_formats; int i2c_client; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct cx88_core*,char*,int) ;
 int FUNC_2 (int *,struct tveeprom*,int *) ;
 int FUNC_3 (struct cx88_core*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct cx88_core *VAR_2, u8 *VAR_3)
{
 struct tveeprom VAR_4;

 FUNC_2(&VAR_2->i2c_client, &VAR_4, VAR_3);
 VAR_2->board.tuner_type = VAR_4.tuner_type;
 VAR_2->tuner_formats = VAR_4.tuner_formats;
 VAR_2->board.radio.type = VAR_4.has_radio ? VAR_0 : 0;


 switch (VAR_4.model)
 {
 case 14009:
 case 14019:
 case 14029:
 case 14109:
 case 14129:
 case 14559:
 case 14569:
 case 14659:
 case 14669:
 case 28552:
 case 34519:
 case 69009:

 case 69100:
 case 69500:
 case 69559:

 case 69569:
 case 90002:
 case 92001:
 case 92002:
 case 90003:
 case 90500:
 case 90501:
 case 92000:
 case 92900:
 case 94009:
 case 94501:
 case 96009:
 case 96019:
 case 96559:
 case 96569:
 case 96659:
 case 98559:

  break;
 case 128:
  FUNC_0(VAR_1, 0x008989FF);
  break;
 default:
  FUNC_3(VAR_2, "warning: unknown hauppauge model #%d\n",
       VAR_4.model);
  break;
 }

 FUNC_1(VAR_2, "hauppauge eeprom: model=%d\n", VAR_4.model);
}
