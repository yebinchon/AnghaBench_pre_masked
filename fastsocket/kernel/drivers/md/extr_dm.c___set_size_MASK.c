
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {TYPE_1__* bdev; int disk; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mapped_device *VAR_1, sector_t VAR_2)
{
 FUNC_1(VAR_1->disk, VAR_2);

 FUNC_0(VAR_1->bdev->bd_inode, (loff_t)VAR_2 << VAR_0);
}
