
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int usBootUpVDDCIVoltage; } ;
struct TYPE_4__ {int usBootUpVDDCVoltage; } ;
union firmware_info {TYPE_2__ info_22; TYPE_1__ info_14; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_mode_info {TYPE_3__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct TYPE_6__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int *,int*,int*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2,
       u16 *VAR_3, u16 *VAR_4)
{
 struct radeon_mode_info *VAR_5 = &VAR_2->mode_info;
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_7, VAR_8;
 u16 VAR_9;
 union firmware_info *VAR_10;

 *VAR_3 = 0;
 *VAR_4 = 0;

 if (FUNC_1(VAR_5->atom_context, VAR_6, ((void*)0),
       &VAR_7, &VAR_8, &VAR_9)) {
  VAR_10 =
   (union firmware_info *)(VAR_5->atom_context->bios +
      VAR_9);
  *VAR_3 = FUNC_2(VAR_10->info_14.usBootUpVDDCVoltage);
  if ((VAR_7 == 2) && (VAR_8 >= 2))
   *VAR_4 = FUNC_2(VAR_10->info_22.usBootUpVDDCIVoltage);
 }
}
