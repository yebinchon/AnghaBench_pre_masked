
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int name; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_audio *VAR_2)
{
 FUNC_0(VAR_2->name, "audio");
 return 0;
}
