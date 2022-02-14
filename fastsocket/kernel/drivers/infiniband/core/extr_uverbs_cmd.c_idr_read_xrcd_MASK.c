
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_xrcd {int dummy; } ;
struct ib_uobject {struct ib_xrcd* object; } ;
struct ib_ucontext {int dummy; } ;


 int VAR_0 ;
 struct ib_uobject* FUNC_0 (int *,int,struct ib_ucontext*,int ) ;

__attribute__((used)) static struct ib_xrcd *FUNC_1(int VAR_1, struct ib_ucontext *VAR_2,
         struct ib_uobject **VAR_3)
{
 *VAR_3 = FUNC_0(&VAR_0, VAR_1, VAR_2, 0);
 return *VAR_3 ? (*VAR_3)->object : ((void*)0);
}
