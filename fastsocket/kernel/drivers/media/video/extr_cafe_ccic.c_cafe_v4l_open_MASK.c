
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {scalar_t__ users; int s_mutex; } ;


 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cafe_camera* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct cafe_camera *VAR_1 = FUNC_5(VAR_0);

 VAR_0->private_data = VAR_1;

 FUNC_3(&VAR_1->s_mutex);
 if (VAR_1->users == 0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, 1);

 }
 (VAR_1->users)++;
 FUNC_4(&VAR_1->s_mutex);
 return 0;
}
