
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_22__ {int oldstyle; TYPE_3__** proto; } ;
struct TYPE_23__ {TYPE_1__ f; } ;
struct TYPE_24__ {int op; int size; TYPE_2__ u; struct TYPE_24__* type; int align; } ;
typedef int * List ;





 int VAR_0 ;


 int * FUNC_0 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,TYPE_3__**,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__** FUNC_6 (int **,int ) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int const,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;

Type FUNC_10(Type VAR_1, Type VAR_2) {
 if (VAR_1 == VAR_2)
  return VAR_1;
 FUNC_2(VAR_1->op == VAR_2->op);
 switch (VAR_1->op) {
 case 129:
  return FUNC_7(FUNC_10(VAR_1->type, VAR_2->type));
 case 131 +128:
  return FUNC_8(131, FUNC_8(128,
   FUNC_10(VAR_1->type, VAR_2->type)));
 case 131: case 128:
  return FUNC_8(VAR_1->op, FUNC_10(VAR_1->type, VAR_2->type));
 case 132: { Type VAR_3 = FUNC_10(VAR_1->type, VAR_2->type);
    if (VAR_1->size && (VAR_1->type->size && VAR_2->size == 0 || VAR_1->size == VAR_2->size))
     return FUNC_1(VAR_3, VAR_1->size/VAR_1->type->size, VAR_1->align);
    if (VAR_2->size && VAR_2->type->size && VAR_1->size == 0)
     return FUNC_1(VAR_3, VAR_2->size/VAR_2->type->size, VAR_2->align);
    return FUNC_1(VAR_3, 0, 0); }
 case 130: { Type *VAR_4 = VAR_1->u.f.proto, *VAR_5 = VAR_2->u.f.proto;
    Type VAR_6 = FUNC_10(VAR_1->type, VAR_2->type);
    List VAR_7 = ((void*)0);
    if (VAR_4 == ((void*)0) && VAR_5 == ((void*)0))
     return FUNC_3(VAR_6, ((void*)0), 1);
    if (VAR_4 && VAR_5 == ((void*)0))
     return FUNC_3(VAR_6, VAR_4, VAR_1->u.f.oldstyle);
    if (VAR_5 && VAR_4 == ((void*)0))
     return FUNC_3(VAR_6, VAR_5, VAR_2->u.f.oldstyle);
    for ( ; *VAR_4 && *VAR_5; VAR_4++, VAR_5++) {
     Type VAR_8 = FUNC_10(FUNC_9(*VAR_4), FUNC_9(*VAR_5));
     if (FUNC_4(*VAR_4) || FUNC_4(*VAR_5))
      VAR_8 = FUNC_8(131, VAR_8);
     if (FUNC_5(*VAR_4) || FUNC_5(*VAR_5))
      VAR_8 = FUNC_8(128, VAR_8);
     VAR_7 = FUNC_0(VAR_8, VAR_7);
    }
    FUNC_2(*VAR_4 == ((void*)0) && *VAR_5 == ((void*)0));
    return FUNC_3(VAR_6, FUNC_6(&VAR_7, VAR_0), 0); }
 }
 FUNC_2(0); return ((void*)0);
}
