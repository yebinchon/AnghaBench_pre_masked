
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_info {int dummy; } ;
struct intelfb_hwstate {void* imr; void* iir; void* ier; void* hwstam; void* fw_blc_1; void* fw_blc_0; void* mem_mode; void* instpm; void** fence; void** swf3x; void** swf1x; void** swf0x; void* add_id; void* vgacntrl; void* disp_b_stride; void* disp_a_stride; void* disp_b_base; void* disp_a_base; void* disp_b_ctrl; void* disp_a_ctrl; void* cursor_size; void** cursor_b_palette; void** cursor_a_palette; void* cursor_b_base; void* cursor_a_base; void* cursor_b_control; void* cursor_a_control; void* disp_arb; void* pipe_b_conf; void* pipe_a_conf; void* lvds; void* dvoc_srcdim; void* dvob_srcdim; void* dvoa_srcdim; void* dvoc; void* dvob; void* dvoa; void* adpa; void* bclrpat_b; void* src_size_b; void* vsync_b; void* vblank_b; void* vtotal_b; void* hsync_b; void* hblank_b; void* htotal_b; void* bclrpat_a; void* src_size_a; void* vsync_a; void* vblank_a; void* vtotal_a; void* hsync_a; void* hblank_a; void* htotal_a; void** palette_b; void** palette_a; void* fpb1; void* fpb0; void* fpa1; void* fpa0; void* dpll_b; void* dpll_a; void* vga_pd; void* vga1_divisor; void* vga0_divisor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;

int FUNC_3(struct intelfb_info *VAR_66,
       struct intelfb_hwstate *VAR_67, int VAR_68)
{
 int VAR_69;





 if (!VAR_67 || !VAR_66)
  return -1;


 VAR_67->vga0_divisor = FUNC_1(VAR_58);
 VAR_67->vga1_divisor = FUNC_1(VAR_59);
 VAR_67->vga_pd = FUNC_1(VAR_61);
 VAR_67->dpll_a = FUNC_1(VAR_12);
 VAR_67->dpll_b = FUNC_1(VAR_13);
 VAR_67->fpa0 = FUNC_1(VAR_27);
 VAR_67->fpa1 = FUNC_1(VAR_28);
 VAR_67->fpb0 = FUNC_1(VAR_29);
 VAR_67->fpb1 = FUNC_1(VAR_30);

 if (VAR_68 == 1)
  return VAR_68;
 if (VAR_68 == 2)
  return VAR_68;

 VAR_67->htotal_a = FUNC_1(VAR_37);
 VAR_67->hblank_a = FUNC_1(VAR_33);
 VAR_67->hsync_a = FUNC_1(VAR_35);
 VAR_67->vtotal_a = FUNC_1(VAR_64);
 VAR_67->vblank_a = FUNC_1(VAR_56);
 VAR_67->vsync_a = FUNC_1(VAR_62);
 VAR_67->src_size_a = FUNC_1(VAR_51);
 VAR_67->bclrpat_a = FUNC_1(VAR_2);
 VAR_67->htotal_b = FUNC_1(VAR_38);
 VAR_67->hblank_b = FUNC_1(VAR_34);
 VAR_67->hsync_b = FUNC_1(VAR_36);
 VAR_67->vtotal_b = FUNC_1(VAR_65);
 VAR_67->vblank_b = FUNC_1(VAR_57);
 VAR_67->vsync_b = FUNC_1(VAR_63);
 VAR_67->src_size_b = FUNC_1(VAR_52);
 VAR_67->bclrpat_b = FUNC_1(VAR_3);

 if (VAR_68 == 3)
  return VAR_68;

 VAR_67->adpa = FUNC_1(VAR_1);
 VAR_67->dvoa = FUNC_1(VAR_20);
 VAR_67->dvob = FUNC_1(VAR_22);
 VAR_67->dvoc = FUNC_1(VAR_24);
 VAR_67->dvoa_srcdim = FUNC_1(VAR_21);
 VAR_67->dvob_srcdim = FUNC_1(VAR_23);
 VAR_67->dvoc_srcdim = FUNC_1(VAR_25);
 VAR_67->lvds = FUNC_1(VAR_44);

 if (VAR_68 == 4)
  return VAR_68;

 VAR_67->pipe_a_conf = FUNC_1(VAR_49);
 VAR_67->pipe_b_conf = FUNC_1(VAR_50);
 VAR_67->disp_arb = FUNC_1(VAR_11);

 if (VAR_68 == 5)
  return VAR_68;

 VAR_67->cursor_a_control = FUNC_1(VAR_5);
 VAR_67->cursor_b_control = FUNC_1(VAR_8);
 VAR_67->cursor_a_base = FUNC_1(VAR_4);
 VAR_67->cursor_b_base = FUNC_1(VAR_7);

 if (VAR_68 == 6)
  return VAR_68;

 for (VAR_69 = 0; VAR_69 < 4; VAR_69++) {
  VAR_67->cursor_a_palette[VAR_69] = FUNC_1(VAR_6 + (VAR_69 << 2));
  VAR_67->cursor_b_palette[VAR_69] = FUNC_1(VAR_9 + (VAR_69 << 2));
 }

 if (VAR_68 == 7)
  return VAR_68;

 VAR_67->cursor_size = FUNC_1(VAR_10);

 if (VAR_68 == 8)
  return VAR_68;

 VAR_67->disp_a_ctrl = FUNC_1(VAR_15);
 VAR_67->disp_b_ctrl = FUNC_1(VAR_18);
 VAR_67->disp_a_base = FUNC_1(VAR_14);
 VAR_67->disp_b_base = FUNC_1(VAR_17);
 VAR_67->disp_a_stride = FUNC_1(VAR_16);
 VAR_67->disp_b_stride = FUNC_1(VAR_19);

 if (VAR_68 == 9)
  return VAR_68;

 VAR_67->vgacntrl = FUNC_1(VAR_60);

 if (VAR_68 == 10)
  return VAR_68;

 VAR_67->add_id = FUNC_1(VAR_0);

 if (VAR_68 == 11)
  return VAR_68;

 for (VAR_69 = 0; VAR_69 < 7; VAR_69++) {
  VAR_67->swf0x[VAR_69] = FUNC_1(VAR_53 + (VAR_69 << 2));
  VAR_67->swf1x[VAR_69] = FUNC_1(VAR_54 + (VAR_69 << 2));
  if (VAR_69 < 3)
   VAR_67->swf3x[VAR_69] = FUNC_1(VAR_55 + (VAR_69 << 2));
 }

 for (VAR_69 = 0; VAR_69 < 8; VAR_69++)
  VAR_67->fence[VAR_69] = FUNC_1(VAR_26 + (VAR_69 << 2));

 VAR_67->instpm = FUNC_1(VAR_43);
 VAR_67->mem_mode = FUNC_1(VAR_45);
 VAR_67->fw_blc_0 = FUNC_1(VAR_31);
 VAR_67->fw_blc_1 = FUNC_1(VAR_32);

 VAR_67->hwstam = FUNC_2(VAR_39);
 VAR_67->ier = FUNC_2(VAR_40);
 VAR_67->iir = FUNC_2(VAR_41);
 VAR_67->imr = FUNC_2(VAR_42);

 return 0;
}
