
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int,int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0x439);
 VAR_2 = VAR_2 & 0xc7f;
 VAR_2 = VAR_2 | (VAR_1 << 7);
 FUNC_0(VAR_0, 0x439, ~0xfff, VAR_2);
}
