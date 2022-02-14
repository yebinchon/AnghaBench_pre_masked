
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; int capability; } ;
struct file {int dummy; } ;
struct bttv_fh {TYPE_2__* ovfmt; struct bttv* btv; } ;
struct bttv {struct v4l2_framebuffer fbuf; } ;
struct TYPE_4__ {int fourcc; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
    struct v4l2_framebuffer *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 struct bttv *VAR_5 = VAR_4->btv;

 *VAR_3 = VAR_5->fbuf;
 VAR_3->capability = VAR_0;
 if (VAR_4->ovfmt)
  VAR_3->fmt.pixelformat = VAR_4->ovfmt->fourcc;
 return 0;
}
