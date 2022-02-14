
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; int capability; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_audio *VAR_4)
{
  struct v4l2_audio *VAR_5 = VAR_4;

  int VAR_6 = -VAR_0;
  if (VAR_5->index > 0)
   return VAR_6;
  FUNC_0(VAR_5->name, "VideoGrabber Audio", 14);
  VAR_5->capability = VAR_1;
return 0;
}
