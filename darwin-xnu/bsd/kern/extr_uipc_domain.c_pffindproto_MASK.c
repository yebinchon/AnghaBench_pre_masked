
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int dummy; } ;
typedef int domain_guard_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct protosw* FUNC_2 (int,int,int) ;

struct protosw *
FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
 struct protosw *VAR_3;
 domain_guard_t VAR_4;

 VAR_4 = FUNC_0();
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_4);
 return (VAR_3);
}
