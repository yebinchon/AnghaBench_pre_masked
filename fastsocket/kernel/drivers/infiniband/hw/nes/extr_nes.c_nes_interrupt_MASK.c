
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nes_device {int int_req; int timer_int_req; int intf_int_req; int int_stat; int napi_isr_ran; int dpc_tasklet; scalar_t__ regs; TYPE_1__* nesadapter; scalar_t__ msi_enabled; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ hw_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct nes_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct nes_device *VAR_12 = (struct nes_device *)VAR_11;
 int VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;

 if (VAR_12->msi_enabled) {

  VAR_13 = 1;
 } else {
  if (FUNC_4(VAR_12->nesadapter->hw_rev == VAR_2)) {


   VAR_14 = FUNC_1(VAR_12->regs + VAR_5);
   if (VAR_14 & 0x80000000) {

    VAR_16 = FUNC_1(VAR_12->regs + VAR_7);
    VAR_15 = VAR_12->int_req;
    if (VAR_16&VAR_15) {

     if ((VAR_16&VAR_15) & (~(VAR_8|VAR_4))) {
      VAR_13 = 1;
     } else {
      if (((VAR_16 & VAR_15) & VAR_8) == VAR_8) {

       VAR_18 = FUNC_1(VAR_12->regs + VAR_9);
       if ((VAR_18 & VAR_12->timer_int_req) != 0) {
        VAR_13 = 1;
       }
      }
      if ((((VAR_16 & VAR_15) & VAR_4) == VAR_4) &&
        (VAR_13 == 0)) {
       VAR_17 = FUNC_1(VAR_12->regs+VAR_3);
       if ((VAR_17 & VAR_12->intf_int_req) != 0) {
        VAR_13 = 1;
       }
      }
     }
     if (VAR_13) {
      FUNC_2(VAR_12->regs+VAR_5, VAR_14 & (~0x80000000));
      VAR_14 = FUNC_1(VAR_12->regs+VAR_5);

      VAR_12->int_stat = VAR_16;
      VAR_12->napi_isr_ran = 1;
     }
    }
   }
  } else {
   VAR_13 = FUNC_1(VAR_12->regs+VAR_6);
  }
 }

 if (VAR_13) {

  if (FUNC_0(VAR_12) == 0) {
   FUNC_3(&VAR_12->dpc_tasklet);

  }
  return VAR_0;
 } else {
  return VAR_1;
 }
}
