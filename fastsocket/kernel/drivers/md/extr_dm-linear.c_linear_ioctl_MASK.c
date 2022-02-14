
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linear_c {scalar_t__ start; struct dm_dev* dev; } ;
struct dm_target {scalar_t__ len; scalar_t__ private; } ;
struct dm_dev {int mode; TYPE_1__* bdev; } ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, unsigned int VAR_2,
   unsigned long VAR_3)
{
 struct linear_c *VAR_4 = (struct linear_c *) VAR_1->private;
 struct dm_dev *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;




 if (VAR_4->start ||
     VAR_1->len != FUNC_1(VAR_5->bdev->bd_inode) >> VAR_0)
  VAR_6 = FUNC_2(((void*)0), VAR_2);

 return VAR_6 ? : FUNC_0(VAR_5->bdev, VAR_5->mode, VAR_2, VAR_3);
}
