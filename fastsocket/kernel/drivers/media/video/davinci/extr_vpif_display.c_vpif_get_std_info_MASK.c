
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpif_channel_config_params {int stdid; int width; int height; } ;
struct vpif_params {struct vpif_channel_config_params std_info; } ;
struct video_obj {int stdid; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct common_obj {int width; int height; TYPE_3__ fmt; } ;
struct channel_obj {struct common_obj* common; struct vpif_params vpifparams; struct video_obj video; } ;


 int FUNC_0 (struct vpif_channel_config_params*) ;
 size_t VAR_0 ;
 struct vpif_channel_config_params* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vpif_channel_config_params*,struct vpif_channel_config_params const*,int) ;
 int FUNC_2 (int,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct channel_obj *VAR_3)
{
 struct common_obj *VAR_4 = &VAR_3->common[VAR_0];
 struct video_obj *VAR_5 = &VAR_3->video;
 struct vpif_params *VAR_6 = &VAR_3->vpifparams;
 struct vpif_channel_config_params *VAR_7 = &VAR_6->std_info;
 const struct vpif_channel_config_params *VAR_8;

 int VAR_9;

 VAR_7->stdid = VAR_5->stdid;
 if (!VAR_7)
  return -1;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  VAR_8 = &VAR_1[VAR_9];
  if (VAR_8->stdid & VAR_7->stdid) {
   FUNC_1(VAR_7, VAR_8, sizeof(*VAR_8));
   break;
  }
 }

 if (VAR_9 == FUNC_0(VAR_1))
  return -1;

 VAR_4->fmt.fmt.pix.width = VAR_7->width;
 VAR_4->fmt.fmt.pix.height = VAR_7->height;
 FUNC_2(1, VAR_2, "Pixel details: Width = %d,Height = %d\n",
   VAR_4->fmt.fmt.pix.width, VAR_4->fmt.fmt.pix.height);


 VAR_3->common[VAR_0].height = VAR_7->height;
 VAR_3->common[VAR_0].width = VAR_7->width;

 return 0;
}
