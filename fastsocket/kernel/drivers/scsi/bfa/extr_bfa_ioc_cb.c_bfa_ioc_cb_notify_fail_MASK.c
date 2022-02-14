
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int err_set; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_0)
{
 FUNC_1(~0U, VAR_0->ioc_regs.err_set);
 FUNC_0(VAR_0->ioc_regs.err_set);
}
