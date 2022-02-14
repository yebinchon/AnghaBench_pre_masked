
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intr_status; } ;
struct TYPE_4__ {TYPE_1__ bfa_regs; } ;
struct bfa_s {TYPE_2__ iocfc; int ioc; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_1, int VAR_2)
{
 FUNC_2(VAR_0 << FUNC_0(FUNC_1(&VAR_1->ioc), VAR_2),
   VAR_1->iocfc.bfa_regs.intr_status);
}
