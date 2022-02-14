
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbginterface {scalar_t__ fhndl; } ;


 int FUNC_0 (scalar_t__,void*,int) ;

__attribute__((used)) static int FUNC_1(struct dbginterface *VAR_0,void *VAR_1,int VAR_2)
{
 if(VAR_0->fhndl>=0)
  return FUNC_0(VAR_0->fhndl,VAR_1,VAR_2);

 return 0;
}
