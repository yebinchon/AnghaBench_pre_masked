
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct et61x251_device {int kref; TYPE_1__* v4ldev; int wait_open; int users; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct et61x251_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct et61x251_device*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct et61x251_device* FUNC_6 (struct file*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2)
{
 struct et61x251_device* VAR_3;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_6(VAR_2);

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 VAR_3->users--;
 FUNC_7(&VAR_3->wait_open, 1);

 FUNC_0(3, "Video device /dev/video%d closed", VAR_3->v4ldev->num);

 FUNC_4(&VAR_3->kref, VAR_1);

 FUNC_5(&VAR_0);

 return 0;
}
