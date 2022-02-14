
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 () ;

void FUNC_5(struct b43legacy_wldev *VAR_3,
      u16 VAR_4, u16 VAR_5,
      u32 VAR_6)
{
 if (VAR_4 == VAR_2) {
  FUNC_0((VAR_5 & 0x0001) != 0);
  if (VAR_5 & 0x0003) {

   FUNC_1(VAR_3, VAR_4, VAR_5 >> 2);
   FUNC_4();
   FUNC_2(VAR_3,
       VAR_1,
       (VAR_6 >> 16) & 0xffff);
   FUNC_4();
   FUNC_1(VAR_3, VAR_4,
         (VAR_5 >> 2) + 1);
   FUNC_4();
   FUNC_2(VAR_3, VAR_0,
       VAR_6 & 0xffff);
   return;
  }
  VAR_5 >>= 2;
 }
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_4();
 FUNC_3(VAR_3, VAR_0, VAR_6);
}
