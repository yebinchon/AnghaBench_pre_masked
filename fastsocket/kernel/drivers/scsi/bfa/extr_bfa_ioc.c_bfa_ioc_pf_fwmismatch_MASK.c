
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_ioc_s {TYPE_2__* bfa; TYPE_1__* cbfn; } ;
struct TYPE_4__ {scalar_t__ bfad; } ;
struct TYPE_3__ {int (* enable_cbfn ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_4)
{
 struct bfad_s *VAR_5 = (struct bfad_s *)VAR_4->bfa->bfad;



 VAR_4->cbfn->enable_cbfn(VAR_4->bfa, VAR_1);
 FUNC_0(VAR_2, VAR_5, VAR_3,
  "Running firmware version is incompatible "
  "with the driver version\n");
 FUNC_1(VAR_4, VAR_0);
}
