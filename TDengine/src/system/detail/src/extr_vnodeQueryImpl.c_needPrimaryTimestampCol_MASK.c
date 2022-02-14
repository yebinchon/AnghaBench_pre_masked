
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ keyFirst; scalar_t__ keyLast; } ;
struct TYPE_6__ {scalar_t__ lastKey; scalar_t__ ekey; } ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SBlockInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

bool FUNC_1(SQuery *VAR_0, SBlockInfo *VAR_1) {




  bool VAR_2 = (VAR_0->lastKey >= VAR_1->keyFirst && VAR_0->lastKey <= VAR_1->keyLast) ||
                       (VAR_0->ekey >= VAR_1->keyFirst && VAR_0->ekey <= VAR_1->keyLast) ||
                       FUNC_0(VAR_0);

  return VAR_2;
}
