
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; } ;
struct TYPE_5__ {unsigned int gama_wd; scalar_t__ enable; } ;
struct TYPE_4__ {unsigned int horz_offset; unsigned int vert_offset; } ;
struct ccdc_config_params_raw {scalar_t__ data_sz; int lpf_enable; unsigned int datasft; unsigned int med_filt_thres; unsigned int mfilt1; unsigned int mfilt2; TYPE_2__ alaw; TYPE_1__ data_offset; int col_pat_field1; int col_pat_field0; int csc; int vertical_dft; int blk_comp; int blk_clamp; } ;
struct ccdc_params_raw {unsigned int vd_pol; unsigned int hd_pol; unsigned int fid_pol; unsigned int frm_fmt; unsigned int pix_fmt; unsigned int horz_flip_enable; scalar_t__ image_invert_enable; TYPE_3__ win; struct ccdc_config_params_raw config_params; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 struct ccdc_params_raw VAR_54 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,unsigned int,int) ;
 int VAR_55 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct ccdc_params_raw *VAR_56 = &VAR_54;
 struct ccdc_config_params_raw *VAR_57 =
  &VAR_54.config_params;
 unsigned int VAR_58;

 FUNC_8(VAR_55, "\nStarting ccdc_config_raw...");


 FUNC_6();
 FUNC_9(VAR_46 | VAR_4 |
      VAR_6 | VAR_5 |
      VAR_3 | VAR_30, VAR_0);





 VAR_58 = (VAR_43 | VAR_38 | VAR_11 |
  VAR_16);






 VAR_58 |= (((VAR_56->vd_pol & VAR_44) << VAR_45) |
  ((VAR_56->hd_pol & VAR_25) << VAR_26) |
  ((VAR_56->fid_pol & VAR_17) << VAR_18) |
  ((VAR_56->frm_fmt & VAR_21) << VAR_22) |
  ((VAR_56->pix_fmt & VAR_36) << VAR_37));


 if ((VAR_57->data_sz == VAR_14) ||
      VAR_57->alaw.enable)
  VAR_58 |= VAR_15;


 if (VAR_57->lpf_enable)
  VAR_58 |= (VAR_57->lpf_enable & VAR_31) <<
   VAR_32;


 VAR_58 |= (VAR_57->datasft & VAR_12) <<
  VAR_13;
 FUNC_9(VAR_58 , VAR_52);
 FUNC_8(VAR_55, "\nWriting 0x%x to MODESET...\n", VAR_58);


 FUNC_9((VAR_57->med_filt_thres) & VAR_33, VAR_51);


 VAR_58 = VAR_24 << VAR_23 |
  VAR_7;


 if (VAR_57->alaw.enable) {
  VAR_58 |= (VAR_1 |
   ((VAR_57->alaw.gama_wd &
   VAR_2) <<
   VAR_23));
 }


 VAR_58 |= ((VAR_57->mfilt1 << VAR_34) |
  (VAR_57->mfilt2 << VAR_35));

 FUNC_9(VAR_58, VAR_49);
 FUNC_8(VAR_55, "\nWriting 0x%x to GAMMAWD...\n", VAR_58);


 FUNC_7(&VAR_56->win, VAR_56->frm_fmt, 1);


 FUNC_0(&VAR_57->blk_clamp);


 FUNC_1(&VAR_57->blk_comp);


 if (FUNC_5(&VAR_57->vertical_dft) < 0)
  return -VAR_48;


 FUNC_3(&VAR_57->csc);


 FUNC_2(&VAR_57->col_pat_field0,
       &VAR_57->col_pat_field1);


 FUNC_4();

 FUNC_8(VAR_55, "\nWriting %x to COLPTN...\n", VAR_58);


 VAR_58 = (VAR_57->data_offset.horz_offset & VAR_9) <<
  VAR_8;
 VAR_58 |= (VAR_57->data_offset.vert_offset & VAR_9) <<
  VAR_10;
 FUNC_9(VAR_58, VAR_47);


 VAR_58 = (VAR_56->horz_flip_enable & VAR_27) <<
  VAR_28;


 if ((VAR_57->data_sz == VAR_14) ||
      VAR_57->alaw.enable) {
  VAR_58 |= (((VAR_56->win.width) + 31) >> 5) &
   VAR_29;


  FUNC_8(VAR_55, "\nWriting 0x%x to HSIZE...\n",
         (((VAR_56->win.width) + 31) >> 5) &
   VAR_29);
 } else {

  VAR_58 |= (((VAR_56->win.width * 2) + 31) >> 5) &
   VAR_29;

  FUNC_8(VAR_55, "\nWriting 0x%x to HSIZE...\n",
         (((VAR_56->win.width * 2) + 31) >> 5) &
   VAR_29);
 }
 FUNC_9(VAR_58, VAR_50);


 if (VAR_56->frm_fmt == VAR_19) {
  if (VAR_56->image_invert_enable) {

   FUNC_9(VAR_39, VAR_53);
   FUNC_8(VAR_55, "\nWriting %x to SDOFST...\n",
    VAR_39);
  } else {

   FUNC_9(VAR_40, VAR_53);
   FUNC_8(VAR_55, "\nWriting %x to SDOFST...\n",
    VAR_40);
  }
 } else if (VAR_56->frm_fmt == VAR_20) {
  if (VAR_56->image_invert_enable) {

   FUNC_9(VAR_41, VAR_53);
   FUNC_8(VAR_55, "\nWriting %x to SDOFST...\n",
    VAR_41);
  } else {

   FUNC_9(VAR_42, VAR_53);
   FUNC_8(VAR_55, "\nWriting %x to SDOFST...\n",
    VAR_42);
  }
 }
 FUNC_8(VAR_55, "\nend of ccdc_config_raw...");
 return 0;
}
