
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {scalar_t__ index; scalar_t__ type; int pixelformat; int description; int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
        struct v4l2_fmtdesc *VAR_6)
{

 if (VAR_6->index != 0 || VAR_6->type != VAR_1)
  return -VAR_0;

 VAR_6->flags = VAR_2;
 FUNC_0(VAR_6->description, "MPEG2-TS with AVC/AAC streams", 32);
 VAR_6->pixelformat = VAR_3;

 return 0;
}
