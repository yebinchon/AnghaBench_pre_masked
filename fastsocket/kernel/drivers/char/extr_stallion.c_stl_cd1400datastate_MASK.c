
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int istate; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct stlport*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct stlport *VAR_1)
{
 FUNC_0("stl_cd1400datastate(portp=%p)\n", VAR_1);

 if (VAR_1 == ((void*)0))
  return 0;

 return FUNC_1(VAR_0, &VAR_1->istate) ? 1 : 0;
}
