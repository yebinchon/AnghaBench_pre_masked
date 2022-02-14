
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;
struct gendisk {struct tape_device* private_data; } ;
struct block_device {int bd_dev; struct gendisk* bd_disk; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,unsigned int,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(
 struct block_device * VAR_2,
 fmode_t VAR_3,
 unsigned int VAR_4,
 unsigned long VAR_5
) {
 int VAR_6;
 int VAR_7;
 struct gendisk *VAR_8 = VAR_2->bd_disk;
 struct tape_device *VAR_9;

 VAR_6 = 0;
 FUNC_0(!VAR_8);
 VAR_9 = VAR_8->private_data;
 FUNC_0(!VAR_9);
 VAR_7 = FUNC_2(VAR_2->bd_dev);

 FUNC_1(6, "tapeblock_ioctl(0x%0x)\n", VAR_4);
 FUNC_1(6, "device = %d:%d\n", VAR_1, VAR_7);

 switch (VAR_4) {

  case 0x5310:
   VAR_6 = -VAR_0;
   break;
  default:
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
