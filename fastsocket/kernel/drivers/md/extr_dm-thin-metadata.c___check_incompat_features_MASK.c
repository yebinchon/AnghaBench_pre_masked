
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct thin_disk_superblock {int compat_ro_flags; int incompat_flags; } ;
struct dm_pool_metadata {TYPE_1__* bdev; } ;
struct TYPE_2__ {int bd_disk; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct thin_disk_superblock *VAR_3,
         struct dm_pool_metadata *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_2(VAR_3->incompat_flags) & ~VAR_2;
 if (VAR_5) {
  FUNC_0("could not access metadata due to unsupported optional features (%lx).",
        (unsigned long)VAR_5);
  return -VAR_0;
 }




 if (FUNC_1(VAR_4->bdev->bd_disk))
  return 0;

 VAR_5 = FUNC_2(VAR_3->compat_ro_flags) & ~VAR_1;
 if (VAR_5) {
  FUNC_0("could not access metadata RDWR due to unsupported optional features (%lx).",
        (unsigned long)VAR_5);
  return -VAR_0;
 }

 return 0;
}
