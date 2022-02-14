
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_clip_rect {scalar_t__ y1; scalar_t__ y2; scalar_t__ x1; scalar_t__ x2; } ;
struct TYPE_3__ {unsigned int back_offset; unsigned int back_bd; } ;
typedef TYPE_1__ drm_savage_private_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(drm_savage_private_t * VAR_6,
    unsigned int VAR_7, const struct drm_clip_rect *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 VAR_5;

 if (VAR_7 == 0)
  return 0;

 VAR_9 = VAR_1 | VAR_2 | VAR_3 |
     VAR_4 | VAR_0;
 FUNC_0(VAR_9, 0xCC);

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  FUNC_3(6);
  FUNC_5(VAR_9);
  FUNC_5(VAR_6->back_offset);
  FUNC_5(VAR_6->back_bd);
  FUNC_5(FUNC_2(VAR_8[VAR_10].x1, VAR_8[VAR_10].y1));
  FUNC_5(FUNC_2(VAR_8[VAR_10].x1, VAR_8[VAR_10].y1));
  FUNC_5(FUNC_1(VAR_8[VAR_10].x2 - VAR_8[VAR_10].x1,
      VAR_8[VAR_10].y2 - VAR_8[VAR_10].y1));
  FUNC_4();
 }

 return 0;
}
