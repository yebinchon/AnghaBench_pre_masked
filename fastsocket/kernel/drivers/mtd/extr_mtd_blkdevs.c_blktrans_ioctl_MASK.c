
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_blktrans_ops {int (* flush ) (struct mtd_blktrans_dev*) ;} ;
struct mtd_blktrans_dev {struct mtd_blktrans_ops* tr; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct mtd_blktrans_dev* private_data; } ;



 int VAR_0 ;
 int FUNC_0 (struct mtd_blktrans_dev*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, fmode_t VAR_2,
         unsigned int VAR_3, unsigned long VAR_4)
{
 struct mtd_blktrans_dev *VAR_5 = VAR_1->bd_disk->private_data;
 struct mtd_blktrans_ops *VAR_6 = VAR_5->tr;

 switch (VAR_3) {
 case 128:
  if (VAR_6->flush)
   return VAR_6->flush(VAR_5);

  return 0;
 default:
  return -VAR_0;
 }
}
