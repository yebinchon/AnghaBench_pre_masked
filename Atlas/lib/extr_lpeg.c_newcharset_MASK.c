
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int code; } ;
struct TYPE_6__ {scalar_t__* buff; TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,scalar_t__) ;
 TYPE_2__* FUNC_1 (int *,int ) ;

__attribute__((used)) static Instruction *FUNC_2 (lua_State *VAR_3) {
  Instruction *VAR_4 = FUNC_1(VAR_3, VAR_0);
  VAR_4[0].i.code = VAR_1;
  FUNC_0(VAR_2, VAR_4[1].buff[VAR_2] = 0);
  return VAR_4;
}
