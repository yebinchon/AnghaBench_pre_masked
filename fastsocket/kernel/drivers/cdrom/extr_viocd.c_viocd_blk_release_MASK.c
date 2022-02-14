
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_info* private_data; } ;
struct disk_info {int viocd_info; } ;
typedef int fmode_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct disk_info *VAR_2 = VAR_0->private_data;
 FUNC_0(&VAR_2->viocd_info, VAR_1);
 return 0;
}
