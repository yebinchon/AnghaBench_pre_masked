
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* stabtype ) (TYPE_1__*) ;} ;
struct TYPE_5__ {scalar_t__ sclass; } ;
typedef TYPE_1__* Symbol ;


 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Symbol VAR_2, void *VAR_3) {
 if (*(Symbol *)VAR_3 == 0 && VAR_2->sclass && VAR_2->sclass != VAR_1)
  *(Symbol *)VAR_3 = VAR_2;
 if ((VAR_2->sclass == VAR_1 || VAR_2->sclass == 0) && VAR_0->stabtype)
  (*VAR_0->stabtype)(VAR_2);
}
