
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea5764_device {int mutex; scalar_t__ users; TYPE_1__* videodev; } ;
struct file {struct tea5764_device* private_data; } ;
struct TYPE_4__ {int minor; } ;
struct TYPE_3__ {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct file*) ;
 struct tea5764_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2)
{

 int VAR_3 = FUNC_2(VAR_2)->minor;
 struct tea5764_device *VAR_4 = FUNC_3(VAR_2);

 if (VAR_4->videodev->minor != VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_4->mutex);

 if (VAR_4->users) {
  FUNC_1(&VAR_4->mutex);
  return -VAR_0;
 }
 VAR_4->users++;
 FUNC_1(&VAR_4->mutex);
 VAR_2->private_data = VAR_4;
 return 0;
}
