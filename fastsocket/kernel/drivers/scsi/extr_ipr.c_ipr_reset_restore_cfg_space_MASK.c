
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int endian_swap_reg; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; int work_q; scalar_t__ sis64; scalar_t__ dump_timeout; scalar_t__ in_ioa_bringdown; scalar_t__ ioa_unit_checked; TYPE_4__ regs; TYPE_5__* pdev; } ;
struct TYPE_6__ {void* ioasc; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {int job_step; TYPE_3__ s; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_10__ {int state_saved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_ioa_cfg*) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ipr_cmnd*,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (struct ipr_ioa_cfg*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ipr_cmnd *VAR_17)
{
 struct ipr_ioa_cfg *VAR_18 = VAR_17->ioa_cfg;
 u32 VAR_19;
 int VAR_20;

 VAR_0;
 VAR_18->pdev->state_saved = 1;
 VAR_20 = FUNC_5(VAR_18->pdev);

 if (VAR_20 != VAR_10) {
  VAR_17->s.ioasa.hdr.ioasc = FUNC_0(VAR_4);
  return VAR_5;
 }

 if (FUNC_4(VAR_18)) {
  VAR_17->s.ioasa.hdr.ioasc = FUNC_0(VAR_4);
  return VAR_5;
 }

 FUNC_1(VAR_18);

 if (VAR_18->sis64) {

  FUNC_8(VAR_3, VAR_18->regs.endian_swap_reg);
  VAR_19 = FUNC_6(VAR_18->regs.endian_swap_reg);
 }

 if (VAR_18->ioa_unit_checked) {
  if (VAR_18->sis64) {
   VAR_17->job_step = VAR_15;
   FUNC_3(VAR_17, VAR_2);
  } else {
   VAR_18->ioa_unit_checked = 0;
   FUNC_2(VAR_18);
   VAR_17->job_step = VAR_13;
   FUNC_3(VAR_17, 0);
  }
  return VAR_6;
 }

 if (VAR_18->in_ioa_bringdown) {
  VAR_17->job_step = VAR_12;
 } else {
  VAR_17->job_step = VAR_14;

  if (VAR_1 == VAR_18->sdt_state) {
   VAR_18->sdt_state = VAR_11;
   VAR_18->dump_timeout = 0;
   if (VAR_18->sis64)
    FUNC_3(VAR_17, VAR_8);
   else
    FUNC_3(VAR_17, VAR_7);
   VAR_17->job_step = VAR_16;
   FUNC_7(&VAR_18->work_q);
   return VAR_6;
  }
 }

 VAR_9;
 return VAR_5;
}
