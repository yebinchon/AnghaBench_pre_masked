
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_output {scalar_t__ index; int name; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_output*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_output *VAR_4)
{
 if (VAR_4->index != 0)
  return -VAR_0;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->index = 0;
 VAR_4->type = VAR_1;
 FUNC_1(VAR_4->name, "Autodetect", sizeof(VAR_4->name)-1);

 return 0;
}
