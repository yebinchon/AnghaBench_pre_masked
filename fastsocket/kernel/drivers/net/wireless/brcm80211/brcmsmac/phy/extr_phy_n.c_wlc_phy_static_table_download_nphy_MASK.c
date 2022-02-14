
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct brcms_phy*,int *) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_8)
{
 uint VAR_9;

 if (FUNC_0(VAR_8->pubpi.phy_rev, 16)) {
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   FUNC_1(VAR_8,
       &VAR_1[VAR_9]);
 } else if (FUNC_0(VAR_8->pubpi.phy_rev, 7)) {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_1(VAR_8,
       &VAR_3[VAR_9]);
 } else if (FUNC_0(VAR_8->pubpi.phy_rev, 3)) {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   FUNC_1(VAR_8,
       &VAR_2[VAR_9]);
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   FUNC_1(VAR_8,
       &VAR_0[VAR_9]);
 }
}
