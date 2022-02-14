
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int spills; int listed; TYPE_6__* next; } ;
struct TYPE_29__ {int op; TYPE_3__ x; } ;
struct TYPE_23__ {int regnode; int name; } ;
struct TYPE_28__ {TYPE_1__ x; int name; int sclass; } ;
struct TYPE_27__ {int (* rmap ) (unsigned int) ;} ;
struct TYPE_25__ {int size; } ;
struct TYPE_24__ {TYPE_4__ x; TYPE_2__ ptrmetric; } ;
typedef TYPE_5__* Symbol ;
typedef TYPE_6__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_22__* VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_6 (scalar_t__,TYPE_6__*,TYPE_6__*,TYPE_5__*) ;
 size_t FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_6__**) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_8 ;
 int FUNC_13 (unsigned int) ;

__attribute__((used)) static void FUNC_14(Symbol VAR_9, Node VAR_10, Symbol VAR_11) {
 Node VAR_12, VAR_13;
 Symbol VAR_14;
 unsigned VAR_15;

 FUNC_2(FUNC_4(VAR_8, "(spilling %s to local %s)\n", VAR_9->x.name, VAR_11->x.name));
 FUNC_2(FUNC_4(VAR_8, "(genspill: "));
 FUNC_2(FUNC_3(VAR_10));
 FUNC_2(FUNC_4(VAR_8, ")\n"));
 VAR_15 = FUNC_8(VAR_10->op);
 FUNC_0(VAR_14, VAR_2);
 VAR_14->sclass = VAR_7;
 VAR_14->name = VAR_14->x.name = VAR_9->x.name;
 VAR_14->x.regnode = VAR_9->x.regnode;
 VAR_13 = FUNC_6(VAR_0+VAR_6 + FUNC_12(VAR_4->ptrmetric.size), ((void*)0), ((void*)0), VAR_14);
 VAR_13 = FUNC_6(VAR_3 + VAR_15, VAR_13, ((void*)0), ((void*)0));
 VAR_12 = FUNC_6(VAR_0+VAR_6 + FUNC_12(VAR_4->ptrmetric.size), ((void*)0), ((void*)0), VAR_11);
 VAR_12 = FUNC_6(VAR_1 + VAR_15, VAR_12, VAR_13, ((void*)0));
 VAR_12->x.spills = 1;
 FUNC_11(VAR_12);
 FUNC_9(VAR_12, &VAR_13);
 VAR_13 = VAR_10->x.next;
 FUNC_5(VAR_12, VAR_13);
 for (VAR_12 = VAR_10->x.next; VAR_12 != VAR_13; VAR_12 = VAR_12->x.next) {
  FUNC_10(VAR_12);
  FUNC_1(!VAR_12->x.listed || !VAR_5[FUNC_7(VAR_12->op)] || !(*VAR_4->x.rmap)(FUNC_8(VAR_12->op)));
 }
}
