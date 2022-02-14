
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {TYPE_4__* mu; TYPE_1__* regs; } ;
struct TYPE_7__ {TYPE_2__ mv; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_8__ {int outbound_msg; } ;
struct TYPE_5__ {int outbound_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct hptiop_hba*,int) ;
 int FUNC_2 (struct hptiop_hba*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct hptiop_hba *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_4(&VAR_2->u.mv.regs->outbound_doorbell);
 FUNC_5(~VAR_3, &VAR_2->u.mv.regs->outbound_doorbell);

 if (VAR_3 & VAR_0) {
  u32 VAR_5;
  VAR_5 = FUNC_4(&VAR_2->u.mv.mu->outbound_msg);
  FUNC_0("received outbound msg %x\n", VAR_5);
  FUNC_1(VAR_2, VAR_5);
  VAR_4 = 1;
 }

 if (VAR_3 & VAR_1) {
  u64 VAR_6;

  while ((VAR_6 = FUNC_3(VAR_2->u.mv.mu)))
   FUNC_2(VAR_2, VAR_6);
  VAR_4 = 1;
 }

 return VAR_4;
}
