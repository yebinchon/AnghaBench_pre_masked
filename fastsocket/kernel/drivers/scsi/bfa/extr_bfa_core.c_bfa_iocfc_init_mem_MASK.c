
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvecs; } ;
struct TYPE_3__ {int (* hw_reginit ) (struct bfa_s*) ;int hw_rspq_ack; int * hw_isr_mode_set; scalar_t__ cpe_vec_q0; scalar_t__ rme_vec_q0; int hw_msix_get_rme_range; int hw_msix_getvecs; int hw_msix_uninstall; int hw_msix_queue_install; int hw_msix_ctrl_install; int hw_msix_init; int * hw_reqq_ack; } ;
struct bfa_iocfc_cfg_s {int dummy; } ;
struct bfa_iocfc_s {TYPE_1__ hwif; struct bfa_iocfc_cfg_s cfg; struct bfa_s* bfa; } ;
struct bfa_s {TYPE_2__ msix; int ioc; void* bfad; struct bfa_iocfc_s iocfc; } ;
struct bfa_pcidev_s {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bfa_s*) ;
 int VAR_12 ;
 int FUNC_3 (struct bfa_s*) ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct bfa_s*) ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_8(struct bfa_s *VAR_23, void *VAR_24, struct bfa_iocfc_cfg_s *VAR_25,
     struct bfa_pcidev_s *VAR_26)
{
 struct bfa_iocfc_s *VAR_27 = &VAR_23->iocfc;

 VAR_23->bfad = VAR_24;
 VAR_27->bfa = VAR_23;
 VAR_27->cfg = *VAR_25;




 if (FUNC_1(FUNC_5(&VAR_23->ioc))) {
  VAR_27->hwif.hw_reginit = FUNC_4;
  VAR_27->hwif.hw_reqq_ack = VAR_21;
  VAR_27->hwif.hw_rspq_ack = VAR_22;
  VAR_27->hwif.hw_msix_init = VAR_18;
  VAR_27->hwif.hw_msix_ctrl_install = VAR_15;
  VAR_27->hwif.hw_msix_queue_install = VAR_19;
  VAR_27->hwif.hw_msix_uninstall = VAR_20;
  VAR_27->hwif.hw_isr_mode_set = VAR_14;
  VAR_27->hwif.hw_msix_getvecs = VAR_17;
  VAR_27->hwif.hw_msix_get_rme_range = VAR_16;
  VAR_27->hwif.rme_vec_q0 = VAR_4;
  VAR_27->hwif.cpe_vec_q0 = VAR_2;
 } else {
  VAR_27->hwif.hw_reginit = FUNC_2;
  VAR_27->hwif.hw_reqq_ack = ((void*)0);
  VAR_27->hwif.hw_rspq_ack = VAR_12;
  VAR_27->hwif.hw_msix_init = VAR_9;
  VAR_27->hwif.hw_msix_ctrl_install = VAR_6;
  VAR_27->hwif.hw_msix_queue_install = VAR_10;
  VAR_27->hwif.hw_msix_uninstall = VAR_11;
  VAR_27->hwif.hw_isr_mode_set = VAR_5;
  VAR_27->hwif.hw_msix_getvecs = VAR_8;
  VAR_27->hwif.hw_msix_get_rme_range = VAR_7;
  VAR_27->hwif.rme_vec_q0 = VAR_3 +
   FUNC_6(&VAR_23->ioc) * VAR_0;
  VAR_27->hwif.cpe_vec_q0 = VAR_1 +
   FUNC_6(&VAR_23->ioc) * VAR_0;
 }

 if (FUNC_0(FUNC_5(&VAR_23->ioc))) {
  VAR_27->hwif.hw_reginit = FUNC_3;
  VAR_27->hwif.hw_isr_mode_set = ((void*)0);
  VAR_27->hwif.hw_rspq_ack = VAR_13;
 }

 VAR_27->hwif.hw_reginit(VAR_23);
 VAR_23->msix.nvecs = 0;
}
