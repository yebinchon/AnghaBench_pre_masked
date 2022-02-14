
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ nvecs; } ;
struct TYPE_8__ {int intr_mask; int intr_status; } ;
struct TYPE_9__ {int intr_mask; TYPE_2__ bfa_regs; } ;
struct TYPE_7__ {int device_id; } ;
struct TYPE_11__ {TYPE_1__ pcidev; } ;
struct bfa_s {int intr_enabled; TYPE_4__ msix; TYPE_3__ iocfc; TYPE_5__ ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct bfa_s*,int) ;
 int FUNC_4 (struct bfa_s*) ;
 int FUNC_5 (struct bfa_s*,int) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(struct bfa_s *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = FUNC_2(&VAR_7->ioc);

 FUNC_5(VAR_7, FUNC_1(&VAR_7->ioc));
 FUNC_5(VAR_7, VAR_9);

 FUNC_4(VAR_7);

 if (FUNC_0(VAR_7->ioc.pcidev.device_id)) {
  VAR_8 = VAR_2;
  VAR_8 |= VAR_9 == 0 ?
   VAR_4 : VAR_6;
 } else {
  VAR_8 = VAR_1;
  VAR_8 |= VAR_9 == 0 ? VAR_3 : VAR_5;
 }

 FUNC_6(VAR_8, VAR_7->iocfc.bfa_regs.intr_status);
 FUNC_6(~VAR_8, VAR_7->iocfc.bfa_regs.intr_mask);
 VAR_7->iocfc.intr_mask = ~VAR_8;
 FUNC_3(VAR_7, VAR_7->msix.nvecs != 0);




 VAR_7->intr_enabled = VAR_0;
}
