
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ucVoltageType; void* usVoltageLevel; int ucVoltageMode; } ;
struct TYPE_6__ {int ucVoltageType; void* usVoltageLevel; int ucVoltageMode; } ;
struct TYPE_5__ {int ucVoltageType; int ucVoltageIndex; int ucVoltageMode; } ;
union set_voltage {TYPE_3__ v3; TYPE_2__ v2; TYPE_1__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int atom_context; } ;
struct radeon_device {TYPE_4__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 void* FUNC_4 (int) ;

void FUNC_5(struct radeon_device *VAR_5, u16 VAR_6, u8 VAR_7)
{
 union set_voltage VAR_8;
 int VAR_9 = FUNC_1(VAR_1, VAR_4);
 u8 VAR_10, VAR_11, VAR_12 = VAR_6;

 if (!FUNC_3(VAR_5->mode_info.atom_context, VAR_9, &VAR_10, &VAR_11))
  return;


 if (VAR_6 == 0xff01)
  return;

 switch (VAR_11) {
 case 1:
  VAR_8.v1.ucVoltageType = VAR_7;
  VAR_8.v1.ucVoltageMode = VAR_2;
  VAR_8.v1.ucVoltageIndex = VAR_12;
  break;
 case 2:
  VAR_8.v2.ucVoltageType = VAR_7;
  VAR_8.v2.ucVoltageMode = VAR_3;
  VAR_8.v2.usVoltageLevel = FUNC_4(VAR_6);
  break;
 case 3:
  VAR_8.v3.ucVoltageType = VAR_7;
  VAR_8.v3.ucVoltageMode = VAR_0;
  VAR_8.v3.usVoltageLevel = FUNC_4(VAR_6);
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_10, VAR_11);
  return;
 }

 FUNC_2(VAR_5->mode_info.atom_context, VAR_9, (uint32_t *)&VAR_8);
}
