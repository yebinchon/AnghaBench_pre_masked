
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {TYPE_1__* cdev; scalar_t__ required_tapemarks; } ;
struct gendisk {int private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 struct tape_device* FUNC_3 (int ) ;
 int FUNC_4 (struct tape_device*) ;
 int FUNC_5 (struct tape_device*) ;
 int FUNC_6 (struct tape_device*) ;
 int FUNC_7 (struct tape_device*,int ) ;
 int FUNC_8 (struct gendisk*) ;

__attribute__((used)) static int
FUNC_9(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct gendisk * VAR_4 = VAR_2->bd_disk;
 struct tape_device * VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4->private_data);

 if (VAR_5->required_tapemarks) {
  FUNC_0(2, "TBLOCK: missing tapemarks\n");
  FUNC_2("%s: Opening the tape failed because of missing "
      "end-of-file marks\n", FUNC_1(&VAR_5->cdev->dev));
  VAR_6 = -VAR_0;
  goto put_device;
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto put_device;

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto release;





 FUNC_7(VAR_5, VAR_1);
 return 0;

release:
 FUNC_6(VAR_5);
 put_device:
 FUNC_5(VAR_5);
 return VAR_6;
}
