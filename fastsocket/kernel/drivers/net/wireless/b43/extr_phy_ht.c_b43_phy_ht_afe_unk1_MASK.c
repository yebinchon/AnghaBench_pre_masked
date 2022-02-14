
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int member_1; int member_0; } ;
typedef TYPE_1__ u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int,int) ;






 int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,TYPE_1__ const,int) ;
 int FUNC_3 (struct b43_wldev*,TYPE_1__ const,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0)
{
 u8 VAR_1;

 static const u16 VAR_2[3][2] = {
  { 132, 133 },
  { 130, 131 },
  { 128, 129},
 };

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {

  FUNC_3(VAR_0, VAR_2[VAR_1][1], 0x4);
  FUNC_3(VAR_0, VAR_2[VAR_1][0], 0x4);
  FUNC_2(VAR_0, VAR_2[VAR_1][1], ~0x1);
  FUNC_3(VAR_0, VAR_2[VAR_1][0], 0x1);
  FUNC_1(VAR_0, FUNC_0(8, 5 + (VAR_1 * 0x10)), 0);
  FUNC_2(VAR_0, VAR_2[VAR_1][0], ~0x4);
 }
}
