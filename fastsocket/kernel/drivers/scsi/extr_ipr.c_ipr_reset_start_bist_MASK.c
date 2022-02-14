
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int set_uproc_interrupt_reg32; } ;
struct ipr_ioa_cfg {scalar_t__ cfg_locked; int pdev; TYPE_2__ regs; TYPE_1__* ipr_chip; } ;
struct TYPE_8__ {int ioasc; } ;
struct TYPE_9__ {TYPE_3__ hdr; } ;
struct TYPE_10__ {TYPE_4__ ioasa; } ;
struct ipr_cmnd {TYPE_5__ s; struct ipr_ioa_cfg* ioa_cfg; int job_step; } ;
struct TYPE_6__ {scalar_t__ bist_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (struct ipr_cmnd*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ipr_cmnd *VAR_12)
{
 struct ipr_ioa_cfg *VAR_13 = VAR_12->ioa_cfg;
 int VAR_14 = VAR_8;

 VAR_0;
 if (VAR_13->ipr_chip->bist_method == VAR_2)
  FUNC_4(VAR_5,
         VAR_13->regs.set_uproc_interrupt_reg32);
 else
  VAR_14 = FUNC_3(VAR_13->pdev, VAR_9, VAR_10);

 if (VAR_14 == VAR_8) {
  VAR_12->job_step = VAR_11;
  FUNC_1(VAR_12, VAR_6);
  VAR_14 = VAR_4;
 } else {
  if (VAR_13->cfg_locked)
   FUNC_2(VAR_12->ioa_cfg->pdev);
  VAR_13->cfg_locked = 0;
  VAR_12->s.ioasa.hdr.ioasc = FUNC_0(VAR_1);
  VAR_14 = VAR_3;
 }

 VAR_7;
 return VAR_14;
}
