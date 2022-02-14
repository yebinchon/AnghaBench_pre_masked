
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int bfa; TYPE_1__* cbfn; } ;
struct TYPE_2__ {int (* disable_cbfn ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_1)
{
 VAR_1->cbfn->disable_cbfn(VAR_1->bfa);
 FUNC_0(VAR_1, VAR_0);
}
