
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int line; } ;
struct mpsc_port_info {int mpsc_max_idle; scalar_t__ mpsc_base; scalar_t__ MPSC_CHR_2_m; scalar_t__ MPSC_CHR_1_m; scalar_t__ mirror_regs; int default_baud; TYPE_2__* shared_regs; TYPE_1__ port; } ;
struct TYPE_4__ {int MPSC_MRR_m; int MPSC_RCRR_m; int MPSC_TCRR_m; scalar_t__ mpsc_routing_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct mpsc_port_info*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mpsc_port_info *VAR_15)
{
 u32 VAR_16;

 FUNC_1("mpsc_hw_init[%d]: Initializing hardware\n", VAR_15->port.line);


 if (VAR_15->mirror_regs) {
  VAR_16 = VAR_15->shared_regs->MPSC_MRR_m;
  VAR_16 &= ~0x1c7;
  VAR_15->shared_regs->MPSC_MRR_m = VAR_16;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_12);

  VAR_16 = VAR_15->shared_regs->MPSC_RCRR_m;
  VAR_16 = (VAR_16 & ~0xf0f) | 0x100;
  VAR_15->shared_regs->MPSC_RCRR_m = VAR_16;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_13);

  VAR_16 = VAR_15->shared_regs->MPSC_TCRR_m;
  VAR_16 = (VAR_16 & ~0xf0f) | 0x100;
  VAR_15->shared_regs->MPSC_TCRR_m = VAR_16;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_14);
 } else {
  VAR_16 = FUNC_2(VAR_15->shared_regs->mpsc_routing_base + VAR_12);
  VAR_16 &= ~0x1c7;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_12);

  VAR_16 = FUNC_2(VAR_15->shared_regs->mpsc_routing_base + VAR_13);
  VAR_16 = (VAR_16 & ~0xf0f) | 0x100;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_13);

  VAR_16 = FUNC_2(VAR_15->shared_regs->mpsc_routing_base + VAR_14);
  VAR_16 = (VAR_16 & ~0xf0f) | 0x100;
  FUNC_3(VAR_16, VAR_15->shared_regs->mpsc_routing_base + VAR_14);
 }


 FUNC_3(0x000004c4, VAR_15->mpsc_base + VAR_11);


 FUNC_3(0x04400400, VAR_15->mpsc_base + VAR_10);
 FUNC_0(VAR_15, VAR_15->default_baud);

 if (VAR_15->mirror_regs) {
  VAR_15->MPSC_CHR_1_m = 0;
  VAR_15->MPSC_CHR_2_m = 0;
 }
 FUNC_3(0, VAR_15->mpsc_base + VAR_0);
 FUNC_3(0, VAR_15->mpsc_base + VAR_2);
 FUNC_3(VAR_15->mpsc_max_idle, VAR_15->mpsc_base + VAR_3);
 FUNC_3(0, VAR_15->mpsc_base + VAR_4);
 FUNC_3(0, VAR_15->mpsc_base + VAR_5);
 FUNC_3(0, VAR_15->mpsc_base + VAR_6);
 FUNC_3(0, VAR_15->mpsc_base + VAR_7);
 FUNC_3(0, VAR_15->mpsc_base + VAR_8);
 FUNC_3(0, VAR_15->mpsc_base + VAR_9);
 FUNC_3(0, VAR_15->mpsc_base + VAR_1);
}
