
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcport_s {int nwwn; TYPE_3__* bfa; int pwwn; } ;
struct TYPE_5__ {TYPE_1__* attr; } ;
struct TYPE_6__ {TYPE_2__ ioc; } ;
struct TYPE_4__ {int nwwn; int pwwn; } ;


 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcport_s *VAR_0)
{
 VAR_0->pwwn = VAR_0->bfa->ioc.attr->pwwn;
 VAR_0->nwwn = VAR_0->bfa->ioc.attr->nwwn;

 FUNC_0(VAR_0->bfa, VAR_0->pwwn);
 FUNC_0(VAR_0->bfa, VAR_0->nwwn);
}
