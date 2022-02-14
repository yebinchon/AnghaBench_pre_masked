
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_10)
{
 struct b43_phy *VAR_11 = &VAR_10->phy;
 int VAR_12;

 if (VAR_11->type == VAR_1) {
  if (VAR_11->rev == 2)
   for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    FUNC_0(VAR_10, VAR_0, VAR_12, VAR_6[VAR_12]);
  else
   for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
    FUNC_0(VAR_10, VAR_0, VAR_12, VAR_7[VAR_12]);
 } else {
  if (VAR_11->rev == 1)
   for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
    FUNC_0(VAR_10, VAR_0, VAR_12, VAR_8[VAR_12]);
  else
   for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
    FUNC_0(VAR_10, VAR_0, VAR_12, VAR_9[VAR_12]);
 }
}
