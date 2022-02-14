
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_old {int * dom_mtx; int * dom_next; } ;
struct domain {int dom_flags; struct domain_old* dom_old; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct domain*,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct domain *VAR_4)
{
 FUNC_2();
 FUNC_1(VAR_4->dom_flags & VAR_0);

 FUNC_0(&VAR_3, VAR_4, VAR_2);
 VAR_4->dom_flags &= ~VAR_0;

 if (VAR_4->dom_flags & VAR_1) {
  struct domain_old *VAR_5 = VAR_4->dom_old;

  FUNC_1(VAR_5 != ((void*)0));
  VAR_5->dom_next = ((void*)0);
  VAR_5->dom_mtx = ((void*)0);
 }
}
