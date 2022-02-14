
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {scalar_t__ bw; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_3)
{
 int VAR_4;

 if (VAR_3->bw == VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(VAR_3, 0x195 + VAR_4,
          VAR_0[4][VAR_4]);
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(VAR_3, 0x186 + VAR_4,
          VAR_0[3][VAR_4]);
 }
}
