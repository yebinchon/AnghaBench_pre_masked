
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_12__ {TYPE_3__** proto; } ;
struct TYPE_13__ {TYPE_1__ f; } ;
struct TYPE_14__ {int op; struct TYPE_14__* type; TYPE_2__ u; int size; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

int FUNC_5(Type VAR_0, Type VAR_1, int VAR_2) {
 if (VAR_0 == VAR_1)
  return 1;
 if (VAR_0->op != VAR_1->op)
  return 0;
 switch (VAR_0->op) {
 case 136: case 130: case 131:
 case 129: case 133: case 135:
  return 0;
 case 132: return FUNC_5(VAR_0->type, VAR_1->type, 1);
 case 128: case 137 +128:
 case 137: return FUNC_5(VAR_0->type, VAR_1->type, 1);
 case 138: if (FUNC_5(VAR_0->type, VAR_1->type, 1)) {
          if (VAR_0->size == VAR_1->size)
           return 1;
          if (VAR_0->size == 0 || VAR_1->size == 0)
           return VAR_2;
         }
         return 0;
 case 134: if (FUNC_5(VAR_0->type, VAR_1->type, 1)) {
          Type *VAR_3 = VAR_0->u.f.proto, *VAR_4 = VAR_1->u.f.proto;
          if (VAR_3 == VAR_4)
           return 1;
          if (VAR_3 && VAR_4) {
           for ( ; *VAR_3 && *VAR_4; VAR_3++, VAR_4++)
     if (FUNC_5(FUNC_3(*VAR_3), FUNC_3(*VAR_4), 1) == 0)
      return 0;
    if (*VAR_3 == ((void*)0) && *VAR_4 == ((void*)0))
     return 1;
          } else {
           if (FUNC_4(VAR_3 ? VAR_0 : VAR_1))
     return 0;
    if (VAR_3 == ((void*)0))
     VAR_3 = VAR_4;
    for ( ; *VAR_3; VAR_3++) {
     Type VAR_5 = FUNC_3(*VAR_3);
     if (FUNC_2(VAR_5) != (FUNC_1(VAR_5) ? VAR_5->type : VAR_5))
      return 0;
    }
    return 1;
          }
         }
         return 0;
 }
 FUNC_0(0); return 0;
}
