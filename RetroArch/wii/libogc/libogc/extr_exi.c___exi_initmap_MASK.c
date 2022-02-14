
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _lck_dev {int dummy; } ;
typedef size_t s32 ;
struct TYPE_3__ {int lckd_dev; scalar_t__ lckd_dev_bits; scalar_t__ lockeddev; scalar_t__ lck_cnt; scalar_t__ imm_len; scalar_t__ flags; scalar_t__ exi_idtime; scalar_t__ exi_id; int * imm_buff; int * CallbackTC; int * CallbackEXT; int * CallbackEXI; } ;
typedef TYPE_1__ exibus_priv ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(exibus_priv *VAR_4)
{
 s32 VAR_5;
 exibus_priv *VAR_6;

 FUNC_1(&VAR_2,VAR_3,VAR_0,sizeof(struct _lck_dev));

 for(VAR_5=0;VAR_5<VAR_1;VAR_5++) {
  VAR_6 = &VAR_4[VAR_5];
  VAR_6->CallbackEXI = ((void*)0);
  VAR_6->CallbackEXT = ((void*)0);
  VAR_6->CallbackTC = ((void*)0);
  VAR_6->imm_buff = ((void*)0);
  VAR_6->exi_id = 0;
  VAR_6->exi_idtime = 0;
  VAR_6->flags = 0;
  VAR_6->imm_len = 0;
  VAR_6->lck_cnt = 0;
  VAR_6->lockeddev = 0;
  VAR_6->lckd_dev_bits = 0;
  FUNC_0(&VAR_6->lckd_dev);
 }
}
