
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nd_pfxrouter* lh_first; } ;
struct nd_prefix {TYPE_1__ ndpr_advrtrs; } ;
struct nd_pfxrouter {struct nd_defrouter* router; struct nd_pfxrouter* pfr_next; } ;
struct nd_defrouter {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nd_prefix*) ;
 int VAR_1 ;

__attribute__((used)) static struct nd_pfxrouter *
FUNC_2(struct nd_prefix *VAR_2, struct nd_defrouter *VAR_3)
{
 struct nd_pfxrouter *VAR_4;

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_2);

 for (VAR_4 = VAR_2->ndpr_advrtrs.lh_first; VAR_4;
     VAR_4 = VAR_4->pfr_next) {
  if (VAR_4->router == VAR_3)
   break;
 }

 return (VAR_4);
}
