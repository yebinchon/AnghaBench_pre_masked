
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_iocfc_s {TYPE_2__* bfa; } ;
struct TYPE_6__ {int dis_hcb_qe; int op_status; } ;
struct TYPE_7__ {TYPE_1__ iocfc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocfc_s *VAR_2)
{
 FUNC_2(VAR_2->bfa);
 FUNC_1(VAR_2->bfa);
 VAR_2->bfa->iocfc.op_status = VAR_0;
 FUNC_0(VAR_2->bfa, &VAR_2->bfa->iocfc.dis_hcb_qe,
       VAR_1, VAR_2->bfa);
}
