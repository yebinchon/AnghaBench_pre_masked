
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nTokens; int * a; } ;
typedef TYPE_1__ tDCLSQL ;
typedef int SSQLToken ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

tDCLSQL *FUNC_2(tDCLSQL *VAR_0, SSQLToken *VAR_1) {
  if (VAR_1 == ((void*)0)) return ((void*)0);

  if (VAR_0 == ((void*)0)) VAR_0 = FUNC_0(1, sizeof(tDCLSQL));

  FUNC_1(VAR_0);
  VAR_0->a[VAR_0->nTokens++] = *VAR_1;

  return VAR_0;
}
