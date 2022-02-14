
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_5__* Type ;
typedef TYPE_6__* Tree ;
struct TYPE_30__ {TYPE_5__* type; } ;
struct TYPE_29__ {TYPE_5__* type; } ;
struct TYPE_27__ {TYPE_3__* sym; } ;
struct TYPE_28__ {TYPE_4__ u; } ;
struct TYPE_24__ {int cfields; } ;
struct TYPE_25__ {TYPE_1__ s; } ;
struct TYPE_26__ {TYPE_2__ u; } ;
typedef TYPE_7__* Symbol ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (scalar_t__,TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 TYPE_6__* FUNC_4 (scalar_t__,TYPE_5__*,TYPE_6__*,TYPE_6__*) ;
 TYPE_5__* FUNC_5 (TYPE_5__*) ;

Tree FUNC_6(Symbol VAR_3, Tree VAR_4) {
 if (FUNC_2(VAR_3->type))
  VAR_4 = FUNC_4(VAR_0+VAR_1, VAR_3->type, FUNC_1(VAR_3),
   FUNC_4(VAR_2+VAR_1, VAR_4->type, VAR_4, ((void*)0)));
 else {
  Type VAR_5 = VAR_3->type;
  VAR_3->type = FUNC_5(VAR_3->type);
  if (FUNC_3(VAR_3->type) && VAR_3->type->u.sym->u.s.cfields) {
   VAR_3->type->u.sym->u.s.cfields = 0;
   VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_3), VAR_4);
   VAR_3->type->u.sym->u.s.cfields = 1;
  } else
   VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_3), VAR_4);
  VAR_3->type = VAR_5;
 }
 return VAR_4;
}
