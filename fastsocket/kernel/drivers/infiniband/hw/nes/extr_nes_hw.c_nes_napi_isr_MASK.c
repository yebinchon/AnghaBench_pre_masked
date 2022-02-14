
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nes_device {int napi_isr_ran; int int_stat; int int_req; size_t nic_ceq_index; scalar_t__ deepcq_count; int timer_int_req; int intf_int_req; scalar_t__ regs; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int et_use_adaptive_rx_coalesce; scalar_t__ et_pkt_rate_low; int timer_int_req; scalar_t__ et_rx_coalesce_usecs_irq; int * ceq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct nes_device*) ;
 int FUNC_1 (struct nes_device*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct nes_device *VAR_11)
{
 struct nes_adapter *VAR_12 = VAR_11->nesadapter;
 u32 VAR_13;

 if (VAR_11->napi_isr_ran) {

  VAR_13 = VAR_11->int_stat;
 } else {
  VAR_13 = FUNC_2(VAR_11->regs + VAR_8);
  VAR_11->int_stat = VAR_13;
  VAR_11->napi_isr_ran = 1;
 }

 VAR_13 &= VAR_11->int_req;

 if ((VAR_13) && ((VAR_13 & 0x0000ff00) == VAR_13)) {
  VAR_11->napi_isr_ran = 0;
  FUNC_3(VAR_11->regs + VAR_8,
   (VAR_13 &
   ~(VAR_2 | VAR_9 | VAR_3 | VAR_4 | VAR_5 | VAR_6)));


  FUNC_1(VAR_11, &VAR_11->nesadapter->ceq[VAR_11->nic_ceq_index]);

  if (FUNC_4((((VAR_12->et_rx_coalesce_usecs_irq) &&
     (!VAR_12->et_use_adaptive_rx_coalesce)) ||
     ((VAR_12->et_use_adaptive_rx_coalesce) &&
      (VAR_11->deepcq_count > VAR_12->et_pkt_rate_low))))) {
   if ((VAR_11->int_req & VAR_9) == 0) {

    VAR_11->int_req |= VAR_9;


    FUNC_3(VAR_11->regs+VAR_10,
      VAR_11->timer_int_req | ~(VAR_11->nesadapter->timer_int_req));
    FUNC_3(VAR_11->regs+VAR_0,
      ~(VAR_11->intf_int_req | VAR_1));
   }

   if (FUNC_4(VAR_12->et_use_adaptive_rx_coalesce))
   {
    FUNC_0(VAR_11);
   }

   FUNC_3(VAR_11->regs+VAR_7, 0x0000ffff | (~VAR_11->int_req));
  } else {

   VAR_11->int_req &= ~VAR_9;
   FUNC_3(VAR_11->regs+VAR_0, ~(VAR_11->intf_int_req));
   FUNC_3(VAR_11->regs+VAR_7, ~VAR_11->int_req);
  }
  VAR_11->deepcq_count = 0;
  return 1;
 } else {
  return 0;
 }
}
