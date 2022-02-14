
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int storage_mode; int hpitch; } ;
struct vpif_channel_config_params {int stdid; int frm_fmt; int width; int height; } ;
struct vpif_params {TYPE_4__ video_params; struct vpif_channel_config_params std_info; } ;
struct video_obj {int stdid; } ;
struct TYPE_5__ {int bytesperline; int height; int width; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct common_obj {TYPE_3__ fmt; int height; int width; } ;
struct channel_obj {struct video_obj video; struct vpif_params vpifparams; struct common_obj* common; } ;


 int FUNC_0 (struct vpif_channel_config_params*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct vpif_channel_config_params* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vpif_channel_config_params*,struct vpif_channel_config_params const*,int) ;
 int FUNC_2 (int,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct channel_obj *VAR_4)
{
 struct common_obj *VAR_5 = &VAR_4->common[VAR_1];
 struct vpif_params *VAR_6 = &VAR_4->vpifparams;
 const struct vpif_channel_config_params *VAR_7;
 struct vpif_channel_config_params *VAR_8;
 struct video_obj *VAR_9 = &VAR_4->video;
 int VAR_10;

 FUNC_2(2, VAR_3, "vpif_update_std_info\n");

 VAR_8 = &VAR_6->std_info;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  VAR_7 = &VAR_2[VAR_10];
  if (VAR_7->stdid & VAR_9->stdid) {
   FUNC_1(VAR_8, VAR_7, sizeof(*VAR_7));
   break;
  }
 }


 if (VAR_10 == FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5->fmt.fmt.pix.width = VAR_8->width;
 VAR_5->width = VAR_8->width;
 VAR_5->fmt.fmt.pix.height = VAR_8->height;
 VAR_5->height = VAR_8->height;
 VAR_5->fmt.fmt.pix.bytesperline = VAR_8->width;
 VAR_6->video_params.hpitch = VAR_8->width;
 VAR_6->video_params.storage_mode = VAR_8->frm_fmt;
 return 0;
}
