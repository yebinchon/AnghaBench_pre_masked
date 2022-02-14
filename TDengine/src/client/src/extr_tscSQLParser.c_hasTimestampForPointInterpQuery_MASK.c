
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stime; scalar_t__ etime; } ;
typedef TYPE_1__ SSqlCmd ;


 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(SSqlCmd* VAR_0) {
  if (!FUNC_0(VAR_0)) {
    return 1;
  }

  return (VAR_0->stime == VAR_0->etime) && (VAR_0->stime != 0);
}
