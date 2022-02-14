
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_iocpf_s {TYPE_2__* ioc; } ;
struct TYPE_5__ {int bfa; TYPE_1__* cbfn; } ;
struct TYPE_4__ {int (* reset_cbfn ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocpf_s *VAR_0)
{
 FUNC_1(VAR_0->ioc);



 VAR_0->ioc->cbfn->reset_cbfn(VAR_0->ioc->bfa);
 FUNC_0(VAR_0->ioc);
}
