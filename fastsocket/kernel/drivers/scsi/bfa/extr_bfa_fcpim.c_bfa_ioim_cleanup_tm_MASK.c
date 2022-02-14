
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_tskim_s {int dummy; } ;
struct bfa_ioim_s {TYPE_1__* iosp; int itnim; int iotag; int bfa; } ;
struct TYPE_2__ {struct bfa_tskim_s* tskim; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioim_s*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void
FUNC_3(struct bfa_ioim_s *VAR_2, struct bfa_tskim_s *VAR_3)
{
 FUNC_2(VAR_2->bfa, VAR_2->iotag);
 FUNC_1(VAR_2->itnim, VAR_1);

 VAR_2->iosp->tskim = VAR_3;
 FUNC_0(VAR_2, VAR_0);
}
