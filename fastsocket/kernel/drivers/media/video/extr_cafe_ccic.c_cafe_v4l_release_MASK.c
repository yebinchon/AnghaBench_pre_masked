
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {scalar_t__ users; int s_mutex; struct file* owner; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*) ;
 int FUNC_3 (struct cafe_camera*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1)
{
 struct cafe_camera *VAR_2 = VAR_1->private_data;

 FUNC_4(&VAR_2->s_mutex);
 (VAR_2->users)--;
 if (VAR_1 == VAR_2->owner) {
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
  VAR_2->owner = ((void*)0);
 }
 if (VAR_2->users == 0) {
  FUNC_0(VAR_2);
  if (VAR_0)
   FUNC_2(VAR_2);
 }
 FUNC_5(&VAR_2->s_mutex);
 return 0;
}
