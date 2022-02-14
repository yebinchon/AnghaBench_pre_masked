
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_format_xlate {int dummy; } ;
struct TYPE_9__ {int parent; } ;
struct soc_camera_device {unsigned int num_user_formats; TYPE_2__* user_formats; TYPE_2__* current_fmt; TYPE_6__ dev; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;
struct TYPE_8__ {int code; int host_fmt; } ;
struct TYPE_7__ {int (* get_formats ) (struct soc_camera_device*,unsigned int,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*,unsigned int) ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_1 (struct soc_camera_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct soc_camera_device*,unsigned int,TYPE_2__*) ;
 int FUNC_4 (struct soc_camera_device*,unsigned int,TYPE_2__*) ;
 struct soc_camera_host* FUNC_5 (int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,unsigned int,int*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_8 (unsigned int) ;

__attribute__((used)) static int FUNC_9(struct soc_camera_device *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_1(VAR_4);
 struct soc_camera_host *VAR_6 = FUNC_5(VAR_4->dev.parent);
 unsigned int VAR_7, VAR_8 = 0, VAR_9 = 0;
 int VAR_10;
 enum v4l2_mbus_pixelcode VAR_11;

 while (!FUNC_6(VAR_5, VAR_3, VAR_2, VAR_9, &VAR_11))
  VAR_9++;

 if (!VAR_6->ops->get_formats)




  VAR_8 = VAR_9;
 else




  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_10 = VAR_6->ops->get_formats(VAR_4, VAR_7, ((void*)0));
   if (VAR_10 < 0)
    return VAR_10;
   VAR_8 += VAR_10;
  }

 if (!VAR_8)
  return -VAR_1;

 VAR_4->user_formats =
  FUNC_8(VAR_8 * sizeof(struct soc_camera_format_xlate));
 if (!VAR_4->user_formats)
  return -VAR_0;

 VAR_4->num_user_formats = VAR_8;

 FUNC_0(&VAR_4->dev, "Found %d supported formats.\n", VAR_8);


 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  if (!VAR_6->ops->get_formats) {
   FUNC_6(VAR_5, VAR_3, VAR_2, VAR_7, &VAR_11);
   VAR_4->user_formats[VAR_7].host_fmt =
    FUNC_2(VAR_11);
   VAR_4->user_formats[VAR_7].code = VAR_11;
  } else {
   VAR_10 = VAR_6->ops->get_formats(VAR_4, VAR_7,
          &VAR_4->user_formats[VAR_8]);
   if (VAR_10 < 0)
    goto egfmt;
   VAR_8 += VAR_10;
  }

 VAR_4->current_fmt = &VAR_4->user_formats[0];

 return 0;

egfmt:
 VAR_4->num_user_formats = 0;
 FUNC_7(VAR_4->user_formats);
 return VAR_10;
}
