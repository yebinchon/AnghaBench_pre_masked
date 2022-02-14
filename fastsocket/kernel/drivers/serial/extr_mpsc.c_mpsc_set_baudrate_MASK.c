
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int uartclk; } ;
struct mpsc_port_info {int BRG_BCR_m; scalar_t__ brg_base; scalar_t__ mirror_regs; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mpsc_port_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_1->port.uartclk / (VAR_2 << 5)) - 1;
 u32 VAR_4;

 FUNC_0(VAR_1);
 VAR_4 = (VAR_1->mirror_regs) ? VAR_1->BRG_BCR_m : FUNC_2(VAR_1->brg_base + VAR_0);
 VAR_4 = (VAR_4 & 0xffff0000) | (VAR_3 & 0xffff);

 if (VAR_1->mirror_regs)
  VAR_1->BRG_BCR_m = VAR_4;
 FUNC_3(VAR_4, VAR_1->brg_base + VAR_0);
 FUNC_1(VAR_1);
}
