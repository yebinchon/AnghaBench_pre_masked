
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_lun {scalar_t__ readonly; scalar_t__ changed; scalar_t__ removable; struct ub_dev* udev; } ;
struct ub_dev {int openc; int poison; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct ub_lun* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_4 (struct ub_dev*) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_6, fmode_t VAR_7)
{
 struct ub_lun *VAR_8 = VAR_6->bd_disk->private_data;
 struct ub_dev *VAR_9 = VAR_8->udev;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_2(&VAR_5, VAR_10);
 if (FUNC_0(&VAR_9->poison)) {
  FUNC_3(&VAR_5, VAR_10);
  return -VAR_1;
 }
 VAR_9->openc++;
 FUNC_3(&VAR_5, VAR_10);

 if (VAR_8->removable || VAR_8->readonly)
  FUNC_1(VAR_6);






 if (VAR_8->removable && VAR_8->changed && !(VAR_7 & VAR_3)) {
  VAR_11 = -VAR_0;
  goto err_open;
 }

 if (VAR_8->readonly && (VAR_7 & VAR_4)) {
  VAR_11 = -VAR_2;
  goto err_open;
 }

 return 0;

err_open:
 FUNC_4(VAR_9);
 return VAR_11;
}
