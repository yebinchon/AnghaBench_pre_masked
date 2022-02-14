
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int name; int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2 (struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 if (FUNC_1(VAR_3->index))
  return -VAR_0;

 FUNC_0(VAR_3->name,"Radio");
 return 0;
}
