
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int io_mutex; int * io_done; struct ccw_device* cdev; } ;
struct ccw_device {int dummy; } ;
struct ccw1 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ccw_device*,struct ccw1*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct urdev *VAR_1, struct ccw1 *VAR_2)
{
 int VAR_3;
 struct ccw_device *VAR_4 = VAR_1->cdev;
 FUNC_0(VAR_0);

 FUNC_1("do_ur_io: cpa=%p\n", VAR_2);

 VAR_3 = FUNC_4(&VAR_1->io_mutex);
 if (VAR_3)
  return VAR_3;

 VAR_1->io_done = &VAR_0;

 FUNC_6(FUNC_3(VAR_4));
 VAR_3 = FUNC_2(VAR_4, VAR_2, 1, 0, 0);
 FUNC_7(FUNC_3(VAR_4));

 FUNC_1("do_ur_io: ccw_device_start returned %d\n", VAR_3);
 if (VAR_3)
  goto out;

 FUNC_8(&VAR_0);
 FUNC_1("do_ur_io: I/O complete\n");
 VAR_3 = 0;

out:
 FUNC_5(&VAR_1->io_mutex);
 return VAR_3;
}
