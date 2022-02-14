
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* iop; } ;
struct TYPE_6__ {TYPE_2__ itl; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_4__ {int outbound_intstatus; int inbound_msgaddr0; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct hptiop_hba *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_1, &VAR_0->u.itl.iop->inbound_msgaddr0);
 FUNC_0(&VAR_0->u.itl.iop->outbound_intstatus);
}
