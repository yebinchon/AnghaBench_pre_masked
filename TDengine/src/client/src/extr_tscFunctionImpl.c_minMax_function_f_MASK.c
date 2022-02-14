
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double int8_t ;
typedef double int64_t ;
typedef size_t int32_t ;
typedef double int16_t ;
struct TYPE_8__ {int hasResult; } ;
struct TYPE_7__ {scalar_t__ inputType; double* aOutputBuf; int * ptsList; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQLFunctionCtx ;


 int VAR_0 ;
 double FUNC_0 (char*) ;
 float FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*,size_t) ;
 double FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 double FUNC_5 (char*) ;
 double FUNC_6 (char*) ;
 TYPE_4__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_1__*,double,double,size_t,size_t,int ) ;

__attribute__((used)) static void FUNC_9(SQLFunctionCtx *VAR_7, int32_t VAR_8, int32_t VAR_9) {
  char *VAR_10 = FUNC_2(VAR_7, VAR_8);
  TSKEY VAR_11 = VAR_7->ptsList[VAR_8];

  int32_t VAR_12 = 0;
  if (VAR_7->inputType == VAR_6) {
    int8_t *VAR_13 = (int8_t *)VAR_7->aOutputBuf;
    int8_t VAR_14 = FUNC_6(VAR_10);

    FUNC_8(VAR_7, *VAR_13, VAR_14, VAR_12, VAR_9, VAR_11);
  } else if (VAR_7->inputType == VAR_5) {
    int16_t *VAR_15 = VAR_7->aOutputBuf;
    int16_t VAR_16 = FUNC_3(VAR_10);

    FUNC_8(VAR_7, *VAR_15, VAR_16, VAR_12, VAR_9, VAR_11);
  } else if (VAR_7->inputType == VAR_4) {
    int32_t *VAR_17 = VAR_7->aOutputBuf;
    int32_t VAR_18 = FUNC_4(VAR_10);

    FUNC_8(VAR_7, *VAR_17, VAR_18, VAR_12, VAR_9, VAR_11);
  } else if (VAR_7->inputType == VAR_1) {
    int64_t *VAR_19 = VAR_7->aOutputBuf;
    int64_t VAR_20 = FUNC_5(VAR_10);

    FUNC_8(VAR_7, *VAR_19, VAR_20, VAR_12, VAR_9, VAR_11);
  } else if (VAR_7->inputType == VAR_3) {
    float *VAR_21 = VAR_7->aOutputBuf;
    float VAR_22 = FUNC_1(VAR_10);

    FUNC_8(VAR_7, *VAR_21, VAR_22, VAR_12, VAR_9, VAR_11);
  } else if (VAR_7->inputType == VAR_2) {
    double *VAR_23 = VAR_7->aOutputBuf;
    double VAR_24 = FUNC_0(VAR_10);

    FUNC_8(VAR_7, *VAR_23, VAR_24, VAR_12, VAR_9, VAR_11);
  }

  FUNC_7(VAR_7)->hasResult = VAR_0;
}
