
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct amradio_device {TYPE_1__* videodev; int removed; int lock; scalar_t__ users; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct amradio_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*) ;
 struct amradio_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2)
{
 struct amradio_device *VAR_3 = FUNC_5(FUNC_4(VAR_2));
 int VAR_4;

 if (!VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_3->lock);
 VAR_3->users = 0;
 FUNC_3(&VAR_3->lock);

 if (!VAR_3->removed) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_4 < 0)
   FUNC_0(&VAR_3->videodev->dev,
    "amradio_stop failed\n");
 }

 return 0;
}
