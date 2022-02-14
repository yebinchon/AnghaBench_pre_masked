
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct b43_phy_n* n; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_n {scalar_t__ hang_avoid; } ;
struct b43_c32 {int i; int q; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct b43_wldev *VAR_2,
     struct b43_c32 *VAR_3, u16 VAR_4) {
 struct b43_phy_n *VAR_5 = VAR_2->phy.n;
 u16 VAR_6;
 u32 *VAR_7;

 VAR_7 = FUNC_5(VAR_4 * sizeof(u32), VAR_1);
 if (!VAR_7) {
  FUNC_3(VAR_2->wl, "allocation for samples loading failed\n");
  return -VAR_0;
 }
 if (VAR_5->hang_avoid)
  FUNC_1(VAR_2, 1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7[VAR_6] = (VAR_3[VAR_6].i & 0x3FF << 10);
  VAR_7[VAR_6] |= VAR_3[VAR_6].q & 0x3FF;
 }
 FUNC_2(VAR_2, FUNC_0(17, 0), VAR_4, VAR_7);

 FUNC_4(VAR_7);
 if (VAR_5->hang_avoid)
  FUNC_1(VAR_2, 0);
 return 0;
}
