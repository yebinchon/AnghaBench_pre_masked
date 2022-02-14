
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_3, VAR_0, VAR_1,
   (VAR_4 & 0x0000FFFF));
 FUNC_0(VAR_3, VAR_0, VAR_2,
   (VAR_4 & 0xFFFF0000) >> 16);
}
