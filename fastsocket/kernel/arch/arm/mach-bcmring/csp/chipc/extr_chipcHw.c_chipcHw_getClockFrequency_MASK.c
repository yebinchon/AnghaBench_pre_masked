
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int chipcHw_freq ;
typedef int chipcHw_CLOCK_e ;
struct TYPE_2__ {int PLLPreDivider; int PLLPreDivider2; int DDRClock; int ARMClock; int ESWClock; int VPMClock; int ESW125Clock; int UARTClock; int SDIO0Clock; int SDIO1Clock; int SPIClock; int ETMClock; int USBClock; int LCDClock; int APMClock; int ACLKClock; int OTPClock; int I2CClock; int I2S0Clock; int RTBUSClock; int APM100Clock; int TSCClock; int LEDClock; int I2S1Clock; int PLLDivider; } ;
 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int volatile) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_14 ;

chipcHw_freq FUNC_2(chipcHw_CLOCK_e VAR_15
    ) {
 volatile uint32_t *VAR_16 = (uint32_t *) 0x0;
 volatile uint32_t *VAR_17 = (uint32_t *) 0x0;
 volatile uint32_t *VAR_18 = (uint32_t *) 0x0;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21 = 0;
 uint32_t VAR_22 = 0;


 if ((VAR_14->PLLPreDivider & VAR_8) != VAR_7) {
  uint64_t VAR_23 = 0;

  VAR_19 = VAR_13 *
      FUNC_0(VAR_10, VAR_11) *
      ((VAR_14->PLLPreDivider & VAR_6) >>
       VAR_9);


  VAR_23 = (uint64_t) VAR_13 *
   (uint64_t) VAR_5 *
   FUNC_0(VAR_10, (VAR_11 * (uint64_t) VAR_4));
  VAR_19 += (uint32_t) VAR_23;
 } else {
  VAR_19 = VAR_13 *
      FUNC_0(VAR_10, VAR_11) *
      ((VAR_14->PLLPreDivider & VAR_6) >>
       VAR_9);
 }
 VAR_20 =
     VAR_13 *
   FUNC_0(VAR_10, VAR_11) *
     ((VAR_14->PLLPreDivider2 & VAR_6) >>
      VAR_9);

 switch (VAR_15) {
 case 145:
  VAR_16 = &VAR_14->DDRClock;
  VAR_22 = VAR_19;
  break;
 case 147:
  VAR_16 = &VAR_14->ARMClock;
  VAR_22 = VAR_19;
  break;
 case 144:
  VAR_16 = &VAR_14->ESWClock;
  VAR_22 = VAR_19;
  break;
 case 128:
  VAR_16 = &VAR_14->VPMClock;
  VAR_22 = VAR_19;
  break;
 case 143:
  VAR_16 = &VAR_14->ESW125Clock;
  VAR_22 = VAR_19;
  break;
 case 130:
  VAR_16 = &VAR_14->UARTClock;
  VAR_22 = VAR_19;
  break;
 case 134:
  VAR_16 = &VAR_14->SDIO0Clock;
  VAR_22 = VAR_19;
  break;
 case 133:
  VAR_16 = &VAR_14->SDIO1Clock;
  VAR_22 = VAR_19;
  break;
 case 132:
  VAR_16 = &VAR_14->SPIClock;
  VAR_22 = VAR_19;
  break;
 case 142:
  VAR_16 = &VAR_14->ETMClock;
  VAR_22 = VAR_19;
  break;
 case 129:
  VAR_16 = &VAR_14->USBClock;
  VAR_22 = VAR_20;
  break;
 case 138:
  VAR_16 = &VAR_14->LCDClock;
  VAR_22 = VAR_20;
  break;
 case 149:
  VAR_16 = &VAR_14->APMClock;
  VAR_22 = VAR_20;
  break;
 case 146:
  VAR_17 = &VAR_14->ACLKClock;
  VAR_18 = &VAR_14->ARMClock;
  VAR_22 = VAR_19;
  VAR_21 = 150;
  break;
 case 136:
  VAR_17 = &VAR_14->OTPClock;
  break;
 case 141:
  VAR_17 = &VAR_14->I2CClock;
  break;
 case 140:
  VAR_17 = &VAR_14->I2S0Clock;
  break;
 case 135:
  VAR_17 = &VAR_14->RTBUSClock;
  VAR_18 = &VAR_14->ACLKClock;
  VAR_21 = 151;
  break;
 case 148:
  VAR_17 = &VAR_14->APM100Clock;
  VAR_18 = &VAR_14->APMClock;
  VAR_22 = VAR_20;
  VAR_21 = 150;
  break;
 case 131:
  VAR_17 = &VAR_14->TSCClock;
  break;
 case 137:
  VAR_17 = &VAR_14->LEDClock;
  break;
 case 139:
  VAR_17 = &VAR_14->I2S1Clock;
  break;
 }

 if (VAR_16) {

  if (*VAR_16 & VAR_2) {

   return VAR_13;
  } else if (VAR_15 == 145) {

   return FUNC_0 (VAR_22, (((VAR_14->PLLDivider & 0xFF000000) >> 24) ? ((VAR_14->PLLDivider & 0xFF000000) >> 24) : 256));
  } else {

   if ((VAR_16 == &VAR_14->LCDClock) && (FUNC_1() != VAR_12)) {
    VAR_22 >>= 1;
   }

   return FUNC_0(VAR_22, ((*VAR_16 & VAR_3) ? (*VAR_16 & VAR_3) : 256));
  }
 } else if (VAR_17) {

  uint32_t VAR_24;
  uint32_t VAR_25 = 0;

  if (*VAR_17 & VAR_0) {

   return VAR_13;
  } else if (VAR_18) {

   switch (VAR_21) {
   case 150:
    if (*VAR_18 & VAR_2) {

     VAR_25 = VAR_13;
    } else {

     VAR_24 = *VAR_18 & VAR_3;
     VAR_25 = VAR_24 ? FUNC_0(VAR_22, VAR_24) : 0;
    }
    break;
   case 151:
    if (VAR_18 == (uint32_t *) &VAR_14->ACLKClock) {
     VAR_25 = FUNC_2 (146);
    } else {
     if (*VAR_18 & VAR_0) {

      VAR_25 = VAR_13;
     } else {

      VAR_24 = *VAR_18 & VAR_1;
      VAR_25 = FUNC_0 (VAR_13, (VAR_24 ? VAR_24 : 256));
     }
    }
    break;
   }
  } else {

   VAR_25 = VAR_13;
  }

  VAR_24 = *VAR_17 & VAR_1;
  return FUNC_0(VAR_25, (VAR_24 ? VAR_24 : 256));
 }
 return 0;
}
