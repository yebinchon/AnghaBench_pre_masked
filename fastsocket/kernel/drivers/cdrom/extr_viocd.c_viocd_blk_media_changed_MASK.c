
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_info* private_data; } ;
struct disk_info {int viocd_info; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_0)
{
 struct disk_info *VAR_1 = VAR_0->private_data;
 return FUNC_0(&VAR_1->viocd_info);
}
