
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int ledctl_mode1; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_7)
{
 u16 VAR_8 = (u16)VAR_7->mac.ledctl_mode1;
 u32 VAR_9, VAR_10;




 if (!(FUNC_1(VAR_6) & VAR_4)) {
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   VAR_10 = (VAR_8 >> (VAR_9 * 5)) & VAR_2;
   if ((VAR_10 & VAR_3) !=
       VAR_0)
    continue;
   if (VAR_10 & VAR_1)
    VAR_8 &= ~(VAR_1 << (VAR_9 * 5));
   else
    VAR_8 |= (VAR_1 << (VAR_9 * 5));
  }
 }

 return FUNC_0(VAR_7, VAR_5, VAR_8);
}
