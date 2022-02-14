
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfi_ioc_image_hdr_s {int dummy; } ;
struct TYPE_2__ {int ioc_usage_sem_reg; int ioc_usage_reg; int ioc_fwstate; int ioc_fail_sync; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_2 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_7(struct bfa_ioc_s *VAR_3)
{
 enum bfi_ioc_state VAR_4;
 u32 VAR_5;
 struct bfi_ioc_image_hdr_s VAR_6;

 FUNC_3(VAR_3->ioc_regs.ioc_usage_sem_reg);
 VAR_5 = FUNC_5(VAR_3->ioc_regs.ioc_usage_reg);




 if (VAR_5 == 0) {
  FUNC_6(1, VAR_3->ioc_regs.ioc_usage_reg);
  FUNC_5(VAR_3->ioc_regs.ioc_usage_sem_reg);
  FUNC_6(1, VAR_3->ioc_regs.ioc_usage_sem_reg);
  FUNC_6(0, VAR_3->ioc_regs.ioc_fail_sync);
  FUNC_4(VAR_3, VAR_5);
  return VAR_1;
 }

 VAR_4 = FUNC_5(VAR_3->ioc_regs.ioc_fwstate);
 FUNC_4(VAR_3, VAR_4);




 FUNC_0(VAR_4 == VAR_2);




 FUNC_2(VAR_3, &VAR_6);
 if (!FUNC_1(VAR_3, &VAR_6)) {
  FUNC_5(VAR_3->ioc_regs.ioc_usage_sem_reg);
  FUNC_6(1, VAR_3->ioc_regs.ioc_usage_sem_reg);
  FUNC_4(VAR_3, VAR_5);
  return VAR_0;
 }




 VAR_5++;
 FUNC_6(VAR_5, VAR_3->ioc_regs.ioc_usage_reg);
 FUNC_5(VAR_3->ioc_regs.ioc_usage_sem_reg);
 FUNC_6(1, VAR_3->ioc_regs.ioc_usage_sem_reg);
 FUNC_4(VAR_3, VAR_5);
 return VAR_1;
}
