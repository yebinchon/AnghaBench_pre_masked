
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int bytesperline; TYPE_1__* format; int width; } ;
struct zoran_fh {scalar_t__ map_mode; TYPE_2__ v4l_settings; struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_7__ {int height; int sizeimage; int bytesperline; int field; int colorspace; int pixelformat; int width; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int colorspace; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct zoran_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
     struct v4l2_format *VAR_6)
{
 struct zoran_fh *VAR_7 = VAR_5;
 struct zoran *VAR_8 = VAR_7->zr;

 if (VAR_7->map_mode != VAR_3)
  return FUNC_2(VAR_4, VAR_7, VAR_6);

 FUNC_0(&VAR_8->resource_lock);
 VAR_6->fmt.pix.width = VAR_7->v4l_settings.width;
 VAR_6->fmt.pix.height = VAR_7->v4l_settings.height;
 VAR_6->fmt.pix.sizeimage = VAR_7->v4l_settings.bytesperline *
     VAR_7->v4l_settings.height;
 VAR_6->fmt.pix.pixelformat = VAR_7->v4l_settings.format->fourcc;
 VAR_6->fmt.pix.colorspace = VAR_7->v4l_settings.format->colorspace;
 VAR_6->fmt.pix.bytesperline = VAR_7->v4l_settings.bytesperline;
 if (VAR_0 < (VAR_7->v4l_settings.height * 2))
  VAR_6->fmt.pix.field = VAR_1;
 else
  VAR_6->fmt.pix.field = VAR_2;
 FUNC_1(&VAR_8->resource_lock);
 return 0;
}
