
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int alt_ioc_fwstate; int ioc_fwstate; int ioc_usage_reg; int ioc_fail_sync; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_ioc_s *VAR_2)
{
 uint32_t VAR_3 = FUNC_3(VAR_2->ioc_regs.ioc_fail_sync);
 uint32_t VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 & FUNC_2(VAR_2)) {
  FUNC_4(0, VAR_2->ioc_regs.ioc_fail_sync);
  FUNC_4(1, VAR_2->ioc_regs.ioc_usage_reg);
  FUNC_4(VAR_1, VAR_2->ioc_regs.ioc_fwstate);
  FUNC_4(VAR_1, VAR_2->ioc_regs.alt_ioc_fwstate);
  return VAR_0;
 }

 return FUNC_1(VAR_2);
}
