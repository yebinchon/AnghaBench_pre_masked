
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn9c102_device {int kref; TYPE_1__* v4ldev; int wait_open; int users; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct sn9c102_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct sn9c102_device*) ;
 int FUNC_5 (int *) ;
 struct sn9c102_device* FUNC_6 (struct file*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2)
{
 struct sn9c102_device* VAR_3;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_6(VAR_2);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 VAR_3->users--;
 FUNC_7(&VAR_3->wait_open, 1);

 FUNC_0(3, "Video device /dev/video%d closed", VAR_3->v4ldev->num);

 FUNC_2(&VAR_3->kref, VAR_1);

 FUNC_5(&VAR_0);

 return 0;
}
