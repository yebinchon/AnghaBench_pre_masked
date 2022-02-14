
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_4__ {TYPE_1__* fs_devices; } ;
struct TYPE_3__ {int rw_devices; int missing_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static u64 FUNC_2(struct btrfs_root *VAR_4, u64 VAR_5)
{
 u64 VAR_6;
 u64 VAR_7;





 VAR_7 = FUNC_1(VAR_4->fs_info, VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);






 VAR_6 = VAR_4->fs_info->fs_devices->rw_devices +
  VAR_4->fs_info->fs_devices->missing_devices;

 VAR_7 = VAR_1 |
  VAR_2 | VAR_3;

 if (VAR_6 == 1) {
  VAR_7 |= VAR_0;
  VAR_7 = VAR_5 & ~VAR_7;


  if (VAR_5 & VAR_1)
   return VAR_7;


  if (VAR_5 & (VAR_2 |
        VAR_3))
   return VAR_7 | VAR_0;
 } else {

  if (VAR_5 & VAR_7)
   return VAR_5;

  VAR_7 |= VAR_0;
  VAR_7 = VAR_5 & ~VAR_7;


  if (VAR_5 & VAR_0)
   return VAR_7 | VAR_2;


 }

 return VAR_5;
}
