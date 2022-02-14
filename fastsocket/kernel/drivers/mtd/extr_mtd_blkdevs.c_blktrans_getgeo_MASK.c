
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_blktrans_dev {TYPE_2__* tr; } ;
struct hd_geometry {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_4__ {int (* getgeo ) (struct mtd_blktrans_dev*,struct hd_geometry*) ;} ;
struct TYPE_3__ {struct mtd_blktrans_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_blktrans_dev*,struct hd_geometry*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 struct mtd_blktrans_dev *VAR_3 = VAR_1->bd_disk->private_data;

 if (VAR_3->tr->getgeo)
  return VAR_3->tr->getgeo(VAR_3, VAR_2);
 return -VAR_0;
}
