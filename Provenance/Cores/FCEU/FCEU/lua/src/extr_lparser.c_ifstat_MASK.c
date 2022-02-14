
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ token; } ;
struct TYPE_9__ {TYPE_1__ t; int * fs; } ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7 (LexState *VAR_5, int VAR_6) {

  FuncState *VAR_7 = VAR_5->fs;
  int VAR_8;
  int VAR_9 = VAR_0;
  VAR_8 = FUNC_6(VAR_5);
  while (VAR_5->t.token == VAR_2) {
    FUNC_2(VAR_7, &VAR_9, FUNC_3(VAR_7));
    FUNC_4(VAR_7, VAR_8);
    VAR_8 = FUNC_6(VAR_5);
  }
  if (VAR_5->t.token == VAR_1) {
    FUNC_2(VAR_7, &VAR_9, FUNC_3(VAR_7));
    FUNC_4(VAR_7, VAR_8);
    FUNC_5(VAR_5);
    FUNC_0(VAR_5);
  }
  else
    FUNC_2(VAR_7, &VAR_9, VAR_8);
  FUNC_4(VAR_7, VAR_9);
  FUNC_1(VAR_5, VAR_3, VAR_4, VAR_6);
}
