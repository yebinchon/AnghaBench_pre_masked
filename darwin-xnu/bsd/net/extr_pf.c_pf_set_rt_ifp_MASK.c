
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct pf_rule* ptr; } ;
struct pf_state {int * rt_kif; int nat_src_node; int rt_addr; TYPE_3__ rule; } ;
struct TYPE_5__ {TYPE_1__* cur; } ;
struct pf_rule {scalar_t__ rt; TYPE_2__ rpool; } ;
struct pf_addr {int dummy; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_4__ {int * kif; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,struct pf_rule*,struct pf_addr*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct pf_state *VAR_3, struct pf_addr *VAR_4, sa_family_t VAR_5)
{
 struct pf_rule *VAR_6 = VAR_3->rule.ptr;

 VAR_3->rt_kif = ((void*)0);

 if (!VAR_6->rt || VAR_6->rt == VAR_2)
  return;
 if ((VAR_5 == VAR_0) || (VAR_5 == VAR_1)) {
  FUNC_0(VAR_5, VAR_6, VAR_4, &VAR_3->rt_addr, ((void*)0),
      &VAR_3->nat_src_node);
  VAR_3->rt_kif = VAR_6->rpool.cur->kif;
 }

 return;
}
