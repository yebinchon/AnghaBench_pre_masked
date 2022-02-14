
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43_wldev*,int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int ,scalar_t__,int) ;

int FUNC_3(struct b43_wldev *VAR_6, u16 VAR_7)
{
 const bool VAR_8 = (VAR_7 != VAR_3);
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_6, VAR_1, VAR_7);
 VAR_9 = VAR_14 & 0xFF;
 VAR_10 = (VAR_14 >> 8) & 0xFF;
 VAR_11 = (VAR_14 >> 16) & 0xFF;
 VAR_12 = (VAR_14 >> 24) & 0xFF;
 if (VAR_9 == 0 || VAR_9 == VAR_4 ||
     VAR_10 == 0 || VAR_10 == VAR_4 ||
     VAR_11 == 0 || VAR_11 == VAR_4 ||
     VAR_12 == 0 || VAR_12 == VAR_4)
  return -VAR_5;

 VAR_14 = VAR_4 | (VAR_4 << 8) |
       (VAR_4 << 16) | (VAR_4 << 24);
 FUNC_2(VAR_6, VAR_1, VAR_7, VAR_14);

 if (VAR_8) {
  VAR_9 = (VAR_9 + 32) & 0x3F;
  VAR_10 = (VAR_10 + 32) & 0x3F;
  VAR_11 = (VAR_11 + 32) & 0x3F;
  VAR_12 = (VAR_12 + 32) & 0x3F;
 }


 VAR_13 = (VAR_9 + VAR_10 + VAR_11 + VAR_12 + 2) / 4;
 if (VAR_8) {

  if (FUNC_0(VAR_6, VAR_1, VAR_2)
      & VAR_0)
   VAR_13 = (VAR_13 >= 13) ? (VAR_13 - 13) : 0;
 }

 return VAR_13;
}
