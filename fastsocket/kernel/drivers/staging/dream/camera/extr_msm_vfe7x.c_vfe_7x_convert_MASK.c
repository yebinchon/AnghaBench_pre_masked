
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfe_frame_extra {int r_b_def_p_cnt; int g_def_p_cnt; int bl_oddcol; int bl_evencol; } ;
struct vfe_endframe {int redbluedefectpixelcount; int greendefectpixelcount; int blackleveloddcolumn; int blacklevelevencolumn; int cbcr_address; int y_address; } ;
struct msm_vfe_phy_info {int sbuf_phy; int cbcr_phy; int y_phy; } ;
typedef int int32_t ;
typedef enum vfe_resp_msg { ____Placeholder_vfe_resp_msg } vfe_resp_msg ;


 int FUNC_0 (char*,int ,int ) ;




 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct msm_vfe_phy_info *VAR_2,
  enum vfe_resp_msg VAR_3,
  void *VAR_4, void **VAR_5, int32_t *VAR_6)
{
 switch (VAR_3) {
 case 131:
 case 130: {
  VAR_2->y_phy = ((struct vfe_endframe *)VAR_4)->y_address;
  VAR_2->cbcr_phy =
   ((struct vfe_endframe *)VAR_4)->cbcr_address;

  FUNC_0("vfe_7x_convert, y_phy = 0x%x, cbcr_phy = 0x%x\n",
     VAR_2->y_phy, VAR_2->cbcr_phy);

  ((struct vfe_frame_extra *)VAR_0)->bl_evencol =
  ((struct vfe_endframe *)VAR_4)->blacklevelevencolumn;

  ((struct vfe_frame_extra *)VAR_0)->bl_oddcol =
  ((struct vfe_endframe *)VAR_4)->blackleveloddcolumn;

  ((struct vfe_frame_extra *)VAR_0)->g_def_p_cnt =
  ((struct vfe_endframe *)VAR_4)->greendefectpixelcount;

  ((struct vfe_frame_extra *)VAR_0)->r_b_def_p_cnt =
  ((struct vfe_endframe *)VAR_4)->redbluedefectpixelcount;

  *VAR_5 = VAR_0;
  *VAR_6 = VAR_1;
 }
  break;

 case 129:
 case 128:
  VAR_2->sbuf_phy = *(uint32_t *)VAR_4;
  break;

 default:
  break;
 }
}
