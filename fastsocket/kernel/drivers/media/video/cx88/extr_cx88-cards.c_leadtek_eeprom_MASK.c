
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tuner_type; } ;
struct cx88_core {TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx88_core*,char*,int ,int) ;
 int FUNC_1 (struct cx88_core*,char*) ;

__attribute__((used)) static void FUNC_2(struct cx88_core *VAR_2, u8 *VAR_3)
{
 if (VAR_3[4] != 0x7d ||
     VAR_3[5] != 0x10 ||
     VAR_3[7] != 0x66) {
  FUNC_1(VAR_2, "Leadtek eeprom invalid.\n");
  return;
 }


 switch (VAR_3[6]) {
 case 0x13:
 case 0x21:
 case 0x31:
 case 0x37:
 case 0x3d:
  VAR_2->board.tuner_type = VAR_1;
  break;
 default:
  VAR_2->board.tuner_type = VAR_0;
  break;
 }

 FUNC_0(VAR_2, "Leadtek Winfast 2000XP Expert config: "
      "tuner=%d, eeprom[0]=0x%02x\n",
      VAR_2->board.tuner_type, VAR_3[0]);
}
