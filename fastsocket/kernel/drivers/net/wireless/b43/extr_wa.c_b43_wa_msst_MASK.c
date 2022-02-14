
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {scalar_t__ type; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int const) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_6->phy;
 int VAR_8;
 const u16 *VAR_9;

 if (VAR_7->type == VAR_1) {
  VAR_9 = VAR_4;
 } else if (VAR_7->type == VAR_2) {
  VAR_9 = VAR_5;
 } else {
  FUNC_0(1);
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_1(VAR_6, VAR_0,
     VAR_8, VAR_9[VAR_8]);
 }
}
