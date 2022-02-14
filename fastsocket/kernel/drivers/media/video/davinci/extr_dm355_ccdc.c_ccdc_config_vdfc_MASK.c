
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vdfcsl; int vdfcuda; int vdflsft; } ;
struct ccdc_vertical_dft {int gen_dft_en; int table_size; int saturation_ctl; TYPE_1__ dft_corr_ctl; int ver_dft_en; } ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int,struct ccdc_vertical_dft*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ccdc_vertical_dft *VAR_20)
{
 u32 VAR_21;
 int VAR_22;


 VAR_21 = VAR_20->gen_dft_en & VAR_0;


 if (!VAR_20->ver_dft_en) {

  FUNC_2(VAR_21, VAR_15);
  return 0;
 }

 if (VAR_20->table_size > VAR_13)
  return -VAR_19;

 VAR_21 |= VAR_7;
 VAR_21 |= (VAR_20->dft_corr_ctl.vdfcsl & VAR_3) <<
  VAR_4;
 VAR_21 |= (VAR_20->dft_corr_ctl.vdfcuda & VAR_5) <<
  VAR_6;
 VAR_21 |= (VAR_20->dft_corr_ctl.vdflsft & VAR_8) <<
  VAR_9;
 FUNC_2(VAR_21 , VAR_15);


 VAR_21 = VAR_10 << VAR_11;


 for (VAR_22 = 0; VAR_22 < VAR_20->table_size; VAR_22++) {

  if (VAR_22 != 0)
   VAR_21 = VAR_12;
  FUNC_2(VAR_21, VAR_16);
  if (FUNC_0(VAR_22, VAR_20) < 0)
   return -VAR_18;
 }


 FUNC_2(VAR_20->saturation_ctl & VAR_14, VAR_17);
 VAR_21 = FUNC_1(VAR_15) | (VAR_1 <<
   VAR_2);
 FUNC_2(VAR_21, VAR_15);
 return 0;
}
