
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int value; int id; } ;
struct cafe_camera {int dummy; } ;
typedef int ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_control*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct cafe_camera*,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_2(struct cafe_camera *VAR_4)
{
 struct v4l2_control VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.id = VAR_0;
 VAR_5.value = VAR_2;
 return FUNC_1(VAR_4, VAR_1, VAR_3, &VAR_5);
}
