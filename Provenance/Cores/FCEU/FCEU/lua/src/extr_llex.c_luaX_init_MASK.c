
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int reserved; } ;
struct TYPE_6__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int * VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5 (lua_State *VAR_3) {
  int VAR_4;
  for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
    TString *VAR_5 = FUNC_2(VAR_3, VAR_2[VAR_4]);
    FUNC_1(VAR_5);
    FUNC_3(FUNC_4(VAR_2[VAR_4])+1 <= VAR_1);
    VAR_5->tsv.reserved = FUNC_0(VAR_4+1);
  }
}
