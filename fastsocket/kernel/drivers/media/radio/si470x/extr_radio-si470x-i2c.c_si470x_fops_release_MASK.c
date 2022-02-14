
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {scalar_t__ users; int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si470x_device*) ;
 struct si470x_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1)
{
 struct si470x_device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;


 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_2->lock);
 VAR_2->users--;
 if (VAR_2->users == 0)

  VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
