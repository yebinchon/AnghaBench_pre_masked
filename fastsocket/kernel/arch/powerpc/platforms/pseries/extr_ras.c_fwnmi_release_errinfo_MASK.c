
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_0 = FUNC_1(FUNC_2("ibm,nmi-interlock"), 0, 1, ((void*)0));
 if (VAR_0 != 0)
  FUNC_0("FWNMI: nmi-interlock failed: %d\n", VAR_0);
}
