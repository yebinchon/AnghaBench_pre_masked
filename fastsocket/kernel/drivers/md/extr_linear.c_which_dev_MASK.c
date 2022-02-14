
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int raid_disks; int private; } ;
struct linear_conf {struct dev_info* disks; } ;
struct dev_info {scalar_t__ end_sector; } ;
typedef scalar_t__ sector_t ;


 struct linear_conf* FUNC_0 (int ) ;

__attribute__((used)) static inline struct dev_info *FUNC_1(struct mddev *VAR_0, sector_t VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct linear_conf *VAR_5;

 VAR_2 = 0;
 VAR_4 = VAR_0->raid_disks - 1;
 VAR_5 = FUNC_0(VAR_0->private);





 while (VAR_4 > VAR_2) {

  VAR_3 = (VAR_4 + VAR_2) / 2;
  if (VAR_1 < VAR_5->disks[VAR_3].end_sector)
   VAR_4 = VAR_3;
  else
   VAR_2 = VAR_3 + 1;
 }

 return VAR_5->disks + VAR_2;
}
