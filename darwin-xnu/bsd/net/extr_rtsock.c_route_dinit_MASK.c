
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int dummy; } ;
struct domain {int dom_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct protosw*,struct domain*,int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct domain* VAR_2 ;
 struct protosw* VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct domain *VAR_4)
{
 struct protosw *VAR_5;
 int VAR_6;

 FUNC_0(!(VAR_4->dom_flags & VAR_0));
 FUNC_0(VAR_2 == ((void*)0));

 VAR_2 = VAR_4;

 for (VAR_6 = 0, VAR_5 = &VAR_3[0]; VAR_6 < VAR_1; VAR_6++, VAR_5++)
  FUNC_1(VAR_5, VAR_4, 1);

 FUNC_2();
}
