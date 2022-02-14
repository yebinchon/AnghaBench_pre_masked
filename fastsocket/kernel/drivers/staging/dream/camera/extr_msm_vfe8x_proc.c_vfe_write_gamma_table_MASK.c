
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;
typedef enum VFE_DMI_RAM_SEL { ____Placeholder_VFE_DMI_RAM_SEL } VFE_DMI_RAM_SEL ;
typedef int boolean ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(uint8_t VAR_12,
 boolean VAR_13, int16_t *VAR_14)
{
 uint16_t VAR_15;

 enum VFE_DMI_RAM_SEL VAR_16 = VAR_0;

 switch (VAR_12) {
 case 0:
  if (VAR_13 == 0)
   VAR_16 = VAR_1;
  else
   VAR_16 = VAR_2;
  break;

 case 1:
  if (VAR_13 == 0)
   VAR_16 = VAR_3;
  else
   VAR_16 = VAR_4;
  break;

 case 2:
  if (VAR_13 == 0)
   VAR_16 = VAR_5;
  else
   VAR_16 = VAR_6;
  break;

 default:
  break;
 }

 FUNC_0(VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  FUNC_1((uint32_t)(*VAR_14), VAR_11->vfebase + VAR_9);
  VAR_14++;
 }



 FUNC_1(VAR_8, VAR_11->vfebase + VAR_7);
}
