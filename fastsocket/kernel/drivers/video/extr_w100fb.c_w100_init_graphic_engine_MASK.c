
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dp_src2_source; int dp_op; int dp_rop3; int dp_src_source; } ;
union dp_mix_u {int val; TYPE_3__ f; } ;
struct TYPE_8__ {int gmc_src_pitch_offset_cntl; int gmc_dst_pitch_offset_cntl; int gmc_src_clipping; int gmc_dst_clipping; int gmc_dst_datatype; int gmc_byte_pix_order; int gmc_clr_cmp_fcn_dis; int gmc_wr_msk_dis; int gmc_dp_op; int gmc_rop3; int gmc_dp_src_source; int gmc_src_datatype; int gmc_brush_datatype; scalar_t__ gmc_default_sel; } ;
union dp_gui_master_cntl_u {int val; TYPE_4__ f; } ;
struct TYPE_6__ {int dp_dst_datatype; int dp_byte_pix_order; int dp_src_datatype; int dp_src2_datatype; scalar_t__ dp_src2_type; int dp_brush_datatype; } ;
union dp_datatype_u {int val; TYPE_2__ f; } ;
struct TYPE_5__ {int dst_x_dir; int dst_y_dir; int src_x_dir; int src_y_dir; int dst_major_x; int src_major_x; } ;
union dp_cntl_u {int val; TYPE_1__ f; } ;
struct w100fb_par {int xres; int yres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct w100fb_par *VAR_18)
{
 union dp_gui_master_cntl_u VAR_19;
 union dp_mix_u VAR_20;
 union dp_datatype_u VAR_21;
 union dp_cntl_u VAR_22;

 FUNC_0(4);
 FUNC_1(VAR_5, VAR_17 + VAR_10);
 FUNC_1(VAR_18->xres, VAR_17 + VAR_11);
 FUNC_1(VAR_5, VAR_17 + VAR_14);
 FUNC_1(VAR_18->xres, VAR_17 + VAR_15);

 FUNC_0(3);
 FUNC_1(0, VAR_17 + VAR_13);
 FUNC_1((VAR_18->yres << 16) | VAR_18->xres, VAR_17 + VAR_12);
 FUNC_1(0x1fff1fff, VAR_17 + VAR_16);

 FUNC_0(4);
 VAR_22.val = 0;
 VAR_22.f.dst_x_dir = 1;
 VAR_22.f.dst_y_dir = 1;
 VAR_22.f.src_x_dir = 1;
 VAR_22.f.src_y_dir = 1;
 VAR_22.f.dst_major_x = 1;
 VAR_22.f.src_major_x = 1;
 FUNC_1(VAR_22.val, VAR_17 + VAR_6);

 VAR_19.val = 0;
 VAR_19.f.gmc_src_pitch_offset_cntl = 1;
 VAR_19.f.gmc_dst_pitch_offset_cntl = 1;
 VAR_19.f.gmc_src_clipping = 1;
 VAR_19.f.gmc_dst_clipping = 1;
 VAR_19.f.gmc_brush_datatype = VAR_2;
 VAR_19.f.gmc_dst_datatype = 3;
 VAR_19.f.gmc_src_datatype = VAR_4;
 VAR_19.f.gmc_byte_pix_order = 1;
 VAR_19.f.gmc_default_sel = 0;
 VAR_19.f.gmc_rop3 = VAR_3;
 VAR_19.f.gmc_dp_src_source = VAR_1;
 VAR_19.f.gmc_clr_cmp_fcn_dis = 1;
 VAR_19.f.gmc_wr_msk_dis = 1;
 VAR_19.f.gmc_dp_op = VAR_0;
 FUNC_1(VAR_19.val, VAR_17 + VAR_8);

 VAR_21.val = VAR_20.val = 0;
 VAR_21.f.dp_dst_datatype = VAR_19.f.gmc_dst_datatype;
 VAR_21.f.dp_brush_datatype = VAR_19.f.gmc_brush_datatype;
 VAR_21.f.dp_src2_type = 0;
 VAR_21.f.dp_src2_datatype = VAR_19.f.gmc_src_datatype;
 VAR_21.f.dp_src_datatype = VAR_19.f.gmc_src_datatype;
 VAR_21.f.dp_byte_pix_order = VAR_19.f.gmc_byte_pix_order;
 FUNC_1(VAR_21.val, VAR_17 + VAR_7);

 VAR_20.f.dp_src_source = VAR_19.f.gmc_dp_src_source;
 VAR_20.f.dp_src2_source = 1;
 VAR_20.f.dp_rop3 = VAR_19.f.gmc_rop3;
 VAR_20.f.dp_op = VAR_19.f.gmc_dp_op;
 FUNC_1(VAR_20.val, VAR_17 + VAR_9);
}
