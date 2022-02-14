
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* asSpreadSpectrum; } ;
struct TYPE_11__ {TYPE_3__* asSpreadSpectrum; } ;
struct TYPE_9__ {TYPE_1__* asSpreadSpectrum; } ;
union asic_ss_info {TYPE_6__ info_3; TYPE_4__ info_2; TYPE_2__ info; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u32 ;
struct radeon_mode_info {TYPE_7__* atom_context; } ;
struct radeon_device {int flags; struct radeon_mode_info mode_info; } ;
struct radeon_atom_ss {void* rate; int type; void* percentage; } ;
struct TYPE_14__ {scalar_t__ bios; } ;
struct TYPE_12__ {int ucClockIndication; int usSpreadRateIn10Hz; int ucSpreadSpectrumMode; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
struct TYPE_10__ {int ucClockIndication; int usSpreadRateIn10Hz; int ucSpreadSpectrumMode; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
struct TYPE_8__ {int ucClockIndication; int usSpreadRateInKhz; int ucSpreadSpectrumMode; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
typedef int ATOM_COMMON_TABLE_HEADER ;
typedef int ATOM_ASIC_SS_ASSIGNMENT_V3 ;
typedef int ATOM_ASIC_SS_ASSIGNMENT_V2 ;
typedef int ATOM_ASIC_SS_ASSIGNMENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_7__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_atom_ss*,int ,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_atom_ss*,int) ;

bool FUNC_7(struct radeon_device *VAR_3,
          struct radeon_atom_ss *VAR_4,
          int VAR_5, u32 VAR_6)
{
 struct radeon_mode_info *VAR_7 = &VAR_3->mode_info;
 int VAR_8 = FUNC_1(VAR_1, VAR_0);
 uint16_t VAR_9, VAR_10;
 union asic_ss_info *VAR_11;
 uint8_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_5(VAR_4, 0, sizeof(struct radeon_atom_ss));
 if (FUNC_2(VAR_7->atom_context, VAR_8, &VAR_10,
       &VAR_12, &VAR_13, &VAR_9)) {

  VAR_11 =
   (union asic_ss_info *)(VAR_7->atom_context->bios + VAR_9);

  switch (VAR_12) {
  case 1:
   VAR_15 = (VAR_10 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT);

   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    if ((VAR_11->info.asSpreadSpectrum[VAR_14].ucClockIndication == VAR_5) &&
        (VAR_6 <= FUNC_4(VAR_11->info.asSpreadSpectrum[VAR_14].ulTargetClockRange))) {
     VAR_4->percentage =
      FUNC_3(VAR_11->info.asSpreadSpectrum[VAR_14].usSpreadSpectrumPercentage);
     VAR_4->type = VAR_11->info.asSpreadSpectrum[VAR_14].ucSpreadSpectrumMode;
     VAR_4->rate = FUNC_3(VAR_11->info.asSpreadSpectrum[VAR_14].usSpreadRateInKhz);
     return 1;
    }
   }
   break;
  case 2:
   VAR_15 = (VAR_10 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT_V2);
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    if ((VAR_11->info_2.asSpreadSpectrum[VAR_14].ucClockIndication == VAR_5) &&
        (VAR_6 <= FUNC_4(VAR_11->info_2.asSpreadSpectrum[VAR_14].ulTargetClockRange))) {
     VAR_4->percentage =
      FUNC_3(VAR_11->info_2.asSpreadSpectrum[VAR_14].usSpreadSpectrumPercentage);
     VAR_4->type = VAR_11->info_2.asSpreadSpectrum[VAR_14].ucSpreadSpectrumMode;
     VAR_4->rate = FUNC_3(VAR_11->info_2.asSpreadSpectrum[VAR_14].usSpreadRateIn10Hz);
     return 1;
    }
   }
   break;
  case 3:
   VAR_15 = (VAR_10 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT_V3);
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    if ((VAR_11->info_3.asSpreadSpectrum[VAR_14].ucClockIndication == VAR_5) &&
        (VAR_6 <= FUNC_4(VAR_11->info_3.asSpreadSpectrum[VAR_14].ulTargetClockRange))) {
     VAR_4->percentage =
      FUNC_3(VAR_11->info_3.asSpreadSpectrum[VAR_14].usSpreadSpectrumPercentage);
     VAR_4->type = VAR_11->info_3.asSpreadSpectrum[VAR_14].ucSpreadSpectrumMode;
     VAR_4->rate = FUNC_3(VAR_11->info_3.asSpreadSpectrum[VAR_14].usSpreadRateIn10Hz);
     if (VAR_3->flags & VAR_2)
      FUNC_6(VAR_3, VAR_4, VAR_5);
     return 1;
    }
   }
   break;
  default:
   FUNC_0("Unsupported ASIC_InternalSS_Info table: %d %d\n", VAR_12, VAR_13);
   break;
  }

 }
 return 0;
}
