
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;
typedef enum ht_rssi_type { ____Placeholder_ht_rssi_type } ht_rssi_type ;
 int FUNC_0 (struct b43_wldev*,int const,int) ;
 int FUNC_1 (struct b43_wldev*,int const,int) ;
 int FUNC_2 (struct b43_wldev*,int const,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0, u8 VAR_1,
       enum ht_rssi_type VAR_2)
{
 static const u16 VAR_3[3][2] = {
  { 137, 136, },
  { 135, 134, },
  { 133, 132, },
 };
 static const u16 VAR_4[] = { 130, 129, 128, };
 int VAR_5;

 if (VAR_1 == 0) {
  FUNC_3(VAR_0->wl, "RSSI selection for core off not implemented yet\n");
 } else {
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {

   if ((VAR_1 == 1 && VAR_5 != 0) ||
       (VAR_1 == 2 && VAR_5 != 1) ||
       (VAR_1 == 3 && VAR_5 != 2))
    continue;

   switch (VAR_2) {
   case 131:
    FUNC_0(VAR_0, VAR_3[VAR_5][0], 0x3 << 8);
    FUNC_0(VAR_0, VAR_3[VAR_5][0], 0x3 << 10);
    FUNC_0(VAR_0, VAR_3[VAR_5][1], 0x1 << 9);
    FUNC_0(VAR_0, VAR_3[VAR_5][1], 0x1 << 10);

    FUNC_1(VAR_0, 128 | 0xbf, 0x1);
    FUNC_2(VAR_0, VAR_4[VAR_5] | 0x159,
      0x11);
    break;
   default:
    FUNC_3(VAR_0->wl, "RSSI selection for type %d not implemented yet\n",
           VAR_2);
   }
  }
 }
}
