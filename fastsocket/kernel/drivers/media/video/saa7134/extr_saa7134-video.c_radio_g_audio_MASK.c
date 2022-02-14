
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int name; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_audio*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_audio *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(VAR_2->name, "Radio");
 return 0;
}
