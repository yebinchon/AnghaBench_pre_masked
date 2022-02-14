
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_capability {int type; int channels; int minwidth; int minheight; int maxheight; int maxwidth; scalar_t__ audios; int name; } ;
struct TYPE_5__ {int sensor_flags; } ;
struct TYPE_4__ {int product; } ;
struct TYPE_6__ {TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_3__ params; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_7, struct camera_data *VAR_8)
{
 struct video_capability *VAR_9;
 int VAR_10 = 0;
 VAR_9 = VAR_7;

 if (VAR_8->params.pnp_id.product == 0x151)
  FUNC_0(VAR_9->name, "QX5 Microscope");
 else
  FUNC_0(VAR_9->name, "CPiA2 Camera");

 VAR_9->type = VAR_5 | VAR_6;
 VAR_9->channels = 1;
 VAR_9->audios = 0;
 VAR_9->minwidth = 176;
 VAR_9->minheight = 144;
 switch (VAR_8->params.version.sensor_flags) {
 case 128:
  VAR_9->maxwidth = VAR_3;
  VAR_9->maxheight = VAR_4;
  break;
 case 129:
  VAR_9->maxwidth = VAR_1;
  VAR_9->maxheight = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return VAR_10;
}
