
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ l_mem ;
struct TYPE_15__ {int gcfinnum; scalar_t__ GCmemtrav; int currentwhite; int * allweak; int * weak; int * ephemeron; int * gray; int l_registry; int gcstate; int mainthread; int * grayagain; } ;
typedef TYPE_1__ global_State ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;

__attribute__((used)) static l_mem FUNC_16 (lua_State *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_1);
  l_mem VAR_3;
  GCObject *VAR_4, *VAR_5;
  GCObject *VAR_6 = VAR_2->grayagain;
  FUNC_7(VAR_2->ephemeron == ((void*)0) && VAR_2->weak == ((void*)0));
  FUNC_7(!FUNC_5(VAR_2->mainthread));
  VAR_2->gcstate = VAR_0;
  VAR_2->GCmemtrav = 0;
  FUNC_10(VAR_2, VAR_1);

  FUNC_11(VAR_2, &VAR_2->l_registry);
  FUNC_9(VAR_2);

  FUNC_14(VAR_2);
  FUNC_13(VAR_2);
  VAR_3 = VAR_2->GCmemtrav;
  VAR_2->gray = VAR_6;
  FUNC_13(VAR_2);
  VAR_2->GCmemtrav = 0;
  FUNC_4(VAR_2);


  FUNC_3(VAR_2, VAR_2->weak, ((void*)0));
  FUNC_3(VAR_2, VAR_2->allweak, ((void*)0));
  VAR_4 = VAR_2->weak; VAR_5 = VAR_2->allweak;
  VAR_3 += VAR_2->GCmemtrav;
  FUNC_15(VAR_2, 0);
  VAR_2->gcfinnum = 1;
  FUNC_8(VAR_2);
  FUNC_13(VAR_2);
  VAR_2->GCmemtrav = 0;
  FUNC_4(VAR_2);


  FUNC_2(VAR_2, VAR_2->ephemeron, ((void*)0));
  FUNC_2(VAR_2, VAR_2->allweak, ((void*)0));

  FUNC_3(VAR_2, VAR_2->weak, VAR_4);
  FUNC_3(VAR_2, VAR_2->allweak, VAR_5);
  FUNC_6(VAR_2);
  VAR_2->currentwhite = FUNC_1(FUNC_12(VAR_2));
  VAR_3 += VAR_2->GCmemtrav;
  return VAR_3;
}
