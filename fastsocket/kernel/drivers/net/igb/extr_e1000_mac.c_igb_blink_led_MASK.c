
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ledctl_mode2; int ledctl_default; } ;
struct TYPE_3__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int) ;

s32 FUNC_1(struct e1000_hw *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10;

 if (VAR_8->phy.media_type == VAR_7) {

  VAR_9 = VAR_1 |
       (VAR_6 << VAR_4);
 } else {






  VAR_9 = VAR_8->mac.ledctl_mode2;
  for (VAR_10 = 0; VAR_10 < 32; VAR_10 += 8) {
   u32 VAR_11 = (VAR_8->mac.ledctl_mode2 >> VAR_10) &
       VAR_3;
   u32 VAR_12 = VAR_8->mac.ledctl_default >> VAR_10;

   if ((!(VAR_12 & VAR_2) &&
        (VAR_11 == VAR_6)) ||
       ((VAR_12 & VAR_2) &&
        (VAR_11 == VAR_5))) {
    VAR_9 &=
        ~(VAR_3 << VAR_10);
    VAR_9 |= (VAR_1 |
       VAR_6) << VAR_10;
   }
  }
 }

 FUNC_0(VAR_0, VAR_9);

 return 0;
}
