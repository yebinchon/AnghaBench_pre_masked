
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** upvals; TYPE_4__* p; } ;
struct TYPE_7__ {int nupvalues; int * upvalue; scalar_t__ isC; } ;
struct TYPE_11__ {TYPE_3__ l; TYPE_1__ c; } ;
struct TYPE_10__ {int sizeupvalues; int * upvalues; } ;
struct TYPE_8__ {int * v; } ;
typedef int TValue ;
typedef int StkId ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ Closure ;


 TYPE_5__* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const char *FUNC_3 (StkId VAR_0, int VAR_1, TValue **VAR_2) {
  Closure *VAR_3;
  if (!FUNC_2(VAR_0)) return ((void*)0);
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3->c.isC) {
    if (!(1 <= VAR_1 && VAR_1 <= VAR_3->c.nupvalues)) return ((void*)0);
    *VAR_2 = &VAR_3->c.upvalue[VAR_1-1];
    return "";
  }
  else {
    Proto *VAR_4 = VAR_3->l.p;
    if (!(1 <= VAR_1 && VAR_1 <= VAR_4->sizeupvalues)) return ((void*)0);
    *VAR_2 = VAR_3->l.upvals[VAR_1-1]->v;
    return FUNC_1(VAR_4->upvalues[VAR_1-1]);
  }
}
