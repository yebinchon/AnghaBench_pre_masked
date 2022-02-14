
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; int y; int x; } ;
struct zoran_fh {TYPE_2__ overlay_settings; struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_5__ {int width; int height; int top; int left; } ;
struct TYPE_7__ {int field; TYPE_1__ w; } ;
struct TYPE_8__ {TYPE_3__ win; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct zoran_fh *VAR_6 = VAR_4;
 struct zoran *VAR_7 = VAR_6->zr;

 FUNC_0(&VAR_7->resource_lock);

 VAR_5->fmt.win.w.left = VAR_6->overlay_settings.x;
 VAR_5->fmt.win.w.top = VAR_6->overlay_settings.y;
 VAR_5->fmt.win.w.width = VAR_6->overlay_settings.width;
 VAR_5->fmt.win.w.height = VAR_6->overlay_settings.height;
 if (VAR_6->overlay_settings.width * 2 > VAR_0)
  VAR_5->fmt.win.field = VAR_1;
 else
  VAR_5->fmt.win.field = VAR_2;

 FUNC_1(&VAR_7->resource_lock);
 return 0;
}
