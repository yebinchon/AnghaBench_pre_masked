
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isar_ch {int conmsg; TYPE_1__* is; } ;
struct TYPE_2__ {int* buf; int name; int Flags; } ;


 int VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct isar_ch *VAR_3) {
 u8 VAR_4 = VAR_3->is->buf[0];
 u8 VAR_5;

 if (!FUNC_3(VAR_0, &VAR_3->is->Flags))
  return;
 if (VAR_4 > 14) {
  FUNC_1("%s: wrong pstrsp ril=%d\n", VAR_3->is->name, VAR_4);
  VAR_4 = 15;
 }
 switch (VAR_3->is->buf[1]) {
 case 0:
  VAR_5 = 0;
  break;
 case 0x20:
  VAR_5 = 2;
  break;
 case 0x40:
  VAR_5 = 3;
  break;
 case 0x41:
  VAR_5 = 4;
  break;
 case 0x51:
  VAR_5 = 5;
  break;
 case 0x61:
  VAR_5 = 6;
  break;
 case 0x71:
  VAR_5 = 7;
  break;
 case 0x82:
  VAR_5 = 8;
  break;
 case 0x92:
  VAR_5 = 9;
  break;
 case 0xa2:
  VAR_5 = 10;
  break;
 default:
  VAR_5 = 1;
  break;
 }
 FUNC_2(VAR_3->conmsg, "%s %s", VAR_1[VAR_4], VAR_2[VAR_5]);
 FUNC_0("%s: pump strsp %s\n", VAR_3->is->name, VAR_3->conmsg);
}
