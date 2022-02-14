
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int name; int std; int type; } ;
struct soc_camera_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct soc_camera_device *VAR_2,
        struct v4l2_input *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->std = VAR_1;
 FUNC_0(VAR_3->name, "Video");

 return 0;
}
