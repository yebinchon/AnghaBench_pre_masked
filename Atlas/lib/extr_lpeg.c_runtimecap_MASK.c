
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {char const* s; int ptop; scalar_t__ valuecached; int * L; TYPE_1__* cap; TYPE_1__* ocap; } ;
struct TYPE_10__ {char const* s; int kind; } ;
typedef TYPE_1__ Capture ;
typedef TYPE_2__ CapState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_4, Capture *VAR_5, Capture *VAR_6,
                       const char *VAR_7, const char *VAR_8, int VAR_9) {
  CapState VAR_10;
  int VAR_11;
  Capture *VAR_12 = FUNC_2(VAR_5);
  FUNC_0(FUNC_1(VAR_12) == VAR_1);
  VAR_5->kind = VAR_0;
  VAR_5->s = VAR_8;
  VAR_10.ocap = VAR_6; VAR_10.cap = VAR_12; VAR_10.L = VAR_4;
  VAR_10.s = VAR_7; VAR_10.valuecached = 0; VAR_10.ptop = VAR_9;
  FUNC_3(VAR_4, 4, "too many runtime captures");
  FUNC_8(&VAR_10);
  FUNC_6(VAR_4, VAR_3);
  FUNC_5(VAR_4, VAR_8 - VAR_7 + 1);
  VAR_11 = FUNC_7(&VAR_10, 0);
  FUNC_4(VAR_4, VAR_11 + 2, VAR_2);
  return VAR_5 - VAR_12;
}
