
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {unsigned int x2; unsigned int x1; unsigned int y2; unsigned int y1; } ;
struct TYPE_3__ {int nbox; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_4__ {int pitch; int w; int h; scalar_t__ current_page; unsigned int front_offset; unsigned int back_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_i810_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_4)
{
 drm_i810_private_t *VAR_5 = VAR_4->dev_private;
 drm_i810_sarea_t *VAR_6 = VAR_5->sarea_priv;
 int VAR_7 = VAR_6->nbox;
 struct drm_clip_rect *VAR_8 = VAR_6->boxes;
 int VAR_9 = VAR_5->pitch;
 int VAR_10 = 2;
 int VAR_11;
 VAR_3;

 FUNC_2("swapbuffers\n");

 FUNC_4(VAR_4);

 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++, VAR_8++) {
  unsigned int VAR_12 = VAR_8->x2 - VAR_8->x1;
  unsigned int VAR_13 = VAR_8->y2 - VAR_8->y1;
  unsigned int VAR_14 = VAR_8->x1 * VAR_10 + VAR_8->y1 * VAR_9;
  unsigned int VAR_15 = VAR_14;

  if (VAR_8->x1 > VAR_8->x2 ||
      VAR_8->y1 > VAR_8->y2 ||
      VAR_8->x2 > VAR_5->w || VAR_8->y2 > VAR_5->h)
   continue;

  FUNC_1(6);
  FUNC_3(VAR_0 | VAR_1 | 0x4);
  FUNC_3(VAR_9 | (0xCC << 16));
  FUNC_3((VAR_13 << 16) | (VAR_12 * VAR_10));
  if (VAR_5->current_page == 0)
   FUNC_3(VAR_5->front_offset + VAR_15);
  else
   FUNC_3(VAR_5->back_offset + VAR_15);
  FUNC_3(VAR_9);
  if (VAR_5->current_page == 0)
   FUNC_3(VAR_5->back_offset + VAR_15);
  else
   FUNC_3(VAR_5->front_offset + VAR_15);
  FUNC_0();
 }
}
