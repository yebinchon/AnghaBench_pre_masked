
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_50hz; int height; int width; int port; } ;
struct pvr2_hdw {int std_mask_cur; TYPE_2__* hdw_desc; TYPE_1__ enc_ctl_state; int res_ver_val; int res_hor_val; } ;
struct TYPE_4__ {scalar_t__ flag_has_cx25840; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,int ,int,...) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct pvr2_hdw *VAR_8)
{
 int VAR_9;
 int VAR_10;
 FUNC_3(VAR_5,"pvr2_encoder_configure"
     " (cx2341x module)");
 VAR_8->enc_ctl_state.port = VAR_4;
 VAR_8->enc_ctl_state.width = VAR_8->res_hor_val;
 VAR_8->enc_ctl_state.height = VAR_8->res_ver_val;
 VAR_8->enc_ctl_state.is_50hz = ((VAR_8->std_mask_cur & VAR_7) ?
          0 : 1);

 VAR_9 = 0;

 VAR_9 |= FUNC_1(VAR_8);


 VAR_10 = 0xf0;
 if (VAR_8->hdw_desc->flag_has_cx25840) {

  VAR_10 = 0x140;
 }

 if (!VAR_9) VAR_9 = FUNC_2(
  VAR_8,VAR_2, 2,
  VAR_10, VAR_10);


 if (!VAR_9) VAR_9 = FUNC_2(
  VAR_8,VAR_1, 4,
  0, 0, 0x10000000, 0xffffffff);

 if (!VAR_9) VAR_9 = FUNC_2(
  VAR_8,VAR_3, 5,
  0xffffffff,0,0,0,0);

 if (VAR_9) {
  FUNC_3(VAR_6,
      "Failed to configure cx23416");
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9) return VAR_9;

 VAR_9 = FUNC_2(
  VAR_8, VAR_0, 0);

 if (VAR_9) {
  FUNC_3(VAR_6,
      "Failed to initialize cx23416 video input");
  return VAR_9;
 }

 return 0;
}
