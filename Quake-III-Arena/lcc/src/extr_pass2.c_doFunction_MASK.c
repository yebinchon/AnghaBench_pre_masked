
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef TYPE_5__* rcc_interface_ty ;
struct TYPE_19__ {int * next; } ;
struct TYPE_13__ {int ** callee; } ;
struct TYPE_14__ {TYPE_1__ f; } ;
struct TYPE_18__ {int defined; TYPE_2__ u; } ;
struct TYPE_15__ {int f; int ncalls; int codelist; int callee; int caller; } ;
struct TYPE_16__ {TYPE_3__ rcc_Function; } ;
struct TYPE_17__ {TYPE_4__ v; } ;
struct TYPE_12__ {int (* function ) (TYPE_6__*,int **,int **,int ) ;} ;
typedef int * Symbol ;


 int VAR_0 ;
 TYPE_11__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int ) ;
 TYPE_6__* VAR_3 ;
 TYPE_8__ VAR_4 ;
 TYPE_8__* VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int * VAR_6 ;
 int ** FUNC_7 (int,int,int ) ;
 int FUNC_8 (TYPE_6__*,int **,int **,int ) ;
 int * FUNC_9 (int *,int ) ;
 void* FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(rcc_interface_ty VAR_7) {
 int VAR_8, VAR_9;
 Symbol *VAR_10, *VAR_11;






 VAR_3 = FUNC_10(VAR_7->v.rcc_Function.f);
 VAR_6 = FUNC_9(((void*)0), VAR_2);
 FUNC_3();
 VAR_9 = FUNC_1(VAR_7->v.rcc_Function.caller);
 VAR_10 = FUNC_7(VAR_9 + 1, sizeof *VAR_10, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  int *VAR_12 = FUNC_2(VAR_7->v.rcc_Function.caller);
  VAR_10[VAR_8] = FUNC_10(*VAR_12);
  FUNC_5(VAR_12);
 }
 VAR_10[VAR_8] = ((void*)0);
 FUNC_0(&VAR_7->v.rcc_Function.caller);
 VAR_11 = FUNC_7(VAR_9 + 1, sizeof *VAR_11, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  int *VAR_13 = FUNC_2(VAR_7->v.rcc_Function.callee);
  VAR_11[VAR_8] = FUNC_10(*VAR_13);
  FUNC_5(VAR_13);
 }
 VAR_11[VAR_8] = ((void*)0);
 FUNC_0(&VAR_7->v.rcc_Function.callee);
 VAR_3->u.f.callee = VAR_11;
 VAR_3->defined = 1;





 VAR_5 = &VAR_4;
 VAR_5->next = ((void*)0);
 VAR_9 = FUNC_1(VAR_7->v.rcc_Function.codelist);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_6(FUNC_2(VAR_7->v.rcc_Function.codelist));
 FUNC_0(&VAR_7->v.rcc_Function.codelist);




 FUNC_4();
 (*VAR_1->function)(VAR_3, VAR_10, VAR_11, VAR_7->v.rcc_Function.ncalls);
 VAR_3 = ((void*)0);
 VAR_6 = ((void*)0);
}
