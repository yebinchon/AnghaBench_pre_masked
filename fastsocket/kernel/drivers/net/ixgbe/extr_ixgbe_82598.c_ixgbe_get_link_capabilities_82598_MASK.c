
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int orig_autoc; scalar_t__ orig_link_settings_stored; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_8,
                                             ixgbe_link_speed *VAR_9,
                                             bool *VAR_10)
{
 s32 VAR_11 = 0;
 u32 VAR_12 = 0;






 if (VAR_8->mac.orig_link_settings_stored)
  VAR_12 = VAR_8->mac.orig_autoc;
 else
  VAR_12 = FUNC_0(VAR_8, VAR_0);

 switch (VAR_12 & VAR_3) {
 case 130:
  *VAR_9 = VAR_6;
  *VAR_10 = 0;
  break;

 case 132:
  *VAR_9 = VAR_5;
  *VAR_10 = 0;
  break;

 case 131:
  *VAR_9 = VAR_6;
  *VAR_10 = 1;
  break;

 case 129:
 case 128:
  *VAR_9 = VAR_7;
  if (VAR_12 & VAR_1)
   *VAR_9 |= VAR_5;
  if (VAR_12 & VAR_2)
   *VAR_9 |= VAR_6;
  *VAR_10 = 1;
  break;

 default:
  VAR_11 = VAR_4;
  break;
 }

 return VAR_11;
}
