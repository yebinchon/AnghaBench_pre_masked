
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct b43_wldev {TYPE_1__* wl; } ;
struct TYPE_2__ {scalar_t__* mac_addr; scalar_t__* bssid; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct b43_wldev*,int ,scalar_t__ const*) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_2)
{
 const u8 *VAR_3;
 const u8 *VAR_4;
 u8 VAR_5[VAR_1 * 2];
 int VAR_6;
 u32 VAR_7;

 VAR_4 = VAR_2->wl->bssid;
 VAR_3 = VAR_2->wl->mac_addr;

 FUNC_1(VAR_2, VAR_0, VAR_4);

 FUNC_3(VAR_5, VAR_3, VAR_1);
 FUNC_3(VAR_5 + VAR_1, VAR_4, VAR_1);


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6 += sizeof(u32)) {
  VAR_7 = (u32) (VAR_5[VAR_6 + 0]);
  VAR_7 |= (u32) (VAR_5[VAR_6 + 1]) << 8;
  VAR_7 |= (u32) (VAR_5[VAR_6 + 2]) << 16;
  VAR_7 |= (u32) (VAR_5[VAR_6 + 3]) << 24;
  FUNC_2(VAR_2, 0x20 + VAR_6, VAR_7);
 }
}
