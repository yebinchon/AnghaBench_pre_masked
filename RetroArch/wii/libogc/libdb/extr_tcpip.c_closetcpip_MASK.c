
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbginterface {int fhndl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dbginterface *VAR_0)
{
 FUNC_1(VAR_0->fhndl);
 FUNC_0(VAR_0->fhndl);
 VAR_0->fhndl = -1;
 return 0;
}
