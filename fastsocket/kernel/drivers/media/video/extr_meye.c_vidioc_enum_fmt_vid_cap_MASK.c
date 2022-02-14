
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int pixelformat; int description; scalar_t__ flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_fmtdesc *VAR_6)
{
 if (VAR_6->index > 1)
  return -VAR_0;

 if (VAR_6->index == 0) {

  VAR_6->flags = 0;
  FUNC_0(VAR_6->description, "YUV422");
  VAR_6->pixelformat = VAR_3;
 } else {

  VAR_6->flags = VAR_1;
  FUNC_0(VAR_6->description, "MJPEG");
  VAR_6->pixelformat = VAR_2;
 }

 return 0;
}
