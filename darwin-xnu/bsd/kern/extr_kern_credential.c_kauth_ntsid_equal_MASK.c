
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ntsid_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

int
FUNC_2(ntsid_t *VAR_0, ntsid_t *VAR_1)
{

 if ((FUNC_0(VAR_0) == FUNC_0(VAR_1)) &&
     (FUNC_0(VAR_0) <= sizeof(*VAR_0)) &&
     FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0)) == 0)
  return(1);
 return(0);
}
