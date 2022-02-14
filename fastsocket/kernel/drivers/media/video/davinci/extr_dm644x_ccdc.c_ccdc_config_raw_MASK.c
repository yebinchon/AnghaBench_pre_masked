
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;
struct TYPE_3__ {unsigned int gama_wd; scalar_t__ enable; } ;
struct ccdc_config_params_raw {unsigned int data_sz; TYPE_1__ alaw; int fault_pxl; int blk_comp; int blk_clamp; } ;
struct ccdc_params_raw {unsigned int vd_pol; unsigned int hd_pol; unsigned int fid_pol; unsigned int frm_fmt; unsigned int pix_fmt; TYPE_2__ win; scalar_t__ image_invert_enable; struct ccdc_config_params_raw config_params; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 unsigned int VAR_34 ;
 int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 int VAR_41 ;
 unsigned int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 unsigned int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 unsigned int VAR_55 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ccdc_params_raw VAR_56 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,unsigned int,int ) ;
 int VAR_57 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (unsigned int,int ) ;

void FUNC_9(void)
{
 struct ccdc_params_raw *VAR_58 = &VAR_56;
 struct ccdc_config_params_raw *VAR_59 =
  &VAR_56.config_params;
 unsigned int VAR_60 = 0;
 unsigned int VAR_61;

 FUNC_7(VAR_57, "\nStarting ccdc_config_raw...");


 FUNC_4();


 FUNC_8(VAR_38, VAR_4);
 VAR_60 =
  (((VAR_58->vd_pol & VAR_47) << VAR_48) |
  ((VAR_58->hd_pol & VAR_31) << VAR_32) |
  ((VAR_58->fid_pol & VAR_14) << VAR_15) |
  ((VAR_58->frm_fmt & VAR_29) << VAR_30) |
  ((VAR_59->data_sz & VAR_10) <<
  VAR_11) |
  ((VAR_58->pix_fmt & VAR_39) << VAR_40) |
  VAR_55 | VAR_46);


 if (VAR_59->alaw.enable) {
  VAR_61 = ((VAR_59->alaw.gama_wd &
        VAR_3) | VAR_2);
  FUNC_8(VAR_61, VAR_1);
  FUNC_7(VAR_57, "\nWriting 0x%x to ALAW...\n", VAR_61);
 }


 FUNC_6(&VAR_58->win, VAR_58->frm_fmt, VAR_41);


 FUNC_0(&VAR_59->blk_clamp);


 FUNC_1(&VAR_59->blk_comp);


 FUNC_2(&VAR_59->fault_pxl);


 if ((VAR_59->data_sz == VAR_8) ||
      VAR_59->alaw.enable)
  VAR_60 |= VAR_9;






 VAR_61 = VAR_12;


 if (VAR_59->data_sz == VAR_8)
  VAR_61 |= (VAR_7 & VAR_17)
      << VAR_18;
 else
  VAR_61 |= (VAR_59->data_sz & VAR_17)
      << VAR_18;

 FUNC_8(VAR_61, VAR_16);

 FUNC_7(VAR_57, "\nWriting 0x%x to FMTCFG...\n", VAR_61);

 FUNC_8(VAR_6, VAR_5);

 FUNC_7(VAR_57, "\nWriting 0xBB11BB11 to COLPTN...\n");




 VAR_61 = ((VAR_58->win.left & VAR_21) <<
       VAR_22) |
       (VAR_58->win.width & VAR_20);
 FUNC_8(VAR_61, VAR_19);

 FUNC_7(VAR_57, "\nWriting 0x%x to FMT_HORZ...\n", VAR_61);
 VAR_61 = (VAR_58->win.top & VAR_25)
     << VAR_26;
 if (VAR_58->frm_fmt == VAR_28)
  VAR_61 |= (VAR_58->win.height) & VAR_24;
 else
  VAR_61 |= (VAR_58->win.height >> 1) & VAR_24;

 FUNC_7(VAR_57, "\nparams->win.height  0x%x ...\n",
        VAR_58->win.height);
 FUNC_8(VAR_61, VAR_23);

 FUNC_7(VAR_57, "\nWriting 0x%x to FMT_VERT...\n", VAR_61);

 FUNC_7(VAR_57, "\nbelow regw(val, FMT_VERT)...");





 if ((VAR_59->data_sz == VAR_8) ||
     VAR_59->alaw.enable)
  FUNC_8((VAR_58->win.width + VAR_0) &
      VAR_34, VAR_33);
 else

  FUNC_8(((VAR_58->win.width * VAR_45) +
      VAR_0) & VAR_34,
      VAR_33);


 if (VAR_58->frm_fmt == VAR_27) {
  if (VAR_58->image_invert_enable) {

   FUNC_8(VAR_36, VAR_43);
   FUNC_7(VAR_57, "\nWriting 0x4B6D to SDOFST...\n");
  }

  else {

   FUNC_8(VAR_37, VAR_43);
   FUNC_7(VAR_57, "\nWriting 0x0249 to SDOFST...\n");
  }
 } else if (VAR_58->frm_fmt == VAR_28) {
  FUNC_8(VAR_42, VAR_43);
  FUNC_7(VAR_57, "\nWriting 0x0000 to SDOFST...\n");
 }





 if (VAR_58->frm_fmt == VAR_28)
  VAR_61 = (((VAR_58->win.height - 1) & VAR_53))
      << VAR_54;
 else
  VAR_61 =
      ((((VAR_58->win.height >> VAR_35) -
       1) & VAR_53)) <<
      VAR_54;

 VAR_61 |= ((((VAR_58->win.width))) & VAR_50)
     << VAR_51;
 VAR_61 |= (VAR_58->win.left) & VAR_52;
 FUNC_8(VAR_61, VAR_49);

 FUNC_7(VAR_57, "\nWriting 0x%x to VP_OUT...\n", VAR_61);
 FUNC_8(VAR_60, VAR_44);
 FUNC_7(VAR_57, "\nWriting 0x%x to SYN_MODE...\n", VAR_60);

 FUNC_5();
 FUNC_7(VAR_57, "\nend of ccdc_config_raw...");
 FUNC_3();
}
