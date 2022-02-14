
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_mode_info {TYPE_1__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct _ATOM_ANALOG_TV_INFO {int ucTV_BootUpDefaultStandard; } ;
typedef enum radeon_tv_std { ____Placeholder_radeon_tv_std } radeon_tv_std ;
struct TYPE_2__ {scalar_t__ bios; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *,int *,int *,scalar_t__*) ;

enum radeon_tv_std
FUNC_3(struct radeon_device *VAR_10)
{
 struct radeon_mode_info *VAR_11 = &VAR_10->mode_info;
 int VAR_12 = FUNC_1(VAR_1, VAR_0);
 uint16_t VAR_13;
 uint8_t VAR_14, VAR_15;
 struct _ATOM_ANALOG_TV_INFO *VAR_16;
 enum radeon_tv_std VAR_17 = VAR_2;

 if (FUNC_2(VAR_11->atom_context, VAR_12, ((void*)0),
       &VAR_14, &VAR_15, &VAR_13)) {

  VAR_16 = (struct _ATOM_ANALOG_TV_INFO *)
   (VAR_11->atom_context->bios + VAR_13);

  switch (VAR_16->ucTV_BootUpDefaultStandard) {
  case 135:
   VAR_17 = VAR_2;
   FUNC_0("Default TV standard: NTSC\n");
   break;
  case 134:
   VAR_17 = VAR_3;
   FUNC_0("Default TV standard: NTSC-J\n");
   break;
  case 133:
   VAR_17 = VAR_4;
   FUNC_0("Default TV standard: PAL\n");
   break;
  case 130:
   VAR_17 = VAR_7;
   FUNC_0("Default TV standard: PAL-M\n");
   break;
  case 129:
   VAR_17 = VAR_8;
   FUNC_0("Default TV standard: PAL-N\n");
   break;
  case 131:
   VAR_17 = VAR_6;
   FUNC_0("Default TV standard: PAL-CN\n");
   break;
  case 132:
   VAR_17 = VAR_5;
   FUNC_0("Default TV standard: PAL-60\n");
   break;
  case 128:
   VAR_17 = VAR_9;
   FUNC_0("Default TV standard: SECAM\n");
   break;
  default:
   VAR_17 = VAR_2;
   FUNC_0("Unknown TV standard; defaulting to NTSC\n");
   break;
  }
 }
 return VAR_17;
}
