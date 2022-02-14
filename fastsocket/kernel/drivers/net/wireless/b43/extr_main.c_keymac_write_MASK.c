
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_3, u8 VAR_4, const u8 *VAR_5)
{
 u32 VAR_6[2] = { 0, 0, };
 u8 VAR_7 = VAR_0 * 2;

 if (FUNC_1(VAR_3))
  VAR_7 = VAR_0;

 FUNC_0(VAR_4 < VAR_7);





 VAR_4 -= VAR_7;
 FUNC_0(VAR_4 >= VAR_1);

 if (VAR_5) {
  VAR_6[0] = VAR_5[0];
  VAR_6[0] |= ((u32) (VAR_5[1]) << 8);
  VAR_6[0] |= ((u32) (VAR_5[2]) << 16);
  VAR_6[0] |= ((u32) (VAR_5[3]) << 24);
  VAR_6[1] = VAR_5[4];
  VAR_6[1] |= ((u32) (VAR_5[5]) << 8);
 }


 FUNC_3(VAR_3, VAR_2,
   (VAR_4 * 2) + 0, VAR_6[0]);
 FUNC_2(VAR_3, VAR_2,
   (VAR_4 * 2) + 1, VAR_6[1]);
}
