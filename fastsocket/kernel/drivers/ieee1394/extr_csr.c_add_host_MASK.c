
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int split_timeout_lo; int bus_manager_id; int bandwidth_available; int channels_available_hi; int broadcast_channel; int max_rec; int max_rom; int generation; int cyc_clk_acc; int lnk_spd; int guid_hi; int guid_lo; TYPE_2__* rom; int channels_available_lo; scalar_t__ bus_time; scalar_t__ cycle_time; scalar_t__ split_timeout_hi; scalar_t__ node_ids; scalar_t__ state; int lock; } ;
struct hpsb_host {int update_config_rom; TYPE_3__ csr; TYPE_1__* driver; scalar_t__ is_irm; } ;
struct csr1212_keyval {int dummy; } ;
typedef int quadlet_t ;
struct TYPE_5__ {struct csr1212_keyval* root_kv; } ;
struct TYPE_4__ {int (* hw_csr_reg ) (struct hpsb_host*,int,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (char*) ;
 int VAR_20 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct csr1212_keyval*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_5 (int *,struct hpsb_host*,int *,scalar_t__,scalar_t__) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hpsb_host*,int,int,int ) ;

__attribute__((used)) static void FUNC_8(struct hpsb_host *VAR_29)
{
 struct csr1212_keyval *VAR_30;
 quadlet_t VAR_31[VAR_2];

 FUNC_5(&VAR_22, VAR_29, &VAR_28,
    VAR_15,
    VAR_15 + VAR_4);
 FUNC_5(&VAR_22, VAR_29, &VAR_21,
    VAR_15 + VAR_4,
    VAR_15 + VAR_5);
 if (VAR_23) {
  FUNC_5(&VAR_22, VAR_29, &VAR_24,
     VAR_15 + VAR_7,
     VAR_15 + VAR_8);
 }
 FUNC_5(&VAR_22, VAR_29, &VAR_26,
    VAR_15 + VAR_18,
    VAR_15 + VAR_19);
 FUNC_5(&VAR_22, VAR_29, &VAR_26,
    VAR_15 + VAR_16,
    VAR_15 + VAR_17);

        FUNC_6(&VAR_29->csr.lock);

        VAR_29->csr.state = 0;
        VAR_29->csr.node_ids = 0;
        VAR_29->csr.split_timeout_hi = 0;
        VAR_29->csr.split_timeout_lo = 800 << 19;
 FUNC_1(&VAR_29->csr);
        VAR_29->csr.cycle_time = 0;
        VAR_29->csr.bus_time = 0;
        VAR_29->csr.bus_manager_id = 0x3f;
        VAR_29->csr.bandwidth_available = 4915;
 VAR_29->csr.channels_available_hi = 0xfffffffe;
        VAR_29->csr.channels_available_lo = ~0;
 VAR_29->csr.broadcast_channel = 0x80000000 | 31;

 if (VAR_29->is_irm) {
  if (VAR_29->driver->hw_csr_reg) {
   VAR_29->driver->hw_csr_reg(VAR_29, 2, 0xfffffffe, ~0);
  }
 }

 if (VAR_29->csr.max_rec >= 9)
  VAR_29->csr.max_rom = 2;
 else if (VAR_29->csr.max_rec >= 5)
  VAR_29->csr.max_rom = 1;
 else
  VAR_29->csr.max_rom = 0;

 VAR_29->csr.generation = 2;

 VAR_31[1] = VAR_20;
 VAR_31[2] = FUNC_2((VAR_25 ? 0 : 1 << VAR_10) |
      (1 << VAR_3) |
      (1 << VAR_11) |
      (0 << VAR_1) |
      (0 << VAR_14) |
      (VAR_29->csr.cyc_clk_acc << VAR_6) |
      (VAR_29->csr.max_rec << VAR_12) |
      (VAR_29->csr.max_rom << VAR_13) |
      (VAR_29->csr.generation << VAR_9) |
      VAR_29->csr.lnk_spd);

 VAR_31[3] = FUNC_2(VAR_29->csr.guid_hi);
 VAR_31[4] = FUNC_2(VAR_29->csr.guid_lo);




 FUNC_4(VAR_29->csr.rom, VAR_31, VAR_29->csr.max_rom);

 VAR_30 = VAR_29->csr.rom->root_kv;

 if(FUNC_3(VAR_30, VAR_27) != VAR_0) {
  FUNC_0("Failed to attach Node Capabilities to root directory");
 }

 VAR_29->update_config_rom = 1;
}
