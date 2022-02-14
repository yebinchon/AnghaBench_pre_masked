
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(drm_radeon_private_t * VAR_3,
      struct drm_clip_rect * VAR_4)
{
 VAR_2;

 FUNC_3("   box:  x1=%d y1=%d  x2=%d y2=%d\n",
    VAR_4->x1, VAR_4->y1, VAR_4->x2, VAR_4->y2);

 FUNC_1(4);
 FUNC_4(FUNC_2(VAR_0, 0));
 FUNC_4((VAR_4->y1 << 16) | VAR_4->x1);
 FUNC_4(FUNC_2(VAR_1, 0));
 FUNC_4(((VAR_4->y2 - 1) << 16) | (VAR_4->x2 - 1));
 FUNC_0();
}
