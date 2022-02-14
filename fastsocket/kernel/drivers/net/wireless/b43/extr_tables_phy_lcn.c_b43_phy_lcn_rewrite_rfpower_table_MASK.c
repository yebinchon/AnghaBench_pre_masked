
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_0)
{
 int VAR_1;
 u32 VAR_2;
 for (VAR_1 = 0; VAR_1 < 128; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, FUNC_0(0x7, 0x240 + VAR_1));
  FUNC_2(VAR_0, FUNC_0(0x7, 0x240 + VAR_1), VAR_2);
 }
}
