
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_18__ {int size; struct TYPE_18__* type; } ;
struct TYPE_16__ {char* name; TYPE_2__* regnode; } ;
struct TYPE_14__ {scalar_t__ seg; } ;
struct TYPE_17__ {scalar_t__ sclass; scalar_t__ scope; TYPE_3__ x; int name; TYPE_1__ u; TYPE_6__* type; scalar_t__ structarg; scalar_t__ computed; scalar_t__ generated; } ;
struct TYPE_15__ {int number; scalar_t__ set; } ;
struct TYPE_13__ {int wants_argb; } ;
typedef TYPE_4__* Symbol ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_12__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_6__* FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (char*,int,...) ;

void FUNC_7(Symbol VAR_17) {
 int VAR_18, VAR_19, VAR_20 = VAR_17->type->size;

 if (VAR_17->generated || VAR_17->computed)
  return;
 if (FUNC_3(VAR_17->type)) {
  FUNC_6(".stabs \"%s:%c%d\",%d,0,0,%s\n", VAR_17->name,
   VAR_17->sclass == VAR_16 ? 'f' : 'F', FUNC_1(FUNC_2(VAR_17->type)),
   VAR_7, VAR_17->x.name);
  return;
 }
 if (!VAR_5->wants_argb && VAR_17->scope == VAR_14 && VAR_17->structarg) {
  FUNC_0(FUNC_4(VAR_17->type) && FUNC_5(VAR_17->type->type));
  VAR_19 = FUNC_1(VAR_17->type->type);
  VAR_20 = VAR_17->type->type->size;
 } else
  VAR_19 = FUNC_1(VAR_17->type);
 if (VAR_17->sclass == VAR_0 && VAR_17->scope == VAR_4 || VAR_17->sclass == VAR_2) {
  FUNC_6(".stabs \"%s:G", VAR_17->name);
  VAR_18 = VAR_8;
 } else if (VAR_17->sclass == VAR_16) {
  FUNC_6(".stabs \"%s:%c%d\",%d,0,0,%s\n", VAR_17->name, VAR_17->scope == VAR_4 ? 'S' : 'V',
   VAR_19, VAR_17->u.seg == VAR_1 ? VAR_9 : VAR_13, VAR_17->x.name);
  return;
 } else if (VAR_17->sclass == VAR_15) {
  if (VAR_17->x.regnode) {
   int VAR_21 = VAR_17->x.regnode->number;
   if (VAR_17->x.regnode->set == VAR_3)
    VAR_21 += 32;
    FUNC_6(".stabs \"%s:%c%d\",%d,0,", VAR_17->name,
     VAR_17->scope == VAR_14 ? 'P' : 'r', VAR_19, VAR_12);
   FUNC_6("%d,%d\n", VAR_20, VAR_21);
  }
  return;
 } else if (VAR_17->scope == VAR_14) {
  FUNC_6(".stabs \"%s:p", VAR_17->name);
  VAR_18 = VAR_11;
 } else if (VAR_17->scope >= VAR_6) {
  FUNC_6(".stabs \"%s:", VAR_17->name);
  VAR_18 = VAR_10;
 } else
  FUNC_0(0);
 FUNC_6("%d\",%d,0,0,%s\n", VAR_19, VAR_18,
  VAR_17->scope >= VAR_14 && VAR_17->sclass != VAR_2 ? VAR_17->x.name : "0");
}
