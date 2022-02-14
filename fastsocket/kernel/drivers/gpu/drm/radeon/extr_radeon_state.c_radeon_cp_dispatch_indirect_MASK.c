
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* agp_buffer_map; TYPE_2__* dev_private; } ;
struct drm_buf {int offset; int idx; } ;
struct TYPE_4__ {int gart_buffers_offset; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_3__ {scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct drm_device * VAR_3,
     struct drm_buf * VAR_4, int VAR_5, int VAR_6)
{
 drm_radeon_private_t *VAR_7 = VAR_3->dev_private;
 VAR_2;
 FUNC_3("buf=%d s=0x%x e=0x%x\n", VAR_4->idx, VAR_5, VAR_6);

 if (VAR_5 != VAR_6) {
  int VAR_8 = (VAR_7->gart_buffers_offset
         + VAR_4->offset + VAR_5);
  int VAR_9 = (VAR_6 - VAR_5 + 3) / sizeof(u32);





  if (VAR_9 & 1) {
   u32 *VAR_10 = (u32 *)
       ((char *)VAR_3->agp_buffer_map->handle
        + VAR_4->offset + VAR_5);
   VAR_10[VAR_9++] = VAR_1;
  }


  FUNC_1(3);

  FUNC_4(FUNC_2(VAR_0, 1));
  FUNC_4(VAR_8);
  FUNC_4(VAR_9);

  FUNC_0();
 }
}
