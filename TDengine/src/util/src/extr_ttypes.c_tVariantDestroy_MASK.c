
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nType; scalar_t__ nLen; int * pz; } ;
typedef TYPE_1__ tVariant ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(tVariant *VAR_2) {
  if (VAR_2 == ((void*)0)) return;

  if ((VAR_2->nType == VAR_0 || VAR_2->nType == VAR_1) && VAR_2->nLen > 0) {
    FUNC_0(VAR_2->pz);
    VAR_2->pz = ((void*)0);
    VAR_2->nLen = 0;
  }
}
