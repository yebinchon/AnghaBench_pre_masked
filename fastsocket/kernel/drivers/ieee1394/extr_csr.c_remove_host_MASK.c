
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cyc_clk_acc; int max_rec; int lnk_spd; int guid_hi; int guid_lo; TYPE_2__* rom; } ;
struct hpsb_host {int update_config_rom; TYPE_1__ csr; } ;
typedef int quadlet_t ;
struct TYPE_4__ {int root_kv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(struct hpsb_host *VAR_12)
{
 quadlet_t VAR_13[VAR_1];

 VAR_13[1] = VAR_10;
 VAR_13[2] = FUNC_0((0 << VAR_5) |
      (0 << VAR_2) |
      (0 << VAR_6) |
      (0 << VAR_0) |
      (0 << VAR_9) |
      (VAR_12->csr.cyc_clk_acc << VAR_3) |
      (VAR_12->csr.max_rec << VAR_7) |
      (0 << VAR_8) |
      (0 << VAR_4) |
      VAR_12->csr.lnk_spd);

 VAR_13[3] = FUNC_0(VAR_12->csr.guid_hi);
 VAR_13[4] = FUNC_0(VAR_12->csr.guid_lo);

 FUNC_1(VAR_12->csr.rom->root_kv, VAR_11);

 FUNC_2(VAR_12->csr.rom, VAR_13, 0);
 VAR_12->update_config_rom = 1;
}
