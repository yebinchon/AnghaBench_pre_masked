
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {int policy; } ;
struct TYPE_2__ {int policy; } ;
struct gendisk {TYPE_1__ part0; } ;
struct disk_part_iter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct disk_part_iter*) ;
 int FUNC_1 (struct disk_part_iter*,struct gendisk*,int ) ;
 struct hd_struct* FUNC_2 (struct disk_part_iter*) ;
 int FUNC_3 (struct gendisk*,int) ;

void FUNC_4(struct gendisk *VAR_1, int VAR_2)
{
 struct disk_part_iter VAR_3;
 struct hd_struct *VAR_4;

 if (VAR_1->part0.policy != VAR_2) {
  FUNC_3(VAR_1, VAR_2);
  VAR_1->part0.policy = VAR_2;
 }

 FUNC_1(&VAR_3, VAR_1, VAR_0);
 while ((VAR_4 = FUNC_2(&VAR_3)))
  VAR_4->policy = VAR_2;
 FUNC_0(&VAR_3);
}
