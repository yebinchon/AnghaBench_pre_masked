
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_3__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int line; int irq; int * ops; scalar_t__ mapbase; scalar_t__ membase; int fifosize; int type; int iotype; int uartclk; } ;
struct mpsc_port_info {TYPE_2__ port; int * shared_regs; int BRG_BCR_m; int MPSC_MPCR_m; int MPSC_CHR_10_m; int MPSC_CHR_2_m; int MPSC_CHR_1_m; int default_flow; int default_parity; int default_bits; int default_baud; int mpsc_max_idle; int brg_clk_src; int brg_can_tune; int cache_mgmt; int mirror_regs; scalar_t__ mpsc_base; } ;
struct mpsc_pdata {int bcr_val; int mpcr_val; int chr_10_val; int chr_2_val; int chr_1_val; int default_flow; int default_parity; int default_bits; int default_baud; int max_idle; int brg_clk_src; int brg_can_tune; int cache_mgmt; int mirror_regs; int brg_clk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct platform_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct mpsc_port_info *VAR_5,
  struct platform_device *VAR_6, int VAR_7)
{
 struct mpsc_pdata *VAR_8;

 VAR_8 = (struct mpsc_pdata *)VAR_6->dev.platform_data;

 VAR_5->port.uartclk = VAR_8->brg_clk_freq;
 VAR_5->port.iotype = VAR_2;
 VAR_5->port.line = VAR_7;
 VAR_5->port.type = VAR_1;
 VAR_5->port.fifosize = VAR_0;
 VAR_5->port.membase = VAR_5->mpsc_base;
 VAR_5->port.mapbase = (ulong)VAR_5->mpsc_base;
 VAR_5->port.ops = &VAR_3;

 VAR_5->mirror_regs = VAR_8->mirror_regs;
 VAR_5->cache_mgmt = VAR_8->cache_mgmt;
 VAR_5->brg_can_tune = VAR_8->brg_can_tune;
 VAR_5->brg_clk_src = VAR_8->brg_clk_src;
 VAR_5->mpsc_max_idle = VAR_8->max_idle;
 VAR_5->default_baud = VAR_8->default_baud;
 VAR_5->default_bits = VAR_8->default_bits;
 VAR_5->default_parity = VAR_8->default_parity;
 VAR_5->default_flow = VAR_8->default_flow;


 VAR_5->MPSC_CHR_1_m = VAR_8->chr_1_val;
 VAR_5->MPSC_CHR_2_m = VAR_8->chr_2_val;
 VAR_5->MPSC_CHR_10_m = VAR_8->chr_10_val;
 VAR_5->MPSC_MPCR_m = VAR_8->mpcr_val;
 VAR_5->BRG_BCR_m = VAR_8->bcr_val;

 VAR_5->shared_regs = &VAR_4;

 VAR_5->port.irq = FUNC_0(VAR_6, 0);
}
