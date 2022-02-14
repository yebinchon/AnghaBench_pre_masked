
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int real_vram_size; } ;
struct TYPE_5__ {int set_default_state; int draw_auto; int set_scissors; int set_tex_resource; int set_vtx_resource; int set_shaders; int cp_set_surface_sync; int set_render_target; } ;
struct TYPE_6__ {int ring_size_common; int ring_size_per_loop; int max_dim; int state_offset; int state_len; int vs_offset; int ps_offset; int shader_obj; int shader_gpu_addr; TYPE_2__ primitives; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ mc; TYPE_3__ r600_blit; int dev; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (void*,int*,int) ;
 int FUNC_7 (struct radeon_device*,int,int ,int,int ,int *,int *) ;
 int FUNC_8 (int ,void**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct radeon_device*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct radeon_device *VAR_23)
{
 u32 VAR_24;
 int VAR_25, VAR_26, VAR_27;
 void *VAR_28;
 u32 VAR_29[16];
 int VAR_30 = 0;

 VAR_23->r600_blit.primitives.set_render_target = VAR_18;
 VAR_23->r600_blit.primitives.cp_set_surface_sync = VAR_9;
 VAR_23->r600_blit.primitives.set_shaders = VAR_20;
 VAR_23->r600_blit.primitives.set_vtx_resource = VAR_22;
 VAR_23->r600_blit.primitives.set_tex_resource = VAR_21;
 VAR_23->r600_blit.primitives.set_scissors = VAR_19;
 VAR_23->r600_blit.primitives.draw_auto = VAR_10;
 VAR_23->r600_blit.primitives.set_default_state = VAR_17;

 VAR_23->r600_blit.ring_size_common = 8;
 VAR_23->r600_blit.ring_size_common += 55;
 VAR_23->r600_blit.ring_size_common += 16;
 VAR_23->r600_blit.ring_size_common += 5;
 VAR_23->r600_blit.ring_size_common += 16;

 VAR_23->r600_blit.ring_size_per_loop = 74;
 if (VAR_23->family >= VAR_0)
  VAR_23->r600_blit.ring_size_per_loop += 9;

 VAR_23->r600_blit.max_dim = 16384;

 VAR_23->r600_blit.state_offset = 0;

 if (VAR_23->family < VAR_0)
  VAR_23->r600_blit.state_len = VAR_11;
 else
  VAR_23->r600_blit.state_len = VAR_3;

 VAR_27 = VAR_23->r600_blit.state_len;
 while (VAR_27 & 0xf) {
  VAR_29[VAR_30++] = FUNC_4(FUNC_3(0));
  VAR_27++;
 }

 VAR_24 = VAR_27 * 4;
 VAR_24 = FUNC_0(VAR_24, 256);

 VAR_23->r600_blit.vs_offset = VAR_24;
 if (VAR_23->family < VAR_0)
  VAR_24 += VAR_16 * 4;
 else
  VAR_24 += VAR_8 * 4;
 VAR_24 = FUNC_0(VAR_24, 256);

 VAR_23->r600_blit.ps_offset = VAR_24;
 if (VAR_23->family < VAR_0)
  VAR_24 += VAR_14 * 4;
 else
  VAR_24 += VAR_6 * 4;
 VAR_24 = FUNC_0(VAR_24, 256);


 if (!VAR_23->r600_blit.shader_obj) {
  VAR_26 = FUNC_7(VAR_23, VAR_24, VAR_1, 1,
         VAR_2,
         ((void*)0), &VAR_23->r600_blit.shader_obj);
  if (VAR_26) {
   FUNC_2("evergreen failed to allocate shader\n");
   return VAR_26;
  }

  VAR_26 = FUNC_11(VAR_23->r600_blit.shader_obj, 0);
  if (FUNC_14(VAR_26 != 0))
   return VAR_26;
  VAR_26 = FUNC_10(VAR_23->r600_blit.shader_obj, VAR_2,
      &VAR_23->r600_blit.shader_gpu_addr);
  FUNC_12(VAR_23->r600_blit.shader_obj);
  if (VAR_26) {
   FUNC_5(VAR_23->dev, "(%d) pin blit object failed\n", VAR_26);
   return VAR_26;
  }
 }

 FUNC_1("evergreen blit allocated bo %08x vs %08x ps %08x\n",
    VAR_24,
    VAR_23->r600_blit.vs_offset, VAR_23->r600_blit.ps_offset);

 VAR_26 = FUNC_11(VAR_23->r600_blit.shader_obj, 0);
 if (FUNC_14(VAR_26 != 0))
  return VAR_26;
 VAR_26 = FUNC_8(VAR_23->r600_blit.shader_obj, &VAR_28);
 if (VAR_26) {
  FUNC_2("failed to map blit object %d\n", VAR_26);
  return VAR_26;
 }

 if (VAR_23->family < VAR_0) {
  FUNC_6(VAR_28 + VAR_23->r600_blit.state_offset,
       VAR_12, VAR_23->r600_blit.state_len * 4);

  if (VAR_30)
   FUNC_6(VAR_28 + VAR_23->r600_blit.state_offset + (VAR_23->r600_blit.state_len * 4),
        VAR_29, VAR_30 * 4);
  for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++)
   *(u32 *)((unsigned long)VAR_28 + VAR_23->r600_blit.vs_offset + VAR_25 * 4) = FUNC_4(VAR_15[VAR_25]);
  for (VAR_25 = 0; VAR_25 < VAR_14; VAR_25++)
   *(u32 *)((unsigned long)VAR_28 + VAR_23->r600_blit.ps_offset + VAR_25 * 4) = FUNC_4(VAR_13[VAR_25]);
 } else {
  FUNC_6(VAR_28 + VAR_23->r600_blit.state_offset,
       VAR_4, VAR_23->r600_blit.state_len * 4);

  if (VAR_30)
   FUNC_6(VAR_28 + VAR_23->r600_blit.state_offset + (VAR_23->r600_blit.state_len * 4),
        VAR_29, VAR_30 * 4);
  for (VAR_25 = 0; VAR_25 < VAR_8; VAR_25++)
   *(u32 *)((unsigned long)VAR_28 + VAR_23->r600_blit.vs_offset + VAR_25 * 4) = FUNC_4(VAR_7[VAR_25]);
  for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
   *(u32 *)((unsigned long)VAR_28 + VAR_23->r600_blit.ps_offset + VAR_25 * 4) = FUNC_4(VAR_5[VAR_25]);
 }
 FUNC_9(VAR_23->r600_blit.shader_obj);
 FUNC_12(VAR_23->r600_blit.shader_obj);

 FUNC_13(VAR_23, VAR_23->mc.real_vram_size);
 return 0;
}
