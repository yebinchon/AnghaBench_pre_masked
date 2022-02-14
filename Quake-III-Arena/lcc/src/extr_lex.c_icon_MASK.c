
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {unsigned long i; unsigned long u; } ;
struct TYPE_22__ {TYPE_6__ v; } ;
struct TYPE_23__ {TYPE_7__ c; } ;
struct TYPE_24__ {TYPE_8__ u; TYPE_10__* type; } ;
struct TYPE_20__ {TYPE_4__* sym; } ;
struct TYPE_16__ {unsigned long i; unsigned long u; } ;
struct TYPE_17__ {TYPE_1__ max; } ;
struct TYPE_18__ {TYPE_2__ limits; } ;
struct TYPE_19__ {TYPE_3__ u; } ;
struct TYPE_15__ {int op; TYPE_5__ u; } ;
typedef TYPE_9__* Symbol ;




 int FUNC_0 (int ) ;
 unsigned char* VAR_0 ;
 TYPE_10__* VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 void* VAR_5 ;
 TYPE_10__* VAR_6 ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static Symbol FUNC_3(unsigned long VAR_7, int VAR_8, int VAR_9) {
 if ((*VAR_0=='u'||*VAR_0=='U') && (VAR_0[1]=='l'||VAR_0[1]=='L')
 || (*VAR_0=='l'||*VAR_0=='L') && (VAR_0[1]=='u'||VAR_0[1]=='U')) {
  VAR_4.type = VAR_5;
  VAR_0 += 2;
 } else if (*VAR_0 == 'u' || *VAR_0 == 'U') {
  if (VAR_8 || VAR_7 > VAR_6->u.sym->u.limits.max.i)
   VAR_4.type = VAR_5;
  else
   VAR_4.type = VAR_6;
  VAR_0 += 1;
 } else if (*VAR_0 == 'l' || *VAR_0 == 'L') {
  if (VAR_8 || VAR_7 > VAR_2->u.sym->u.limits.max.i)
   VAR_4.type = VAR_5;
  else
   VAR_4.type = VAR_2;
  VAR_0 += 1;
 } else if (VAR_8 || VAR_7 > VAR_2->u.sym->u.limits.max.i)
  VAR_4.type = VAR_5;
 else if (VAR_7 > VAR_1->u.sym->u.limits.max.i)
  VAR_4.type = VAR_2;
 else if (VAR_9 != 10 && VAR_7 > VAR_1->u.sym->u.limits.max.i)
  VAR_4.type = VAR_6;
 else
  VAR_4.type = VAR_1;
 switch (VAR_4.type->op) {
 case 129:
  if (VAR_8 || VAR_7 > VAR_4.type->u.sym->u.limits.max.i) {
   FUNC_2("overflow in constant `%S'\n", VAR_3,
    (char*)VAR_0 - VAR_3);
   VAR_4.u.c.v.i = VAR_4.type->u.sym->u.limits.max.i;
  } else
   VAR_4.u.c.v.i = VAR_7;
  break;
 case 128:
  if (VAR_8 || VAR_7 > VAR_4.type->u.sym->u.limits.max.u) {
   FUNC_2("overflow in constant `%S'\n", VAR_3,
    (char*)VAR_0 - VAR_3);
   VAR_4.u.c.v.u = VAR_4.type->u.sym->u.limits.max.u;
  } else
   VAR_4.u.c.v.u = VAR_7;
  break;
 default: FUNC_0(0);
 }
 FUNC_1("integer");
 return &VAR_4;
}
