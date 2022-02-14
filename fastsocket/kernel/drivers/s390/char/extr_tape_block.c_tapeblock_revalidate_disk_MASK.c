
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ medium_changed; scalar_t__ block_position; int disk; } ;
struct tape_device {int bof; TYPE_2__ blk_data; TYPE_1__* cdev; } ;
struct gendisk {scalar_t__ private_data; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct tape_device*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct gendisk *VAR_5)
{
 struct tape_device * VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = (struct tape_device *) VAR_5->private_data;
 FUNC_0(!VAR_6);

 if (!VAR_6->blk_data.medium_changed)
  return 0;

 VAR_8 = FUNC_5(VAR_6, VAR_2, 1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_6, VAR_3, 1);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3("%s: Determining the size of the recorded area...\n",
  FUNC_2(&VAR_6->cdev->dev));
 FUNC_1(3, "Image file ends at %d\n", VAR_8);
 VAR_7 = VAR_8;



 FUNC_5(VAR_6, VAR_1, 1);

 VAR_8 = FUNC_5(VAR_6, VAR_3, 1);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_8 > VAR_7)
  return -VAR_0;

 FUNC_1(3, "Image file starts at %d\n", VAR_8);
 VAR_6->bof = VAR_8;
 VAR_7 -= VAR_8;

 FUNC_3("%s: The size of the recorded area is %i blocks\n",
  FUNC_2(&VAR_6->cdev->dev), VAR_7);
 FUNC_4(VAR_6->blk_data.disk,
  VAR_7*(VAR_4/512));

 VAR_6->blk_data.block_position = 0;
 VAR_6->blk_data.medium_changed = 0;
 return 0;
}
