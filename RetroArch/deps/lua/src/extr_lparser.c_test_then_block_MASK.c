
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int f; int t; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_15__ {scalar_t__ token; } ;
struct TYPE_17__ {TYPE_1__ t; int * fs; } ;
typedef TYPE_3__ LexState ;
typedef int FuncState ;
typedef int BlockCnt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,char) ;

__attribute__((used)) static void FUNC_14 (LexState *VAR_5, int *VAR_6) {

  BlockCnt VAR_7;
  FuncState *VAR_8 = VAR_5->fs;
  expdesc VAR_9;
  int VAR_10;
  FUNC_11(VAR_5);
  FUNC_3(VAR_5, &VAR_9);
  FUNC_1(VAR_5, VAR_4);
  if (VAR_5->t.token == VAR_3 || VAR_5->t.token == VAR_0) {
    FUNC_7(VAR_5->fs, &VAR_9);
    FUNC_2(VAR_8, &VAR_7, 0);
    FUNC_4(VAR_5, VAR_9.t);
    while (FUNC_13(VAR_5, ';')) {}
    if (FUNC_0(VAR_5, 0)) {
      FUNC_5(VAR_8);
      return;
    }
    else
      VAR_10 = FUNC_9(VAR_8);
  }
  else {
    FUNC_8(VAR_5->fs, &VAR_9);
    FUNC_2(VAR_8, &VAR_7, 0);
    VAR_10 = VAR_9.f;
  }
  FUNC_12(VAR_5);
  FUNC_5(VAR_8);
  if (VAR_5->t.token == VAR_1 ||
      VAR_5->t.token == VAR_2)
    FUNC_6(VAR_8, VAR_6, FUNC_9(VAR_8));
  FUNC_10(VAR_8, VAR_10);
}
