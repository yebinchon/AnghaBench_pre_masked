
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int index; int capability; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_audio *VAR_4)
{
 if (VAR_4->index > 1)
  return -VAR_0;

 FUNC_0(VAR_4->name, "Radio");
 VAR_4->capability = VAR_1;
 return 0;
}
