
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dKey; int i64Key; } ;
struct TYPE_11__ {TYPE_2__ v; } ;
typedef TYPE_3__ tValuePair ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {scalar_t__ interResultBuf; } ;
struct TYPE_13__ {int inputType; TYPE_1__* param; } ;
struct TYPE_12__ {scalar_t__ num; TYPE_3__* res; } ;
struct TYPE_9__ {scalar_t__ i64Key; } ;
typedef TYPE_4__ STopBotInfo ;
typedef TYPE_5__ SQLFunctionCtx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_7__* FUNC_6 (TYPE_5__*) ;






 scalar_t__ VAR_0 ;

bool FUNC_7(SQLFunctionCtx *VAR_1, int32_t VAR_2, char *VAR_3, char *VAR_4) {
  STopBotInfo *VAR_5 = (STopBotInfo *)FUNC_6(VAR_1)->interResultBuf;

  int32_t VAR_6 = VAR_5->num;


  if (VAR_6 < VAR_1->param[0].i64Key) {
    return 1;
  }

  tValuePair *VAR_7 = VAR_5->res;

  if (VAR_2 == VAR_0) {
    switch (VAR_1->inputType) {
      case 128:
        return FUNC_5(VAR_4) > VAR_7[0].v.i64Key;
      case 129:
        return FUNC_2(VAR_4) > VAR_7[0].v.i64Key;
      case 130:
        return FUNC_3(VAR_4) > VAR_7[0].v.i64Key;
      case 133:
        return FUNC_4(VAR_4) > VAR_7[0].v.i64Key;
      case 131:
        return FUNC_1(VAR_4) > VAR_7[0].v.dKey;
      case 132:
        return FUNC_0(VAR_4) > VAR_7[0].v.dKey;
      default:
        return 1;
    }
  } else {
    switch (VAR_1->inputType) {
      case 128:
        return FUNC_5(VAR_3) < VAR_7[0].v.i64Key;
      case 129:
        return FUNC_2(VAR_3) < VAR_7[0].v.i64Key;
      case 130:
        return FUNC_3(VAR_3) < VAR_7[0].v.i64Key;
      case 133:
        return FUNC_4(VAR_3) < VAR_7[0].v.i64Key;
      case 131:
        return FUNC_1(VAR_3) < VAR_7[0].v.dKey;
      case 132:
        return FUNC_0(VAR_3) < VAR_7[0].v.dKey;
      default:
        return 1;
    }
  }
}
