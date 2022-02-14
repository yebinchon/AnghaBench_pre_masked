
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* agp_buffer_map; TYPE_3__* dev_private; } ;
struct drm_buf {int offset; int pending; TYPE_4__* dev_private; } ;
struct TYPE_8__ {int vc_format; int dirty; int nbox; int last_dispatch; int * boxes; } ;
typedef TYPE_2__ drm_r128_sarea_t ;
struct TYPE_9__ {int cce_buffers_offset; TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_r128_private_t ;
struct TYPE_10__ {int prim; int dispatched; int age; scalar_t__ discard; } ;
typedef TYPE_4__ drm_r128_buf_priv_t ;
struct TYPE_7__ {int offset; scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int,int,int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_device*,struct drm_buf*,int,int) ;
 int FUNC_8 (TYPE_3__*,int *,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void FUNC_11(struct drm_device *VAR_6,
          struct drm_buf *VAR_7,
          int VAR_8, int VAR_9, int VAR_10)
{
 drm_r128_private_t *VAR_11 = VAR_6->dev_private;
 drm_r128_buf_priv_t *VAR_12 = VAR_7->dev_private;
 drm_r128_sarea_t *VAR_13 = VAR_11->sarea_priv;
 int VAR_14 = VAR_13->vc_format;
 int VAR_15 = VAR_6->agp_buffer_map->offset - VAR_11->cce_buffers_offset;
 int VAR_16 = VAR_12->prim;
 u32 *VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 VAR_5;
 FUNC_4("indices: s=%d e=%d c=%d\n", VAR_8, VAR_9, VAR_10);

 if (0)
  FUNC_10("dispatch_indices", VAR_13->dirty);

 if (VAR_8 != VAR_9) {
  VAR_12->dispatched = 1;

  if (VAR_13->dirty & ~VAR_4)
   FUNC_9(VAR_11);

  VAR_18 = (VAR_9 - VAR_8 + 3) / sizeof(u32);

  VAR_17 = (u32 *) ((char *)VAR_6->agp_buffer_map->handle
    + VAR_7->offset + VAR_8);

  VAR_17[0] = FUNC_6(FUNC_3(VAR_0,
        VAR_18 - 2));

  VAR_17[1] = FUNC_6(VAR_15);
  VAR_17[2] = FUNC_6(VAR_3);
  VAR_17[3] = FUNC_6(VAR_14);
  VAR_17[4] = FUNC_6((VAR_16 | VAR_1 |
           (VAR_10 << 16)));

  if (VAR_10 & 0x1) {



   VAR_17[VAR_18 - 1] &= 0xffff0000;

  }

  do {

   if (VAR_19 < VAR_13->nbox) {
    FUNC_8(VAR_11,
           &VAR_13->boxes[VAR_19],
           VAR_13->nbox - VAR_19);
   }

   FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9);

   VAR_19 += 3;
  } while (VAR_19 < VAR_13->nbox);
 }

 if (VAR_12->discard) {
  VAR_12->age = VAR_11->sarea_priv->last_dispatch;


  FUNC_1(2);

  FUNC_5(FUNC_2(VAR_2, 0));
  FUNC_5(VAR_12->age);

  FUNC_0();

  VAR_7->pending = 1;

  VAR_12->dispatched = 0;
 }

 VAR_11->sarea_priv->last_dispatch++;

 VAR_13->dirty &= ~VAR_4;
 VAR_13->nbox = 0;
}
