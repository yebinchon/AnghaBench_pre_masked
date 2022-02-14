
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {scalar_t__ bw; int radio_chanspec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int ** VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_3)
{
 int VAR_4, VAR_5;
 u16 VAR_6[] = { 0x186, 0x195, 0x2c5};

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_2(VAR_3, VAR_6[VAR_5] + VAR_4,
          VAR_0[VAR_5][VAR_4]);
 }

 if (VAR_3->bw == VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_2(VAR_3, 0x186 + VAR_4,
          VAR_0[3][VAR_4]);
 } else {
  if (FUNC_1(VAR_3->radio_chanspec)) {
   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    FUNC_2(VAR_3, 0x186 + VAR_4,
     VAR_0[5][VAR_4]);
  }

  if (FUNC_0(VAR_3->radio_chanspec) == 14) {
   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    FUNC_2(VAR_3, 0x2c5 + VAR_4,
     VAR_0[6][VAR_4]);
  }
 }
}
