
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* p; } ;
struct TYPE_8__ {scalar_t__ base; } ;
struct TYPE_9__ {TYPE_2__ l; } ;
struct TYPE_10__ {scalar_t__ func; TYPE_3__ u; } ;
struct TYPE_7__ {int numparams; } ;
typedef scalar_t__ StkId ;
typedef TYPE_4__ CallInfo ;


 int FUNC_0 (scalar_t__) ;
 TYPE_6__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static const char *FUNC_2 (CallInfo *VAR_0, int VAR_1, StkId *VAR_2) {
  int VAR_3 = FUNC_1(VAR_0->func)->p->numparams;
  if (VAR_1 >= FUNC_0(VAR_0->u.l.base - VAR_0->func) - VAR_3)
    return ((void*)0);
  else {
    *VAR_2 = VAR_0->func + VAR_3 + VAR_1;
    return "(*vararg)";
  }
}
