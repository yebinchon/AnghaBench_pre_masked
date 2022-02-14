
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* agp_buffer_map; TYPE_3__* dev_private; } ;
struct drm_buf {int bus_address; int offset; int pending; scalar_t__ used; int idx; TYPE_4__* dev_private; } ;
struct TYPE_7__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_r128_private_t ;
struct TYPE_8__ {int dispatched; int age; scalar_t__ discard; } ;
typedef TYPE_4__ drm_r128_buf_priv_t ;
struct TYPE_6__ {int last_dispatch; } ;
struct TYPE_5__ {scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_4,
           struct drm_buf *VAR_5, int VAR_6, int VAR_7)
{
 drm_r128_private_t *VAR_8 = VAR_4->dev_private;
 drm_r128_buf_priv_t *VAR_9 = VAR_5->dev_private;
 VAR_3;
 FUNC_3("indirect: buf=%d s=0x%x e=0x%x\n", VAR_5->idx, VAR_6, VAR_7);

 if (VAR_6 != VAR_7) {
  int VAR_10 = VAR_5->bus_address + VAR_6;
  int VAR_11 = (VAR_7 - VAR_6 + 3) / sizeof(u32);





  if (VAR_11 & 1) {
   u32 *VAR_12 = (u32 *)
       ((char *)VAR_4->agp_buffer_map->handle
        + VAR_5->offset + VAR_6);
   VAR_12[VAR_11++] = FUNC_5(VAR_0);
  }

  VAR_9->dispatched = 1;


  FUNC_1(3);

  FUNC_4(FUNC_2(VAR_2, 1));
  FUNC_4(VAR_10);
  FUNC_4(VAR_11);

  FUNC_0();
 }

 if (VAR_9->discard) {
  VAR_9->age = VAR_8->sarea_priv->last_dispatch;


  FUNC_1(2);

  FUNC_4(FUNC_2(VAR_1, 0));
  FUNC_4(VAR_9->age);

  FUNC_0();

  VAR_5->pending = 1;
  VAR_5->used = 0;

  VAR_9->dispatched = 0;
 }

 VAR_8->sarea_priv->last_dispatch++;
}
