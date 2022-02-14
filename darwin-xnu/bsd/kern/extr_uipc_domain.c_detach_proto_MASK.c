
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int pr_flags; struct protosw* pr_protosw; struct domain* pr_domain; } ;
struct domain {int dom_protosw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct protosw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct protosw *VAR_2, struct domain *VAR_3)
{
 FUNC_2();
 FUNC_1(VAR_2->pr_flags & VAR_0);
 FUNC_1(VAR_2->pr_domain == VAR_3);
 FUNC_1(VAR_2->pr_protosw == VAR_2);

 FUNC_0(&VAR_3->dom_protosw, VAR_2, VAR_1);
 VAR_2->pr_flags &= ~VAR_0;
 VAR_2->pr_domain = ((void*)0);
 VAR_2->pr_protosw = ((void*)0);
}
