
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3_storage_device {size_t region_idx; int blk_size; TYPE_1__* regions; } ;
struct file {scalar_t__ f_pos; TYPE_2__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int i_mutex; } ;
struct TYPE_5__ {TYPE_3__* host; } ;
struct TYPE_4__ {int size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ps3_storage_device* VAR_1 ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct ps3_storage_device *VAR_5 = VAR_1;
 loff_t VAR_6;

 FUNC_0(&VAR_2->f_mapping->host->i_mutex);
 switch (VAR_4) {
 case 1:
  VAR_3 += VAR_2->f_pos;
  break;
 case 2:
  VAR_3 += VAR_5->regions[VAR_5->region_idx].size*VAR_5->blk_size;
  break;
 }
 if (VAR_3 < 0) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_2->f_pos = VAR_3;
 VAR_6 = VAR_2->f_pos;

out:
 FUNC_1(&VAR_2->f_mapping->host->i_mutex);
 return VAR_6;
}
