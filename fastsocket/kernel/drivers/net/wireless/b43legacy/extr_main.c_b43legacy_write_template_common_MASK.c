
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_plcp_hdr6 {int dummy; } ;
struct b43legacy_plcp_hdr4 {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct b43legacy_plcp_hdr4*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_2,
         const u8 *VAR_3, u16 VAR_4,
         u16 VAR_5,
         u16 VAR_6, u8 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 struct b43legacy_plcp_hdr4 VAR_10;

 VAR_10.data = 0;
 FUNC_0(&VAR_10, VAR_4 + VAR_1, VAR_7);
 FUNC_1(VAR_2, VAR_5, FUNC_3(VAR_10.data));
 VAR_5 += sizeof(u32);



 VAR_9 = (u32)(VAR_3[0]) << 16;
 VAR_9 |= (u32)(VAR_3[1]) << 24;
 FUNC_1(VAR_2, VAR_5, VAR_9);
 VAR_5 += sizeof(u32);
 for (VAR_8 = 2; VAR_8 < VAR_4; VAR_8 += sizeof(u32)) {
  VAR_9 = (u32)(VAR_3[VAR_8 + 0]);
  if (VAR_8 + 1 < VAR_4)
   VAR_9 |= (u32)(VAR_3[VAR_8 + 1]) << 8;
  if (VAR_8 + 2 < VAR_4)
   VAR_9 |= (u32)(VAR_3[VAR_8 + 2]) << 16;
  if (VAR_8 + 3 < VAR_4)
   VAR_9 |= (u32)(VAR_3[VAR_8 + 3]) << 24;
  FUNC_1(VAR_2, VAR_5 + VAR_8 - 2, VAR_9);
 }
 FUNC_2(VAR_2, VAR_0, VAR_6,
         VAR_4 + sizeof(struct b43legacy_plcp_hdr6));
}
