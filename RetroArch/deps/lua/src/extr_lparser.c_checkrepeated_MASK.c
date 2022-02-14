
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int L; } ;
struct TYPE_11__ {TYPE_5__* ls; TYPE_1__* bl; } ;
struct TYPE_10__ {int n; TYPE_2__* arr; } ;
struct TYPE_9__ {int line; int name; } ;
struct TYPE_8__ {int firstlabel; } ;
typedef int TString ;
typedef TYPE_3__ Labellist ;
typedef TYPE_4__ FuncState ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (TYPE_5__*,char const*) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_0, Labellist *VAR_1, TString *VAR_2) {
  int VAR_3;
  for (VAR_3 = VAR_0->bl->firstlabel; VAR_3 < VAR_1->n; VAR_3++) {
    if (FUNC_0(VAR_2, VAR_1->arr[VAR_3].name)) {
      const char *VAR_4 = FUNC_2(VAR_0->ls->L,
                          "label '%s' already defined on line %d",
                          FUNC_1(VAR_2), VAR_1->arr[VAR_3].line);
      FUNC_3(VAR_0->ls, VAR_4);
    }
  }
}
