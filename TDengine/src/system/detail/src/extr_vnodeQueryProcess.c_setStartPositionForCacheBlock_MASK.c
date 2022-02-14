
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numOfPoints; } ;
struct TYPE_6__ {scalar_t__ pos; } ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SCacheBlock ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SQuery *VAR_0, SCacheBlock *VAR_1, bool *VAR_2) {
  if (!(*VAR_2)) {
    if (FUNC_0(VAR_0)) {
      VAR_0->pos = 0;
    } else {
      VAR_0->pos = VAR_1->numOfPoints - 1;
    }
  } else {
    (*VAR_2) = 0;
  }
}
