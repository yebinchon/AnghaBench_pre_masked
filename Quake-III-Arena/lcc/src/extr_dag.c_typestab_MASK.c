
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* stabtype ) (TYPE_1__*) ;int (* stabsym ) (TYPE_1__*) ;} ;
struct TYPE_6__ {scalar_t__ sclass; int type; } ;
typedef TYPE_1__* Symbol ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Symbol VAR_4, void *VAR_5) {
 if (!FUNC_0(VAR_4->type) && (VAR_4->sclass == VAR_0 || VAR_4->sclass == VAR_2) && VAR_1->stabsym)
  (*VAR_1->stabsym)(VAR_4);
 else if ((VAR_4->sclass == VAR_3 || VAR_4->sclass == 0) && VAR_1->stabtype)
  (*VAR_1->stabtype)(VAR_4);
}
