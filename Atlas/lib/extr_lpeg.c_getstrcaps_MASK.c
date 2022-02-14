
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int s; } ;
struct TYPE_9__ {TYPE_3__* cap; int L; } ;
struct TYPE_8__ {int e; int s; } ;
typedef TYPE_1__ StrAux ;
typedef TYPE_2__ CapState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5 (CapState *VAR_2, StrAux *VAR_3, int VAR_4) {
  int VAR_5 = VAR_4++;
  if (VAR_5 < VAR_1) VAR_3[VAR_5].s = VAR_2->cap->s;
  if (!FUNC_3(VAR_2->cap++)) {
    while (!FUNC_2(VAR_2->cap)) {
      if (FUNC_0(VAR_2->cap) != VAR_0)
        return FUNC_4(VAR_2->L,
                          "invalid capture #%d in replacement pattern", VAR_4);
      VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_4);
    }
    VAR_2->cap++;
  }
  if (VAR_5 < VAR_1) VAR_3[VAR_5].e = FUNC_1(VAR_2->cap - 1);
  return VAR_4;
}
