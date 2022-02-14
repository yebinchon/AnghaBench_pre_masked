
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_12__ {int inputType; scalar_t__ hasNull; } ;
struct TYPE_11__ {TYPE_1__* interResultBuf; } ;
struct TYPE_10__ {scalar_t__ stage; double avg; int res; } ;
typedef TYPE_1__ SStddevInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int,int) ;






 int FUNC_10 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_11 (void*,int ) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void FUNC_13(SQLFunctionCtx *VAR_0, int32_t VAR_1) {

  SResultInfo *VAR_2 = FUNC_7(VAR_0);
  SStddevInfo *VAR_3 = VAR_2->interResultBuf;


  if (VAR_3->stage == 0) {
    FUNC_10(VAR_0, VAR_1);
  } else {
    double VAR_4 = VAR_3->avg;
    void * VAR_5 = FUNC_2(VAR_0, VAR_1);

    if (VAR_0->hasNull && FUNC_11(VAR_5, VAR_0->inputType)) {
      return;
    }

    switch (VAR_0->inputType) {
      case 130: {
        VAR_3->res += FUNC_8(FUNC_4(VAR_5) - VAR_4);
        break;
      }
      case 131: {
        VAR_3->res += FUNC_8(FUNC_1(VAR_5) - VAR_4);
        break;
      }
      case 132: {
        VAR_3->res += FUNC_8(FUNC_0(VAR_5) - VAR_4);
        break;
      }
      case 133: {
        VAR_3->res += FUNC_8(FUNC_5(VAR_5) - VAR_4);
        break;
      }
      case 129: {
        VAR_3->res += FUNC_8(FUNC_3(VAR_5) - VAR_4);
        break;
      }
      case 128: {
        VAR_3->res += FUNC_8(FUNC_6(VAR_5) - VAR_4);
        break;
      }
      default:
        FUNC_12("stddev function not support data type:%d", VAR_0->inputType);
    }

    FUNC_9(VAR_0, 1, 1);
  }
}
