
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int waitm; int pause; int wr_hld; int rd_hld; int we; int oe; scalar_t__ adr; void* ce; scalar_t__ wait; scalar_t__ page; scalar_t__ ale; scalar_t__ pages; scalar_t__ pagem; } ;
union cvmx_mio_boot_reg_timx {int u64; TYPE_2__ s; } ;
struct octeon_cf_data {int base_region; scalar_t__ dma_engine; } ;
struct ata_timing {int setup; int active; int act8b; int cycle; } ;
struct ata_port {TYPE_1__* dev; } ;
struct ata_device {int pio_mode; } ;
struct TYPE_3__ {struct octeon_cf_data* platform_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_device*) ;
 scalar_t__ FUNC_3 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 long long FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct octeon_cf_data *VAR_2 = VAR_0->dev->platform_data;
 union cvmx_mio_boot_reg_timx VAR_3;
 int VAR_4 = VAR_2->base_region;
 int VAR_5;
 struct ata_timing VAR_6;

 int VAR_7;
 int VAR_8;
 int VAR_9;

 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_5 = (int)(2000000000000LL / FUNC_8());

 if (FUNC_3(VAR_1, VAR_1->pio_mode, &VAR_6, VAR_5, VAR_5))
  FUNC_0();

 VAR_10 = VAR_6.setup;
 if (VAR_10)
  VAR_10--;
 VAR_11 = VAR_6.active;
 if (VAR_11)
  VAR_11--;
 VAR_12 = VAR_6.act8b;
 if (VAR_12)
  VAR_12--;

 VAR_8 = FUNC_6(2, 20);
 if (VAR_8)
  VAR_8--;

 VAR_9 = VAR_6.cycle - VAR_6.active - VAR_6.setup - VAR_8;
 if (VAR_9)
  VAR_9--;

 FUNC_7(VAR_4);
 if (VAR_2->dma_engine >= 0)

  FUNC_7(VAR_4 + 1);


 VAR_7 = FUNC_2(VAR_1);

 VAR_3.u64 = FUNC_4(FUNC_1(VAR_4));

 VAR_3.s.pagem = 0;

 VAR_3.s.waitm = VAR_7;

 VAR_3.s.pages = 0;

 VAR_3.s.ale = 0;

 VAR_3.s.page = 0;

 VAR_3.s.wait = 0;

 VAR_3.s.pause = VAR_9;

 VAR_3.s.wr_hld = VAR_8;

 VAR_3.s.rd_hld = VAR_8;

 VAR_3.s.we = VAR_11;

 VAR_3.s.oe = VAR_11;

 VAR_3.s.ce = FUNC_6(2, 5);

 VAR_3.s.adr = 0;


 FUNC_5(FUNC_1(VAR_4), VAR_3.u64);
 if (VAR_2->dma_engine >= 0)

  FUNC_5(FUNC_1(VAR_4 + 1), VAR_3.u64);
}
