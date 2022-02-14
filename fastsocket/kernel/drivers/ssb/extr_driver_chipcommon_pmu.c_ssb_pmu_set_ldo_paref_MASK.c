
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_chipcommon {TYPE_1__* dev; } ;
struct ssb_bus {int chip_id; } ;
struct TYPE_2__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;

void FUNC_3(struct ssb_chipcommon *VAR_4, bool VAR_5)
{
 struct ssb_bus *VAR_6 = VAR_4->dev->bus;
 int VAR_7;

 switch (VAR_6->chip_id) {
 case 0x4312:
  VAR_7 = VAR_1;
  break;
 case 0x4328:
  VAR_7 = VAR_2;
  break;
 case 0x5354:
  VAR_7 = VAR_3;
  break;
 default:
  return;
 }

 if (VAR_5)
  FUNC_2(VAR_4, VAR_0, 1 << VAR_7);
 else
  FUNC_0(VAR_4, VAR_0, ~(1 << VAR_7));
 FUNC_1(VAR_4, VAR_0);
}
