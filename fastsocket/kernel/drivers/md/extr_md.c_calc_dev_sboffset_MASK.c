
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_rdev {TYPE_1__* bdev; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline sector_t FUNC_2(struct md_rdev *VAR_0)
{
 sector_t VAR_1 = FUNC_1(VAR_0->bdev->bd_inode) / 512;
 return FUNC_0(VAR_1);
}
