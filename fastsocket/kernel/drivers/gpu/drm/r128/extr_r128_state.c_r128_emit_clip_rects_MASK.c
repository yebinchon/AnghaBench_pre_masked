
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_clip_rect {int x1; int x2; int y1; int y2; } ;
typedef int drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_5(drm_r128_private_t *VAR_11,
     struct drm_clip_rect *VAR_12, int VAR_13)
{
 u32 VAR_14 = 0x00000000;
 VAR_10;
 FUNC_3("\n");

 FUNC_1((VAR_13 < 3 ? VAR_13 : 3) * 5 + 2);

 if (VAR_13 >= 1) {
  FUNC_4(FUNC_2(VAR_1, 3));
  FUNC_4(VAR_12[0].x1);
  FUNC_4(VAR_12[0].x2 - 1);
  FUNC_4(VAR_12[0].y1);
  FUNC_4(VAR_12[0].y2 - 1);

  VAR_14 |= (VAR_0 | VAR_2);
 }
 if (VAR_13 >= 2) {
  FUNC_4(FUNC_2(VAR_4, 3));
  FUNC_4(VAR_12[1].x1);
  FUNC_4(VAR_12[1].x2 - 1);
  FUNC_4(VAR_12[1].y1);
  FUNC_4(VAR_12[1].y2 - 1);

  VAR_14 |= (VAR_3 | VAR_5);
 }
 if (VAR_13 >= 3) {
  FUNC_4(FUNC_2(VAR_7, 3));
  FUNC_4(VAR_12[2].x1);
  FUNC_4(VAR_12[2].x2 - 1);
  FUNC_4(VAR_12[2].y1);
  FUNC_4(VAR_12[2].y2 - 1);

  VAR_14 |= (VAR_6 | VAR_8);
 }

 FUNC_4(FUNC_2(VAR_9, 0));
 FUNC_4(VAR_14);

 FUNC_0();
}
