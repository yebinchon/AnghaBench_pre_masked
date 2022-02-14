
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * parent; } ;
struct TYPE_8__ {scalar_t__ vendor; int bustype; } ;
struct input_dev {char* name; int keybit; int evbit; TYPE_2__ dev; TYPE_1__ id; } ;
typedef void* s8 ;
struct TYPE_12__ {TYPE_4__* idev; TYPE_3__* of_dev; int bustype; void* zcalib; void* ycalib; void* xcalib; } ;
struct TYPE_11__ {int poll_interval; struct input_dev* input; int poll; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_0 (void**,void**,void**) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int,int ) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct input_dev *VAR_10;
 s8 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 FUNC_0(&VAR_11, &VAR_12, &VAR_13);
 VAR_8.xcalib = VAR_11;
 VAR_8.ycalib = VAR_12;
 VAR_8.zcalib = VAR_13;

 VAR_8.idev = FUNC_1();
 if (!VAR_8.idev)
  return -VAR_4;

 VAR_8.idev->poll = VAR_7;
 VAR_8.idev->poll_interval = 25;

 VAR_10 = VAR_8.idev->input;
 VAR_10->name = "Apple Motion Sensor";
 VAR_10->id.bustype = VAR_8.bustype;
 VAR_10->id.vendor = 0;
 VAR_10->dev.parent = &VAR_8.of_dev->dev;

 FUNC_4(VAR_10, VAR_0, -50, 50, 3, 0);
 FUNC_4(VAR_10, VAR_1, -50, 50, 3, 0);
 FUNC_4(VAR_10, VAR_2, -50, 50, 3, 0);

 FUNC_5(VAR_5, VAR_10->evbit);
 FUNC_5(VAR_6, VAR_10->evbit);
 FUNC_5(VAR_3, VAR_10->keybit);

 VAR_14 = FUNC_3(VAR_8.idev);
 if (VAR_14) {
  FUNC_2(VAR_8.idev);
  VAR_8.idev = ((void*)0);
  return VAR_14;
 }

 VAR_9 = 1;

 return 0;
}
