
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* Type ;
struct TYPE_14__ {TYPE_4__* type; struct TYPE_14__* link; } ;
struct TYPE_12__ {TYPE_2__* sym; } ;
struct TYPE_10__ {int marked; scalar_t__ typeno; } ;
struct TYPE_13__ {int op; TYPE_3__ u; TYPE_1__ x; struct TYPE_13__* type; } ;
struct TYPE_11__ {char* name; } ;
typedef TYPE_5__* Field ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(Type VAR_1, int VAR_2) {
 if (VAR_1->x.marked || VAR_1->x.typeno)
  return;
 VAR_1->x.marked = 1;
 switch (VAR_1->op) {
 case 128: case 138: case 128 +138:
  FUNC_3(VAR_1->type, VAR_2);
  VAR_1->x.typeno = VAR_1->type->x.typeno;
  break;
 case 133: case 135: case 139:
  FUNC_3(VAR_1->type, VAR_2 + 1);

 case 129: case 134: case 130: case 136:
  break;
 case 132: case 131: {
  Field VAR_3;
  for (VAR_3 = FUNC_2(VAR_1); VAR_3; VAR_3 = VAR_3->link)
   FUNC_3(VAR_3->type, VAR_2 + 1);

 case 137:
  if (VAR_1->x.typeno == 0)
   VAR_1->x.typeno = ++VAR_0;
  if (VAR_2 > 0 && (*VAR_1->u.sym->name < '0' || *VAR_1->u.sym->name > '9'))
   FUNC_1(VAR_1);
  break;
  }
 default:
  FUNC_0(0);
 }
}
