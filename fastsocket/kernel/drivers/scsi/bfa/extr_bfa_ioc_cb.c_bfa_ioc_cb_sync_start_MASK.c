
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int alt_ioc_fwstate; int ioc_fwstate; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_3(struct bfa_ioc_s *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3->ioc_regs.ioc_fwstate);







 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_2, VAR_3->ioc_regs.ioc_fwstate);
  FUNC_2(VAR_2, VAR_3->ioc_regs.alt_ioc_fwstate);
  return VAR_1;
 }

 return FUNC_0(VAR_3);
}
