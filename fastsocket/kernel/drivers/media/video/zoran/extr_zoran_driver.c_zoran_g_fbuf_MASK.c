
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* format; } ;
struct zoran_fh {TYPE_3__ overlay_settings; struct zoran* zr; } ;
struct TYPE_5__ {scalar_t__ format; } ;
struct zoran {int resource_lock; int vbuf_bytesperline; TYPE_1__ overlay_settings; int vbuf_height; int vbuf_width; int vbuf_base; } ;
struct TYPE_8__ {int field; int colorspace; int bytesperline; int pixelformat; int height; int width; } ;
struct v4l2_framebuffer {int capability; int flags; TYPE_4__ fmt; int base; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_framebuffer*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
  struct v4l2_framebuffer *VAR_6)
{
 struct zoran_fh *VAR_7 = VAR_5;
 struct zoran *VAR_8 = VAR_7->zr;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 FUNC_1(&VAR_8->resource_lock);
 VAR_6->base = VAR_8->vbuf_base;
 VAR_6->fmt.width = VAR_8->vbuf_width;
 VAR_6->fmt.height = VAR_8->vbuf_height;
 if (VAR_8->overlay_settings.format)
  VAR_6->fmt.pixelformat = VAR_7->overlay_settings.format->fourcc;
 VAR_6->fmt.bytesperline = VAR_8->vbuf_bytesperline;
 FUNC_2(&VAR_8->resource_lock);
 VAR_6->fmt.colorspace = VAR_0;
 VAR_6->fmt.field = VAR_3;
 VAR_6->flags = VAR_2;
 VAR_6->capability = VAR_1;

 return 0;
}
