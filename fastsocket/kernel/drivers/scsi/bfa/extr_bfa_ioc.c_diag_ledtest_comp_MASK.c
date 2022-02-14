
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_diag_ledtest_rsp_s {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct bfa_diag_s {TYPE_1__ ledtest; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_diag_s*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_diag_s *VAR_1, struct bfi_diag_ledtest_rsp_s *VAR_2)
{
 FUNC_0(VAR_1, VAR_1->ledtest.lock);
 VAR_1->ledtest.lock = VAR_0;

}
