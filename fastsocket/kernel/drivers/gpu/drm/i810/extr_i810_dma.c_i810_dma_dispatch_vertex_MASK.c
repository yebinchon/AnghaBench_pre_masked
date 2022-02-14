
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct drm_device {TYPE_1__* agp; TYPE_3__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
struct drm_buf {scalar_t__ bus_address; TYPE_4__* dev_private; } ;
struct TYPE_6__ {int nbox; unsigned int vertex_prim; scalar_t__ dirty; struct drm_clip_rect* boxes; } ;
typedef TYPE_2__ drm_i810_sarea_t ;
struct TYPE_7__ {int counter; TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_i810_private_t ;
struct TYPE_8__ {scalar_t__ currently_mapped; int my_use_idx; int in_use; scalar_t__ kernel_virtual; } ;
typedef TYPE_4__ drm_i810_buf_priv_t ;
struct TYPE_5__ {unsigned long base; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_buf*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_16,
         struct drm_buf *VAR_17, int VAR_18, int VAR_19)
{
 drm_i810_private_t *VAR_20 = VAR_16->dev_private;
 drm_i810_buf_priv_t *VAR_21 = VAR_17->dev_private;
 drm_i810_sarea_t *VAR_22 = VAR_20->sarea_priv;
 struct drm_clip_rect *VAR_23 = VAR_22->boxes;
 int VAR_24 = VAR_22->nbox;
 unsigned long VAR_25 = (unsigned long)VAR_17->bus_address;
 unsigned long VAR_26 = VAR_25 - VAR_16->agp->base;
 int VAR_27 = 0;
 VAR_13;

 FUNC_5(VAR_16);

 if (VAR_24 > VAR_11)
  VAR_24 = VAR_11;

 if (VAR_19 > 4 * 1024)
  VAR_19 = 0;

 if (VAR_22->dirty)
  FUNC_4(VAR_16);

 if (VAR_21->currently_mapped == VAR_10) {
  unsigned int VAR_28 = (VAR_22->vertex_prim & VAR_12);

  *(u32 *) VAR_21->kernel_virtual =
      ((VAR_4 | VAR_28 | ((VAR_19 / 4) - 2)));

  if (VAR_19 & 4) {
   *(u32 *) ((char *) VAR_21->kernel_virtual + VAR_19) = 0;
   VAR_19 += 4;
  }

  FUNC_6(VAR_17);
 }

 if (VAR_19) {
  do {
   if (VAR_27 < VAR_24) {
    FUNC_1(4);
    FUNC_2(VAR_5 | VAR_15 |
      VAR_14);
    FUNC_2(VAR_6);
    FUNC_2(VAR_23[VAR_27].x1 | (VAR_23[VAR_27].y1 << 16));
    FUNC_2((VAR_23[VAR_27].x2 -
       1) | ((VAR_23[VAR_27].y2 - 1) << 16));
    FUNC_0();
   }

   FUNC_1(4);
   FUNC_2(VAR_1);
   FUNC_2(VAR_26 | VAR_0);
   FUNC_2(VAR_26 + VAR_19 - 4);
   FUNC_2(0);
   FUNC_0();

  } while (++VAR_27 < VAR_24);
 }

 if (VAR_18) {
  VAR_20->counter++;

  (void)FUNC_3(VAR_21->in_use, VAR_7,
         VAR_9);

  FUNC_1(8);
  FUNC_2(VAR_3);
  FUNC_2(20);
  FUNC_2(VAR_20->counter);
  FUNC_2(VAR_3);
  FUNC_2(VAR_21->my_use_idx);
  FUNC_2(VAR_8);
  FUNC_2(VAR_2);
  FUNC_2(0);
  FUNC_0();
 }
}
