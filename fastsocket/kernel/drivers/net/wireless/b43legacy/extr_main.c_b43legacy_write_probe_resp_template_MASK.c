
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_rate {int hw_value; } ;
struct b43legacy_wldev {TYPE_2__* wl; } ;
struct b43legacy_plcp_hdr6 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_beacon; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int * VAR_0 ;
 int * FUNC_0 (struct b43legacy_wldev*,scalar_t__*,struct ieee80211_rate*) ;
 int FUNC_1 (struct b43legacy_wldev*,int,scalar_t__,int *) ;
 int FUNC_2 (struct b43legacy_wldev*,int const*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (size_t,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43legacy_wldev *VAR_1,
      u16 VAR_2,
      u16 VAR_3,
      struct ieee80211_rate *VAR_4)
{
 const u8 *VAR_5;
 u16 VAR_6;

 VAR_6 = VAR_1->wl->current_beacon->len;
 VAR_5 = FUNC_0(VAR_1, &VAR_6, VAR_4);
 if (FUNC_5(!VAR_5))
  return;




 FUNC_1(VAR_1, 0x31A, VAR_6,
     &VAR_0[0]);
 FUNC_1(VAR_1, 0x32C, VAR_6,
     &VAR_0[1]);
 FUNC_1(VAR_1, 0x33E, VAR_6,
     &VAR_0[2]);
 FUNC_1(VAR_1, 0x350, VAR_6,
     &VAR_0[3]);

 VAR_6 = FUNC_4((size_t)VAR_6,
     0x200 - sizeof(struct b43legacy_plcp_hdr6));
 FUNC_2(VAR_1, VAR_5,
     VAR_6, VAR_2,
     VAR_3, VAR_4->hw_value);
 FUNC_3(VAR_5);
}
