
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int width; } ;
struct ccdc_params_ycbcr {int pix_fmt; int frm_fmt; int fid_pol; int hd_pol; int vd_pol; int pix_order; scalar_t__ buf_type; TYPE_1__ win; scalar_t__ bt656_enable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct ccdc_params_ycbcr VAR_25 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int VAR_26 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int ) ;

void FUNC_6(void)
{
 struct ccdc_params_ycbcr *VAR_27 = &VAR_25;
 u32 VAR_28;

 FUNC_4(VAR_26, "\nStarting ccdc_config_ycbcr...");





 FUNC_1();






 VAR_28 = (((VAR_27->pix_fmt & VAR_18) <<
      VAR_19) |
      ((VAR_27->frm_fmt & VAR_14) <<
      VAR_15) | VAR_21 |
      VAR_24 | VAR_3);


 if (VAR_27->bt656_enable) {
  FUNC_5(VAR_11, VAR_10);





  VAR_28 |= VAR_20 | VAR_17;
 } else {

  VAR_28 |= (((VAR_27->fid_pol & VAR_4) <<
        VAR_5) |
        ((VAR_27->hd_pol & VAR_6) <<
        VAR_7) |
        ((VAR_27->vd_pol & VAR_22) <<
        VAR_23));
 }
 FUNC_5(VAR_28, VAR_16);


 FUNC_3(&VAR_27->win, VAR_27->frm_fmt, 2);





 FUNC_5((VAR_27->pix_order << VAR_2) |
   VAR_9, VAR_1);





 FUNC_5(((VAR_27->win.width * 2 + 31) & ~0x1f), VAR_8);


 if (VAR_27->buf_type == VAR_0)

  FUNC_5(VAR_13, VAR_12);

 FUNC_2();
 FUNC_4(VAR_26, "\nEnd of ccdc_config_ycbcr...\n");
 FUNC_0();
}
