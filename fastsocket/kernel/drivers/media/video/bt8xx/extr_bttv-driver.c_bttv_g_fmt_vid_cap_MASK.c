
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pixelformat; int field; } ;
struct TYPE_6__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int field; } ;
struct bttv_fh {TYPE_4__* fmt; TYPE_1__ cap; int height; int width; } ;
struct TYPE_8__ {int fourcc; } ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1;

 FUNC_0(&VAR_2->fmt.pix, VAR_3->fmt,
    VAR_3->width, VAR_3->height);
 VAR_2->fmt.pix.field = VAR_3->cap.field;
 VAR_2->fmt.pix.pixelformat = VAR_3->fmt->fourcc;

 return 0;
}
