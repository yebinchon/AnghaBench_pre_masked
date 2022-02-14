
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int ZIO ;
struct TYPE_5__ {int token; } ;
struct TYPE_6__ {char decpoint; int linenumber; int lastline; int buff; int * L; int * source; int * fs; int * z; TYPE_1__ lookahead; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2 (lua_State *VAR_2, LexState *VAR_3, ZIO *VAR_4, TString *VAR_5) {
  VAR_3->decpoint = '.';
  VAR_3->L = VAR_2;
  VAR_3->lookahead.token = VAR_1;
  VAR_3->z = VAR_4;
  VAR_3->fs = ((void*)0);
  VAR_3->linenumber = 1;
  VAR_3->lastline = 1;
  VAR_3->source = VAR_5;
  FUNC_0(VAR_3->L, VAR_3->buff, VAR_0);
  FUNC_1(VAR_3);
}
