
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {int size; } ;
struct TYPE_12__ {TYPE_3__** callee; } ;
struct TYPE_13__ {TYPE_1__ f; } ;
struct TYPE_14__ {char* name; TYPE_4__* type; TYPE_2__ u; } ;
struct TYPE_11__ {int (* space ) (int ) ;} ;
typedef TYPE_3__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 void* VAR_6 ;
 void* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_12(Symbol VAR_9, Symbol VAR_10) {
 int VAR_11;
 Symbol VAR_12 = FUNC_5(VAR_5, VAR_7, VAR_2);

 FUNC_4(VAR_12, VAR_1);
 (*VAR_4->space)(VAR_12->type->size);
 VAR_6 = FUNC_5(VAR_0, VAR_7, VAR_8);
 FUNC_0(VAR_6);
 FUNC_1(VAR_10->name); FUNC_1("#");
 FUNC_10(FUNC_2(VAR_6, FUNC_7(VAR_3, FUNC_6(VAR_12), FUNC_3(1, VAR_7))), 0);
 FUNC_1("(");
 for (VAR_11 = 0; VAR_10->u.f.callee[VAR_11]; VAR_11++) {
  if (VAR_11)
   FUNC_1(",");
  FUNC_1(VAR_10->u.f.callee[VAR_11]->name); FUNC_1("=");
  FUNC_10(FUNC_6(VAR_10->u.f.callee[VAR_11]), 0);
 }
 if (FUNC_11(VAR_10->type))
  FUNC_1(",...");
 FUNC_1(") called\n");
 FUNC_9(VAR_9);
}
