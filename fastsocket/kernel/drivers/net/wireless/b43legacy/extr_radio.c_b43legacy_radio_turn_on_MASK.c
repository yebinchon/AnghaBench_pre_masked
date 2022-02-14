
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int valid; int rfover; int rfoverval; } ;
struct b43legacy_phy {int radio_on; int type; int channel; TYPE_1__ radio_off_context; int gmode; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 () ;

void FUNC_5(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_3->phy;
 int VAR_5;
 u8 VAR_6;

 FUNC_4();

 if (VAR_4->radio_on)
  return;

 switch (VAR_4->type) {
 case 129:
 case 128:
  FUNC_2(VAR_3, 0x0015, 0x8000);
  FUNC_2(VAR_3, 0x0015, 0xCC00);
  FUNC_2(VAR_3, 0x0015,
        (VAR_4->gmode ? 0x00C0 : 0x0000));
  if (VAR_4->radio_off_context.valid) {

   FUNC_2(VAR_3, VAR_0,
         VAR_4->radio_off_context.rfover);
   FUNC_2(VAR_3, VAR_1,
         VAR_4->radio_off_context.rfoverval);
   VAR_4->radio_off_context.valid = 0;
  }
  VAR_6 = VAR_4->channel;
  VAR_5 = FUNC_3(VAR_3,
     VAR_2, 1);
  VAR_5 |= FUNC_3(VAR_3, VAR_6, 0);
  FUNC_1(VAR_5);
  break;
 default:
  FUNC_0(1);
 }
 VAR_4->radio_on = 1;
}
