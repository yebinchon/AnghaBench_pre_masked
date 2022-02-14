
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbginterface {scalar_t__ fhndl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dbginterface *VAR_1)
{
 if(VAR_0>=0 && (VAR_1->fhndl<0 ))
  VAR_1->fhndl = FUNC_0(VAR_0);

 if(VAR_1->fhndl<0)
  return -1;
 else
  FUNC_1(VAR_1->fhndl);

 return 0;
}
