
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* iop; } ;
struct TYPE_5__ {TYPE_3__ itl; } ;
struct hptiop_hba {TYPE_2__ u; } ;
struct TYPE_4__ {int outbound_intstatus; int outbound_queue; int inbound_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct hptiop_hba *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_1(&VAR_1->u.itl.iop->inbound_queue);
  if (VAR_3 != VAR_0)
   break;
  FUNC_0(1);
 }

 if (VAR_3 != VAR_0) {
  FUNC_2(VAR_3, &VAR_1->u.itl.iop->outbound_queue);
  FUNC_1(&VAR_1->u.itl.iop->outbound_intstatus);
  return 0;
 }

 return -1;
}
