
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_color_convert_cfg {int ConvertOffset; int v2; int v1; int v0; int kcr; int kcb; int dm; int dp; int cm; int cp; int bm; int bp; int am; int ap; } ;
struct vfe_cmd_chroma_enhan_config {int RGBtoYConversionOffset; int RGBtoYConversionV2; int RGBtoYConversionV1; int RGBtoYConversionV0; int kcr; int kcb; int dm; int dp; int cm; int cp; int bm; int bp; int am; int ap; int enable; } ;
struct vfe_chroma_enhance_cfg {int ConvertOffset; int v2; int v1; int v0; int kcr; int kcb; int dm; int dp; int cm; int cp; int bm; int bp; int am; int ap; } ;
typedef int cmd2 ;
typedef int cmd ;
struct TYPE_3__ {int chromaEnhanEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct vfe_color_convert_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_chroma_enhan_config *VAR_3)
{
 struct vfe_chroma_enhance_cfg VAR_4;
 struct vfe_color_convert_cfg VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_2->vfeModuleEnableLocal.chromaEnhanEnable = VAR_3->enable;

 VAR_4.ap = VAR_3->ap;
 VAR_4.am = VAR_3->am;
 VAR_4.bp = VAR_3->bp;
 VAR_4.bm = VAR_3->bm;
 VAR_4.cp = VAR_3->cp;
 VAR_4.cm = VAR_3->cm;
 VAR_4.dp = VAR_3->dp;
 VAR_4.dm = VAR_3->dm;
 VAR_4.kcb = VAR_3->kcb;
 VAR_4.kcr = VAR_3->kcr;

 VAR_5 = VAR_3->RGBtoYConversionV0;
 VAR_5 = VAR_3->RGBtoYConversionV1;
 VAR_5 = VAR_3->RGBtoYConversionV2;
 VAR_5 = VAR_3->RGBtoYConversionOffset;

 FUNC_1(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 FUNC_1(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_5, sizeof(VAR_5));
}
