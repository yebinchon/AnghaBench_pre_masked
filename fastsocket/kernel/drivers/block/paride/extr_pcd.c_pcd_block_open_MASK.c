
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcd_unit {int info; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pcd_unit* private_data; } ;


 int FUNC_0 (int *,struct block_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, fmode_t VAR_1)
{
 struct pcd_unit *VAR_2 = VAR_0->bd_disk->private_data;
 return FUNC_0(&VAR_2->info, VAR_0, VAR_1);
}
