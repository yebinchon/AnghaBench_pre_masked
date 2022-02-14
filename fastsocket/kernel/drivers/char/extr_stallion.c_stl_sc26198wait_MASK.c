
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct stlport*) ;
 int FUNC_1 (struct stlport*,int ) ;

__attribute__((used)) static void FUNC_2(struct stlport *VAR_1)
{
 int VAR_2;

 FUNC_0("stl_sc26198wait(portp=%p)\n", VAR_1);

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < 20; VAR_2++)
  FUNC_1(VAR_1, VAR_0);
}
