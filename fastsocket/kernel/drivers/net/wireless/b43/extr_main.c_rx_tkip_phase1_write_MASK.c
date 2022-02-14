
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_6, u8 VAR_7, u32 VAR_8,
  u16 *VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11;
 u8 VAR_12 = VAR_1 * 2;

 if (!VAR_5)
  return;

 if (FUNC_2(VAR_6))
  VAR_12 = VAR_1;

 FUNC_0(VAR_7 < VAR_12);





 VAR_7 -= VAR_12;
 FUNC_0(VAR_7 >= VAR_2);

 if (FUNC_1(VAR_6, VAR_0)) {
  FUNC_4(VAR_6->wl, "rx_tkip_phase1_write : idx 0x%x, iv32 0x%x\n",
    VAR_7, VAR_8);
 }

 VAR_11 = VAR_4 + VAR_7 * (10 + 4);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10 += 2) {
  FUNC_3(VAR_6, VAR_3, VAR_11 + VAR_10,
    VAR_9 ? VAR_9[VAR_10 / 2] : 0);
 }
 FUNC_3(VAR_6, VAR_3, VAR_11 + VAR_10, VAR_8);
 FUNC_3(VAR_6, VAR_3, VAR_11 + VAR_10 + 2, VAR_8 >> 16);
}
