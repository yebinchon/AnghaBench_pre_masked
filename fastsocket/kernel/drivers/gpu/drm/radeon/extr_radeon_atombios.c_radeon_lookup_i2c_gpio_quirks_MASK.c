
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radeon_device {scalar_t__ family; } ;
struct TYPE_4__ {int ucAccess; } ;
struct TYPE_5__ {int ucClkMaskShift; int ucDataMaskShift; int ucDataEnShift; int ucDataY_Shift; int ucDataA_Shift; TYPE_1__ sucI2cId; int usClkMaskRegisterIndex; } ;
typedef TYPE_2__ ATOM_GPIO_I2C_ASSIGMENT ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3,
       ATOM_GPIO_I2C_ASSIGMENT *VAR_4,
       u8 VAR_5)
{

 if ((VAR_3->family == VAR_0) ||
     (VAR_3->family == VAR_1) ||
     (VAR_3->family == VAR_2)) {
  if ((FUNC_2(VAR_4->usClkMaskRegisterIndex) == 0x0018) ||
      (FUNC_2(VAR_4->usClkMaskRegisterIndex) == 0x0019) ||
      (FUNC_2(VAR_4->usClkMaskRegisterIndex) == 0x001a)) {
   VAR_4->ucClkMaskShift = 0x19;
   VAR_4->ucDataMaskShift = 0x18;
  }
 }


 if (FUNC_1(VAR_3)) {
  if ((VAR_5 == 7) &&
      (FUNC_2(VAR_4->usClkMaskRegisterIndex) == 0x1936) &&
      (VAR_4->sucI2cId.ucAccess == 0)) {
   VAR_4->sucI2cId.ucAccess = 0x97;
   VAR_4->ucDataMaskShift = 8;
   VAR_4->ucDataEnShift = 8;
   VAR_4->ucDataY_Shift = 8;
   VAR_4->ucDataA_Shift = 8;
  }
 }


 if (FUNC_0(VAR_3)) {
  if ((VAR_5 == 4) &&
      (FUNC_2(VAR_4->usClkMaskRegisterIndex) == 0x1fda) &&
      (VAR_4->sucI2cId.ucAccess == 0x94))
   VAR_4->sucI2cId.ucAccess = 0x14;
 }
}
