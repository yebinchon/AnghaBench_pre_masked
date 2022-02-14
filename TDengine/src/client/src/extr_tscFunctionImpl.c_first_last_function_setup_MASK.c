
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* param; } ;
struct TYPE_5__ {scalar_t__ i64Key; scalar_t__ nType; } ;
typedef TYPE_2__ SQLFunctionCtx ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_1(SQLFunctionCtx *VAR_0) {
  if (!FUNC_0(VAR_0)) {
    return 0;
  }


  VAR_0->param[1].nType = 0;
  VAR_0->param[1].i64Key = 0;

  return 1;
}
