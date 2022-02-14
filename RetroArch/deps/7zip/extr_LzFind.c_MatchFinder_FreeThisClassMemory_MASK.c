
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * hash; } ;
struct TYPE_6__ {int (* Free ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(CMatchFinder *VAR_0, ISzAlloc *VAR_1)
{
  VAR_1->Free(VAR_1, VAR_0->hash);
  VAR_0->hash = ((void*)0);
}
