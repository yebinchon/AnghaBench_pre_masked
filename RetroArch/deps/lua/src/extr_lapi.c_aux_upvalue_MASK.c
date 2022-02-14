
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * v; } ;
typedef TYPE_2__ UpVal ;
struct TYPE_14__ {int nupvalues; int * upvalue; } ;
struct TYPE_13__ {TYPE_2__** upvals; TYPE_3__* p; } ;
struct TYPE_12__ {int sizeupvalues; TYPE_1__* upvalues; } ;
struct TYPE_10__ {int * name; } ;
typedef int TValue ;
typedef int TString ;
typedef int StkId ;
typedef TYPE_3__ Proto ;
typedef TYPE_4__ LClosure ;
typedef TYPE_5__ CClosure ;




 TYPE_5__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 char const* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const char *FUNC_4 (StkId VAR_0, int VAR_1, TValue **VAR_2,
                                CClosure **VAR_3, UpVal **VAR_4) {
  switch (FUNC_3(VAR_0)) {
    case 129: {
      CClosure *VAR_5 = FUNC_0(VAR_0);
      if (!(1 <= VAR_1 && VAR_1 <= VAR_5->nupvalues)) return ((void*)0);
      *VAR_2 = &VAR_5->upvalue[VAR_1-1];
      if (VAR_3) *VAR_3 = VAR_5;
      return "";
    }
    case 128: {
      LClosure *VAR_6 = FUNC_1(VAR_0);
      TString *VAR_7;
      Proto *VAR_8 = VAR_6->p;
      if (!(1 <= VAR_1 && VAR_1 <= VAR_8->sizeupvalues)) return ((void*)0);
      *VAR_2 = VAR_6->upvals[VAR_1-1]->v;
      if (VAR_4) *VAR_4 = VAR_6->upvals[VAR_1 - 1];
      VAR_7 = VAR_8->upvalues[VAR_1-1].name;
      return (VAR_7 == ((void*)0)) ? "(*no name)" : FUNC_2(VAR_7);
    }
    default: return ((void*)0);
  }
}
