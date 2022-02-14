
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
struct TYPE_8__ {TYPE_1__* regs; TYPE_2__* mu; } ;
struct TYPE_7__ {TYPE_4__ mv; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_6__ {int inbound_head; int * inbound_q; } ;
struct TYPE_5__ {int inbound_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(u64 VAR_2, struct hptiop_hba *VAR_3)
{
 u32 VAR_4 = FUNC_1(&VAR_3->u.mv.mu->inbound_head);
 u32 VAR_5 = VAR_4 + 1;

 if (VAR_5 == VAR_1)
  VAR_5 = 0;

 FUNC_0(&VAR_3->u.mv.mu->inbound_q[VAR_4], &VAR_2, 8);
 FUNC_2(VAR_5, &VAR_3->u.mv.mu->inbound_head);
 FUNC_2(VAR_0,
   &VAR_3->u.mv.regs->inbound_doorbell);
}
