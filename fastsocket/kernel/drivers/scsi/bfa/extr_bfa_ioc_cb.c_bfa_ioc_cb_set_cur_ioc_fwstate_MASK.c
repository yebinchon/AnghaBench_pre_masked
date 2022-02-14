
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_fwstate; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_1,
   enum bfi_ioc_state VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->ioc_regs.ioc_fwstate);

 FUNC_1((VAR_2 | (VAR_3 & VAR_0)),
    VAR_1->ioc_regs.ioc_fwstate);
}
