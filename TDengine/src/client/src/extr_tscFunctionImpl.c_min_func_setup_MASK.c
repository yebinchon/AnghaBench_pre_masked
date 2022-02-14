
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_4__ {int inputType; scalar_t__ aOutputBuf; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 double VAR_0 ;
 float VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_3(SQLFunctionCtx *VAR_7) {
  if (!FUNC_1(VAR_7)) {
    return 0;
  }

  FUNC_0();

  switch (VAR_6) {
    case 130:
      *((int32_t *)VAR_7->aOutputBuf) = VAR_3;
      break;
    case 131:
      *((float *)VAR_7->aOutputBuf) = VAR_1;
      break;
    case 132:
      *((double *)VAR_7->aOutputBuf) = VAR_0;
      break;
    case 133:
      *((int64_t *)VAR_7->aOutputBuf) = VAR_4;
      break;
    case 129:
      *((int16_t *)VAR_7->aOutputBuf) = VAR_2;
      break;
    case 128:
      *((int8_t *)VAR_7->aOutputBuf) = VAR_5;
      break;
    default:
      FUNC_2("illegal data type:%d in min/max query", VAR_7->inputType);
  }

  return 1;
}
