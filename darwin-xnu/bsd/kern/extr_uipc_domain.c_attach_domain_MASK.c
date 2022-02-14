
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain {int dom_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct domain*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct domain *VAR_3)
{
 FUNC_2();
 FUNC_1(!(VAR_3->dom_flags & VAR_0));

 FUNC_0(&VAR_2, VAR_3, VAR_1);
 VAR_3->dom_flags |= VAR_0;
}
