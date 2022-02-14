
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zoran_fh {struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {TYPE_1__ w; } ;
struct TYPE_6__ {TYPE_2__ win; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_format *VAR_6)
{
 struct zoran_fh *VAR_7 = VAR_5;
 struct zoran *VAR_8 = VAR_7->zr;

 FUNC_0(&VAR_8->resource_lock);

 if (VAR_6->fmt.win.w.width > VAR_1)
  VAR_6->fmt.win.w.width = VAR_1;
 if (VAR_6->fmt.win.w.width < VAR_3)
  VAR_6->fmt.win.w.width = VAR_3;
 if (VAR_6->fmt.win.w.height > VAR_0)
  VAR_6->fmt.win.w.height = VAR_0;
 if (VAR_6->fmt.win.w.height < VAR_2)
  VAR_6->fmt.win.w.height = VAR_2;

 FUNC_1(&VAR_8->resource_lock);
 return 0;
}
