
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device_dma {struct drm_buf** buflist; } ;
struct drm_device {TYPE_1__* agp_buffer_map; struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {int offset; int used; scalar_t__ pending; struct drm_file* file_priv; TYPE_2__* dev_private; } ;
typedef int drm_r128_private_t ;
struct TYPE_6__ {int discard; } ;
typedef TYPE_2__ drm_r128_buf_priv_t ;
struct TYPE_7__ {int format; size_t idx; int width; int height; int pitch; int offset; int y; int x; } ;
typedef TYPE_3__ drm_r128_blit_t ;
struct TYPE_5__ {scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_device*,struct drm_buf*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_15,
      struct drm_file *VAR_16,
      drm_r128_blit_t *VAR_17)
{
 drm_r128_private_t *VAR_18 = VAR_15->dev_private;
 struct drm_device_dma *VAR_19 = VAR_15->dma;
 struct drm_buf *VAR_20;
 drm_r128_buf_priv_t *VAR_21;
 u32 *VAR_22;
 int VAR_23, VAR_24;
 VAR_14;
 FUNC_4("\n");





 switch (VAR_17->format) {
 case 133:
  VAR_23 = 0;
  break;
 case 135:
 case 131:
 case 134:
 case 128:
 case 129:
  VAR_23 = 1;
  break;
 case 132:
 case 130:
  VAR_23 = 2;
  break;
 default:
  FUNC_5("invalid blit format %d\n", VAR_17->format);
  return -VAR_1;
 }






 FUNC_1(2);

 FUNC_6(FUNC_2(VAR_11, 0));
 FUNC_6(VAR_12 | VAR_10);

 FUNC_0();



 VAR_20 = VAR_19->buflist[VAR_17->idx];
 VAR_21 = VAR_20->dev_private;

 if (VAR_20->file_priv != VAR_16) {
  FUNC_5("process %d using buffer owned by %p\n",
     VAR_0, VAR_20->file_priv);
  return -VAR_1;
 }
 if (VAR_20->pending) {
  FUNC_5("sending pending buffer %d\n", VAR_17->idx);
  return -VAR_1;
 }

 VAR_21->discard = 1;

 VAR_24 = (VAR_17->width * VAR_17->height) >> VAR_23;

 VAR_22 = (u32 *) ((char *)VAR_15->agp_buffer_map->handle + VAR_20->offset);

 VAR_22[0] = FUNC_7(FUNC_3(VAR_2, VAR_24 + 6));
 VAR_22[1] = FUNC_7((VAR_7 |
          VAR_5 |
          (VAR_17->format << 8) |
          VAR_8 |
          VAR_13 |
          VAR_3 |
          VAR_6 |
          VAR_4 | VAR_9));

 VAR_22[2] = FUNC_7((VAR_17->pitch << 21) | (VAR_17->offset >> 5));
 VAR_22[3] = FUNC_7(0xffffffff);
 VAR_22[4] = FUNC_7(0xffffffff);
 VAR_22[5] = FUNC_7((VAR_17->y << 16) | VAR_17->x);
 VAR_22[6] = FUNC_7((VAR_17->height << 16) | VAR_17->width);
 VAR_22[7] = FUNC_7(VAR_24);

 VAR_20->used = (VAR_24 + 8) * sizeof(u32);

 FUNC_8(VAR_15, VAR_20, 0, VAR_20->used);





 FUNC_1(2);

 FUNC_6(FUNC_2(VAR_11, 0));
 FUNC_6(VAR_10);

 FUNC_0();

 return 0;
}
