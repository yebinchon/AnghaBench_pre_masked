
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_rdev {TYPE_1__* mddev; int sysfs_state; int badblocks; scalar_t__ data_offset; scalar_t__ new_data_offset; } ;
typedef int sector_t ;
struct TYPE_2__ {int thread; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct md_rdev *VAR_1, sector_t VAR_2, int VAR_3,
         int VAR_4)
{
 int VAR_5;
 if (VAR_4)
  VAR_2 += VAR_1->new_data_offset;
 else
  VAR_2 += VAR_1->data_offset;
 VAR_5 = FUNC_0(&VAR_1->badblocks,
         VAR_2, VAR_3, 0);
 if (VAR_5) {

  FUNC_3(VAR_1->sysfs_state);
  FUNC_2(VAR_0, &VAR_1->mddev->flags);
  FUNC_1(VAR_1->mddev->thread);
 }
 return VAR_5;
}
