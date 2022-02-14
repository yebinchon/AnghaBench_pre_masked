
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {scalar_t__ index; int type; int name; } ;
struct camera_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct v4l2_input*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3,void *VAR_4,struct camera_data *VAR_5)
{
 struct v4l2_input *VAR_6 = VAR_4;

 if(VAR_3 != VAR_2) {
  if (VAR_6->index != 0)
         return -VAR_0;
 }

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 FUNC_1(VAR_6->name, "Camera");
 VAR_6->type = VAR_1;

 return 0;
}
