
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cap; } ;
struct TYPE_8__ {int idx; } ;
typedef TYPE_1__ Capture ;
typedef TYPE_2__ CapState ;


 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2 (CapState *VAR_0) {
  int VAR_1 = (VAR_0->cap)->idx;
  Capture *VAR_2 = VAR_0->cap;
  Capture *VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
  VAR_0->cap = VAR_3;
  VAR_1 = FUNC_1(VAR_0);
  VAR_0->cap = VAR_2 + 1;
  return VAR_1;
}
