
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_18__ {int i64Key; char* pz; } ;
struct TYPE_17__ {TYPE_3__* pInterpDetail; } ;
struct TYPE_16__ {scalar_t__ type; int primaryCol; int ts; } ;
struct TYPE_15__ {char* val; int key; } ;
struct TYPE_14__ {char* aOutputBuf; scalar_t__ inputType; scalar_t__ outputType; char size; TYPE_8__* param; int inputBytes; int outputBytes; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQLFunctionCtx ;
typedef TYPE_2__ SPoint ;
typedef TYPE_3__ SInterpInfoDetail ;
typedef TYPE_4__ SInterpInfo ;


 float FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*,char*,scalar_t__) ;
 int FUNC_10 (scalar_t__,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(SQLFunctionCtx *VAR_11) {

  if (VAR_11->param[3].i64Key == 1) {
    char *VAR_12 = FUNC_1(VAR_11);
    FUNC_4(VAR_11->aOutputBuf, VAR_12, VAR_11->inputBytes, VAR_11->inputType);
  } else {




    FUNC_3(VAR_11->param[3].i64Key == 2);

    SInterpInfo VAR_13 = *(SInterpInfo *)VAR_11->aOutputBuf;
    SInterpInfoDetail *VAR_14 = VAR_13.pInterpDetail;


    if (VAR_14->type == VAR_6) {
      VAR_11->param[3].i64Key = 0;
    } else if (VAR_14->primaryCol == 1) {
      *(TSKEY *)VAR_11->aOutputBuf = VAR_14->ts;
    } else {
      if (VAR_14->type == VAR_7) {
        FUNC_7(VAR_11->aOutputBuf, VAR_11->outputType, VAR_11->outputBytes);
      } else if (VAR_14->type == VAR_9) {
        FUNC_9(&VAR_11->param[1], VAR_11->aOutputBuf, VAR_11->inputType);
      } else if (VAR_14->type == VAR_8) {
        char *VAR_15 = VAR_11->param[1].pz;
        char *VAR_16 = VAR_15 + VAR_10;

        if (VAR_11->outputType == VAR_2) {
          float VAR_17 = FUNC_0(VAR_16);
          FUNC_4(VAR_11->aOutputBuf, &VAR_17, VAR_11->outputBytes, VAR_11->outputType);
        } else {
          FUNC_4(VAR_11->aOutputBuf, VAR_16, VAR_11->outputBytes, VAR_11->outputType);
        }

      } else if (VAR_14->type == VAR_5) {
        char *VAR_18 = VAR_11->param[1].pz;
        char *VAR_19 = VAR_11->param[2].pz;

        char *VAR_20 = VAR_18 + VAR_10;
        char *VAR_21 = VAR_19 + VAR_10;

        SPoint VAR_22 = {.key = *(TSKEY *)VAR_18, .val = &VAR_11->param[1].i64Key};
        SPoint VAR_23 = {.key = *(TSKEY *)VAR_19, .val = &VAR_11->param[2].i64Key};

        SPoint VAR_24 = {.key = VAR_14->ts, .val = VAR_11->aOutputBuf};

        int32_t VAR_25 = VAR_11->inputType;
        if ((VAR_25 >= VAR_4 && VAR_25 <= VAR_0) ||
            VAR_25 == VAR_3 || VAR_25 == VAR_1) {
          VAR_22 = VAR_20;

          VAR_23 = VAR_21;

          if (FUNC_6(VAR_20, VAR_25) || FUNC_6(VAR_21, VAR_25)) {
            FUNC_7(VAR_11->aOutputBuf, VAR_25, VAR_11->inputBytes);
          } else {
            FUNC_10(VAR_11->outputType, &VAR_22, &VAR_23, &VAR_24);
          }
        } else if (VAR_25 == VAR_2) {
          float VAR_26 = FUNC_0(VAR_20);
          float VAR_27 = FUNC_0(VAR_21);

          VAR_22 = &VAR_26;
          VAR_23 = &VAR_27;

          if (FUNC_6(VAR_20, VAR_25) || FUNC_6(VAR_21, VAR_25)) {
            FUNC_7(VAR_11->aOutputBuf, VAR_25, VAR_11->inputBytes);
          } else {
            FUNC_10(VAR_11->outputType, &VAR_22, &VAR_23, &VAR_24);
          }

        } else {
          FUNC_7(VAR_11->aOutputBuf, VAR_25, VAR_11->inputBytes);
        }
      }
    }

    FUNC_5(VAR_13.pInterpDetail);
  }

  VAR_11->size = VAR_11->param[3].i64Key;

  FUNC_8(&VAR_11->param[1]);
  FUNC_8(&VAR_11->param[2]);


  FUNC_2(VAR_11, VAR_11->size, 1);
}
