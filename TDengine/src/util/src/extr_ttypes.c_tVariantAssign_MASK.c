
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nType; int nLen; int pz; } ;
typedef TYPE_1__ tVariant ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(tVariant *VAR_3, tVariant *VAR_4) {
  if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0)) return;

  *VAR_3 = *VAR_4;

  if (VAR_4->nType == VAR_0 || VAR_4->nType == VAR_1) {
    int32_t VAR_5 = VAR_4->nLen + 1;
    if (VAR_4->nType == VAR_1) {
      VAR_5 = VAR_5 * VAR_2;
    }

    VAR_3->pz = FUNC_0(1, VAR_5);
    FUNC_1(VAR_3->pz, VAR_4->pz, VAR_5);
  }
}
