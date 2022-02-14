
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_blktrans_ops {int (* open ) (struct mtd_blktrans_dev*) ;int owner; } ;
struct mtd_blktrans_dev {TYPE_2__* mtd; struct mtd_blktrans_ops* tr; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_4__ {int usecount; int index; } ;
struct TYPE_3__ {struct mtd_blktrans_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mtd_blktrans_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct mtd_blktrans_dev *VAR_3 = VAR_1->bd_disk->private_data;
 struct mtd_blktrans_ops *VAR_4 = VAR_3->tr;
 int VAR_5 = -VAR_0;

 if (!FUNC_0(((void*)0), VAR_3->mtd->index))
  goto out;

 if (!FUNC_4(VAR_4->owner))
  goto out_tr;




 VAR_3->mtd->usecount++;

 VAR_5 = 0;
 if (VAR_4->open && (VAR_5 = VAR_4->open(VAR_3))) {
  VAR_3->mtd->usecount--;
  FUNC_2(VAR_3->mtd);
 out_tr:
  FUNC_1(VAR_4->owner);
 }
 out:
 return VAR_5;
}
