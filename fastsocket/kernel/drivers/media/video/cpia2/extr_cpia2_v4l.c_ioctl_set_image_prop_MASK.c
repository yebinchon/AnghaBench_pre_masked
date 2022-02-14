
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_picture {int brightness; int colour; int contrast; } ;
struct TYPE_3__ {int brightness; int saturation; int contrast; } ;
struct TYPE_4__ {TYPE_1__ color_params; } ;
struct camera_data {TYPE_2__ params; int vp; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (int *,struct video_picture*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct camera_data *VAR_1)
{
 struct video_picture *VAR_2;
 int VAR_3 = 0;
 VAR_2 = VAR_0;


 FUNC_2(&VAR_1->vp, VAR_2, sizeof(*VAR_2));


 VAR_1->params.color_params.brightness = VAR_2->brightness / 256;
 VAR_1->params.color_params.saturation = VAR_2->colour / 256;
 VAR_1->params.color_params.contrast = VAR_2->contrast / 256;

 FUNC_0("Requested params: bright 0x%X, sat 0x%X, contrast 0x%X\n",
     VAR_1->params.color_params.brightness,
     VAR_1->params.color_params.saturation,
     VAR_1->params.color_params.contrast);

 FUNC_1(VAR_1);

 return VAR_3;
}
