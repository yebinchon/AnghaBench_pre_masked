
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {scalar_t__ nphy_deaf_count; int classifier_state; int* clip_state; } ;


 int FUNC_0 (struct brcms_phy*,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int*) ;
 int FUNC_2 (struct brcms_phy*) ;

void FUNC_3(struct brcms_phy *VAR_0, bool VAR_1)
{
 u16 VAR_2[] = { 0xffff, 0xffff };

 if (VAR_1) {
  if (VAR_0->nphy_deaf_count == 0) {
   VAR_0->classifier_state =
    FUNC_0(VAR_0, 0, 0);
   FUNC_0(VAR_0, (0x7 << 0), 4);
   FUNC_1(VAR_0, 0, VAR_0->clip_state);
   FUNC_1(VAR_0, 1, VAR_2);
  }

  VAR_0->nphy_deaf_count++;

  FUNC_2(VAR_0);

 } else {
  VAR_0->nphy_deaf_count--;

  if (VAR_0->nphy_deaf_count == 0) {
   FUNC_0(VAR_0, (0x7 << 0),
      VAR_0->classifier_state);
   FUNC_1(VAR_0, 1, VAR_0->clip_state);
  }
 }
}
