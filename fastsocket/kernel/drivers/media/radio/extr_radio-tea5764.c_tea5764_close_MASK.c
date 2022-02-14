
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_device {int mutex; int users; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tea5764_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1)
{
 struct tea5764_device *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  return -VAR_0;
 FUNC_0(&VAR_2->mutex);
 VAR_2->users--;
 FUNC_1(&VAR_2->mutex);
 return 0;
}
