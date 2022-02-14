
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evergreen_cs_track {int* cb_color_bo_offset; int* cb_color_view; int* cb_color_slice; int cb_target_mask; int cb_shader_mask; int cb_dirty; int db_depth_slice; int db_depth_view; int db_depth_size; int db_depth_control; int db_z_info; int db_z_read_offset; int db_z_write_offset; int db_s_info; int db_s_read_offset; int db_s_write_offset; int db_dirty; int htile_offset; int* vgt_strmout_bo_offset; int streamout_dirty; int sx_misc_kill_all_prims; int ** vgt_strmout_bo; scalar_t__* vgt_strmout_size; scalar_t__ htile_surface; int * htile_bo; int * db_s_write_bo; int * db_s_read_bo; int * db_z_write_bo; int * db_z_read_bo; scalar_t__* cb_color_slice_idx; scalar_t__* cb_color_pitch; scalar_t__* cb_color_info; int ** cb_color_bo; scalar_t__* cb_color_fmask_slice; scalar_t__* cb_color_cmask_slice; int ** cb_color_cmask_bo; int ** cb_color_fmask_bo; } ;



__attribute__((used)) static void FUNC_0(struct evergreen_cs_track *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  VAR_0->cb_color_fmask_bo[VAR_1] = ((void*)0);
  VAR_0->cb_color_cmask_bo[VAR_1] = ((void*)0);
  VAR_0->cb_color_cmask_slice[VAR_1] = 0;
  VAR_0->cb_color_fmask_slice[VAR_1] = 0;
 }

 for (VAR_1 = 0; VAR_1 < 12; VAR_1++) {
  VAR_0->cb_color_bo[VAR_1] = ((void*)0);
  VAR_0->cb_color_bo_offset[VAR_1] = 0xFFFFFFFF;
  VAR_0->cb_color_info[VAR_1] = 0;
  VAR_0->cb_color_view[VAR_1] = 0xFFFFFFFF;
  VAR_0->cb_color_pitch[VAR_1] = 0;
  VAR_0->cb_color_slice[VAR_1] = 0xfffffff;
  VAR_0->cb_color_slice_idx[VAR_1] = 0;
 }
 VAR_0->cb_target_mask = 0xFFFFFFFF;
 VAR_0->cb_shader_mask = 0xFFFFFFFF;
 VAR_0->cb_dirty = 1;

 VAR_0->db_depth_slice = 0xffffffff;
 VAR_0->db_depth_view = 0xFFFFC000;
 VAR_0->db_depth_size = 0xFFFFFFFF;
 VAR_0->db_depth_control = 0xFFFFFFFF;
 VAR_0->db_z_info = 0xFFFFFFFF;
 VAR_0->db_z_read_offset = 0xFFFFFFFF;
 VAR_0->db_z_write_offset = 0xFFFFFFFF;
 VAR_0->db_z_read_bo = ((void*)0);
 VAR_0->db_z_write_bo = ((void*)0);
 VAR_0->db_s_info = 0xFFFFFFFF;
 VAR_0->db_s_read_offset = 0xFFFFFFFF;
 VAR_0->db_s_write_offset = 0xFFFFFFFF;
 VAR_0->db_s_read_bo = ((void*)0);
 VAR_0->db_s_write_bo = ((void*)0);
 VAR_0->db_dirty = 1;
 VAR_0->htile_bo = ((void*)0);
 VAR_0->htile_offset = 0xFFFFFFFF;
 VAR_0->htile_surface = 0;

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  VAR_0->vgt_strmout_size[VAR_1] = 0;
  VAR_0->vgt_strmout_bo[VAR_1] = ((void*)0);
  VAR_0->vgt_strmout_bo_offset[VAR_1] = 0xFFFFFFFF;
 }
 VAR_0->streamout_dirty = 1;
 VAR_0->sx_misc_kill_all_prims = 0;
}
