
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mbit; } ;
struct s6gmac {TYPE_1__ link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s6gmac *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6 + VAR_0);
 VAR_8 &= ~(VAR_5 << VAR_1);
 switch (VAR_7->link.mbit) {
 case 10:
  VAR_8 |= VAR_3 << VAR_1;
  break;
 case 100:
  VAR_8 |= VAR_4 << VAR_1;
  break;
 case 1000:
  VAR_8 |= VAR_2 << VAR_1;
  break;
 default:
  return;
 }
 FUNC_1(VAR_8, VAR_6 + VAR_0);
}
