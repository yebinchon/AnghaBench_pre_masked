
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; int field; int colorspace; int height; int width; } ;
struct TYPE_9__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct soc_camera_host {TYPE_5__* ops; } ;
struct TYPE_14__ {int parent; } ;
struct TYPE_12__ {int field; } ;
struct soc_camera_device {int user_height; int user_width; TYPE_6__ dev; int field; TYPE_4__ vb_vidq; int colorspace; TYPE_3__* current_fmt; } ;
struct TYPE_13__ {int (* try_fmt ) (struct soc_camera_device*,struct v4l2_format*) ;int (* set_fmt ) (struct soc_camera_device*,struct v4l2_format*) ;int (* set_bus_param ) (struct soc_camera_device*,scalar_t__) ;} ;
struct TYPE_11__ {TYPE_2__* host_fmt; } ;
struct TYPE_10__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*,int ,int ,...) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct soc_camera_device*,struct v4l2_format*) ;
 int FUNC_5 (struct soc_camera_device*,struct v4l2_format*) ;
 int FUNC_6 (struct soc_camera_device*,scalar_t__) ;
 struct soc_camera_host* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct soc_camera_device *VAR_2,
         struct v4l2_format *VAR_3)
{
 struct soc_camera_host *VAR_4 = FUNC_7(VAR_2->dev.parent);
 struct v4l2_pix_format *VAR_5 = &VAR_3->fmt.pix;
 int VAR_6;

 FUNC_0(&VAR_2->dev, "S_FMT(%c%c%c%c, %ux%u)\n",
  FUNC_3(VAR_5->pixelformat), VAR_5->width, VAR_5->height);


 VAR_6 = VAR_4->ops->try_fmt(VAR_2, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = VAR_4->ops->set_fmt(VAR_2, VAR_3);
 if (VAR_6 < 0) {
  return VAR_6;
 } else if (!VAR_2->current_fmt ||
     VAR_2->current_fmt->host_fmt->fourcc != VAR_5->pixelformat) {
  FUNC_1(&VAR_2->dev,
   "Host driver hasn't set up current format correctly!\n");
  return -VAR_0;
 }

 VAR_2->user_width = VAR_5->width;
 VAR_2->user_height = VAR_5->height;
 VAR_2->colorspace = VAR_5->colorspace;
 VAR_2->vb_vidq.field =
  VAR_2->field = VAR_5->field;

 if (VAR_3->type != VAR_1)
  FUNC_2(&VAR_2->dev, "Attention! Wrong buf-type %d\n",
    VAR_3->type);

 FUNC_0(&VAR_2->dev, "set width: %d height: %d\n",
  VAR_2->user_width, VAR_2->user_height);


 return VAR_4->ops->set_bus_param(VAR_2, VAR_5->pixelformat);
}
