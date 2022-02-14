
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_18__ {TYPE_1__* f; } ;
struct TYPE_17__ {int linenumber; } ;
struct TYPE_16__ {int linedefined; int lastlinedefined; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_9 (LexState *VAR_2, expdesc *VAR_3, int VAR_4, int VAR_5) {

  FuncState VAR_6;
  FUNC_6(VAR_2, &VAR_6);
  VAR_6.f->linedefined = VAR_5;
  FUNC_2(VAR_2, '(');
  if (VAR_4) {
    FUNC_5(VAR_2, "self", 0);
    FUNC_0(VAR_2, 1);
  }
  FUNC_7(VAR_2);
  FUNC_2(VAR_2, ')');
  FUNC_3(VAR_2);
  VAR_6.f->lastlinedefined = VAR_2->linenumber;
  FUNC_1(VAR_2, VAR_0, VAR_1, VAR_5);
  FUNC_4(VAR_2);
  FUNC_8(VAR_2, &VAR_6, VAR_3);
}
