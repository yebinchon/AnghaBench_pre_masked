
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* peek ) (unsigned int,unsigned int,int ) ;int ud; } ;
typedef TYPE_1__ rc_luapeek_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_0) {
  unsigned VAR_1 = (unsigned)FUNC_0(VAR_0, 1);
  unsigned VAR_2 = (unsigned)FUNC_0(VAR_0, 2);
  rc_luapeek_t* VAR_3 = (rc_luapeek_t*)FUNC_2(VAR_0, 3);

  unsigned VAR_4 = VAR_3->peek(VAR_1, VAR_2, VAR_3->ud);

  FUNC_1(VAR_0, VAR_4);
  return 1;
}
