
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_clip_rect {unsigned int x1; unsigned int y1; unsigned int x2; unsigned int y2; } ;
struct TYPE_10__ {int front_offset; int front_bd; int back_offset; int back_bd; int depth_offset; int depth_bd; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_9__ {int mask; int value; } ;
struct TYPE_8__ {unsigned int flags; } ;
struct TYPE_11__ {TYPE_2__ clear1; TYPE_1__ clear0; } ;
typedef TYPE_4__ drm_savage_cmd_header_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

 int VAR_6 ;



__attribute__((used)) static int FUNC_7(drm_savage_private_t * VAR_7,
     const drm_savage_cmd_header_t * VAR_8,
     const drm_savage_cmd_header_t *VAR_9,
     unsigned int VAR_10,
     const struct drm_clip_rect *VAR_11)
{
 unsigned int VAR_12 = VAR_8->clear0.flags;
 unsigned int VAR_13;
 unsigned int VAR_14, VAR_15;
 VAR_5;

 if (VAR_10 == 0)
  return 0;

 VAR_13 = VAR_1 | VAR_2 | VAR_3 |
     VAR_4 | VAR_0;
 FUNC_0(VAR_13, 0xCC);

 VAR_15 = ((VAR_12 & 128) ? 1 : 0) +
     ((VAR_12 & 130) ? 1 : 0) + ((VAR_12 & 129) ? 1 : 0);
 if (VAR_15 == 0)
  return 0;

 if (VAR_9->clear1.mask != 0xffffffff) {

  FUNC_3(2);
  FUNC_5(VAR_6, 1);
  FUNC_6(VAR_9->clear1.mask);
  FUNC_4();
 }
 for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
  unsigned int VAR_16, VAR_17, VAR_18, VAR_19;
  unsigned int VAR_20;
  VAR_16 = VAR_11[VAR_14].x1, VAR_17 = VAR_11[VAR_14].y1;
  VAR_18 = VAR_11[VAR_14].x2 - VAR_11[VAR_14].x1;
  VAR_19 = VAR_11[VAR_14].y2 - VAR_11[VAR_14].y1;
  FUNC_3(VAR_15 * 6);
  for (VAR_20 = 128; VAR_20 <= 129; VAR_20 <<= 1) {
   if (!(VAR_12 & VAR_20))
    continue;
   FUNC_6(VAR_13);
   switch (VAR_20) {
   case 128:
    FUNC_6(VAR_7->front_offset);
    FUNC_6(VAR_7->front_bd);
    break;
   case 130:
    FUNC_6(VAR_7->back_offset);
    FUNC_6(VAR_7->back_bd);
    break;
   case 129:
    FUNC_6(VAR_7->depth_offset);
    FUNC_6(VAR_7->depth_bd);
    break;
   }
   FUNC_6(VAR_9->clear1.value);
   FUNC_6(FUNC_2(VAR_16, VAR_17));
   FUNC_6(FUNC_1(VAR_18, VAR_19));
  }
  FUNC_4();
 }
 if (VAR_9->clear1.mask != 0xffffffff) {

  FUNC_3(2);
  FUNC_5(VAR_6, 1);
  FUNC_6(0xffffffff);
  FUNC_4();
 }

 return 0;
}
