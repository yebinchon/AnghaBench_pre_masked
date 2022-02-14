
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_ioc_s {int iocpf; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;
typedef scalar_t__ bfa_boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ,int ) ;
 scalar_t__ FUNC_2 (struct bfa_ioc_s*,int ) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (struct bfa_ioc_s*) ;
 int FUNC_5 (struct bfa_ioc_s*) ;
 int FUNC_6 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_ioc_s *VAR_8, bfa_boolean_t VAR_9)
{
 enum bfi_ioc_state VAR_10;
 bfa_boolean_t VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_10 = FUNC_3(VAR_8);

 if (VAR_9)
  VAR_10 = VAR_6;

 FUNC_6(VAR_8, VAR_10);

 VAR_12 = VAR_2;
 VAR_13 = VAR_1;




 VAR_11 = (VAR_10 == VAR_6) ?
  VAR_0 : FUNC_2(VAR_8, VAR_13);

 if (!VAR_11) {
  FUNC_1(VAR_8, VAR_12, VAR_13);
  FUNC_5(VAR_8);
  return;
 }





 if (VAR_10 == VAR_4) {
  FUNC_5(VAR_8);
  return;
 }
 if (VAR_10 == VAR_3 || VAR_10 == VAR_5) {





  FUNC_4(VAR_8);
  FUNC_0(&VAR_8->iocpf, VAR_7);
  return;
 }




 FUNC_1(VAR_8, VAR_12, VAR_13);
 FUNC_5(VAR_8);
}
