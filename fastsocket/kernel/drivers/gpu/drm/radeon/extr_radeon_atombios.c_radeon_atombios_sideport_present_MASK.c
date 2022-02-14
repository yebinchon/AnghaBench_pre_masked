
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ulBootUpSidePortClock; } ;
struct TYPE_4__ {int ulBootUpMemoryClock; } ;
union igp_info {TYPE_2__ info_2; TYPE_1__ info; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_mode_info {TYPE_3__* atom_context; } ;
struct radeon_device {scalar_t__ family; struct radeon_mode_info mode_info; } ;
struct TYPE_6__ {scalar_t__ bios; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int *,int*,int*,scalar_t__*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct radeon_device *VAR_3)
{
 struct radeon_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5 = FUNC_1(VAR_1, VAR_2);
 union igp_info *VAR_6;
 u8 VAR_7, VAR_8;
 u16 VAR_9;


 if (VAR_3->family == VAR_0)
  return 0;

 if (FUNC_2(VAR_4->atom_context, VAR_5, ((void*)0),
       &VAR_7, &VAR_8, &VAR_9)) {
  VAR_6 = (union igp_info *)(VAR_4->atom_context->bios +
          VAR_9);
  switch (VAR_8) {
  case 1:
   if (FUNC_3(VAR_6->info.ulBootUpMemoryClock))
    return 1;
   break;
  case 2:
   if (FUNC_3(VAR_6->info_2.ulBootUpSidePortClock))
    return 1;
   break;
  default:
   FUNC_0("Unsupported IGP table: %d %d\n", VAR_7, VAR_8);
   break;
  }
 }
 return 0;
}
