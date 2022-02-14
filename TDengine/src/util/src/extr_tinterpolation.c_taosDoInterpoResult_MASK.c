
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int data; } ;
typedef TYPE_2__ tFilePage ;
struct TYPE_16__ {int* colOffset; size_t numOfCols; TYPE_1__* pFields; } ;
typedef TYPE_3__ tColModel ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_17__ {char* prevValues; char* nextValues; scalar_t__ numOfTags; char** pTags; scalar_t__ startTimestamp; size_t rowIdx; scalar_t__ numOfRawDataInRows; scalar_t__ numOfCurrentInterpo; int numOfTotalInterpo; int order; } ;
struct TYPE_14__ {int bytes; int type; } ;
typedef TYPE_4__ SInterpolationInfo ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,int,int ) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,TYPE_2__**,TYPE_3__*,scalar_t__*,char**,scalar_t__,scalar_t__*,scalar_t__,scalar_t__,scalar_t__,char**,int) ;
 char* FUNC_5 (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (char*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__**,char**,TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (char*) ;

int32_t FUNC_11(SInterpolationInfo* VAR_3, int16_t VAR_4, tFilePage** VAR_5,
                            int32_t VAR_6, int32_t VAR_7, int64_t VAR_8,
                            int64_t* VAR_9, tColModel* VAR_10, char** VAR_11, int64_t* VAR_12,
                            int32_t* VAR_13, int32_t VAR_14) {
  int32_t VAR_15 = 0;
  VAR_3->numOfCurrentInterpo = 0;

  char** VAR_16 = &VAR_3->prevValues;
  char** VAR_17 = &VAR_3->nextValues;

  int32_t VAR_18 = VAR_3->numOfTags;
  char** VAR_19 = VAR_3->pTags;

  int32_t VAR_20 = FUNC_0(VAR_3->order);

  if (VAR_6 == 0) {




    while (VAR_15 < VAR_7) {
      FUNC_4(VAR_3, VAR_4, VAR_5, VAR_10, &VAR_15, VAR_11, VAR_8, VAR_12,
                          VAR_3->startTimestamp, VAR_14, VAR_18, VAR_19, 1);
    }
    VAR_3->numOfTotalInterpo += VAR_3->numOfCurrentInterpo;
    return VAR_7;

  } else {
    while (1) {
      int64_t VAR_21 = VAR_9[VAR_3->rowIdx];

      if ((VAR_3->startTimestamp < VAR_21 && FUNC_1(VAR_3)) ||
          (VAR_3->startTimestamp > VAR_21 && !FUNC_1(VAR_3))) {

        if (*VAR_17 == ((void*)0)) {
          *VAR_17 =
              FUNC_3(1, VAR_10->colOffset[VAR_10->numOfCols - 1] + VAR_10->pFields[VAR_10->numOfCols - 1].bytes);
          for (int VAR_22 = 1; VAR_22 < VAR_10->numOfCols; VAR_22++) {
            FUNC_8(*VAR_17 + VAR_10->colOffset[VAR_22], VAR_10->pFields[VAR_22].type, VAR_10->pFields[VAR_22].bytes);
          }
        }

        int32_t VAR_23 = VAR_3->rowIdx;
        for (int32_t VAR_24 = 0, VAR_25 = 0; VAR_25 < VAR_10->numOfCols - VAR_18; ++VAR_25) {
          FUNC_7(*VAR_17 + VAR_24, VAR_11[VAR_25] + VAR_23 * VAR_10->pFields[VAR_25].bytes, VAR_10->pFields[VAR_25].bytes);
          VAR_24 += VAR_10->pFields[VAR_25].bytes;
        }
      }

      while (((VAR_3->startTimestamp < VAR_21 && FUNC_1(VAR_3)) ||
              (VAR_3->startTimestamp > VAR_21 && !FUNC_1(VAR_3))) &&
             VAR_15 < VAR_7) {
        FUNC_4(VAR_3, VAR_4, VAR_5, VAR_10, &VAR_15, VAR_11, VAR_8, VAR_12,
                            VAR_21, VAR_14, VAR_18, VAR_19, 0);
      }


      if ((VAR_15 == VAR_7 && FUNC_1(VAR_3)) ||
          (VAR_15 < 0 && !FUNC_1(VAR_3))) {
        VAR_3->numOfTotalInterpo += VAR_3->numOfCurrentInterpo;
        return VAR_7;
      }

      if (VAR_3->startTimestamp == VAR_21) {
        if (*VAR_16 == ((void*)0)) {
          *VAR_16 =
              FUNC_3(1, VAR_10->colOffset[VAR_10->numOfCols - 1] + VAR_10->pFields[VAR_10->numOfCols - 1].bytes);
          for (int VAR_26 = 1; VAR_26 < VAR_10->numOfCols; VAR_26++) {
            FUNC_8(*VAR_16 + VAR_10->colOffset[VAR_26], VAR_10->pFields[VAR_26].type, VAR_10->pFields[VAR_26].bytes);
          }
        }


        int32_t VAR_27 = 0;
        for (int32_t VAR_28 = 0; VAR_27 < VAR_10->numOfCols - VAR_18; ++VAR_27) {
          char* VAR_29 = FUNC_5(VAR_5[VAR_27]->data, VAR_10->pFields[VAR_27].bytes, VAR_3->order, VAR_14, VAR_15);

          if (VAR_27 == 0 ||
              (VAR_13[VAR_27] != VAR_0 &&
               !FUNC_6(VAR_11[VAR_27] + VAR_3->rowIdx * VAR_10->pFields[VAR_27].bytes, VAR_10->pFields[VAR_27].type)) ||
              (VAR_13[VAR_27] == VAR_0 &&
               *(int64_t*)(VAR_11[VAR_27] + VAR_3->rowIdx * VAR_10->pFields[VAR_27].bytes) != 0)) {
            FUNC_2(VAR_29, VAR_11[VAR_27] + VAR_3->rowIdx * VAR_10->pFields[VAR_27].bytes, VAR_10->pFields[VAR_27].bytes,
                      VAR_10->pFields[VAR_27].type);
            FUNC_7(*VAR_16 + VAR_28, VAR_11[VAR_27] + VAR_3->rowIdx * VAR_10->pFields[VAR_27].bytes,
                   VAR_10->pFields[VAR_27].bytes);
          } else {
            if (VAR_4 == VAR_2) {
              FUNC_2(VAR_29, *VAR_16 + VAR_10->colOffset[VAR_27], VAR_10->pFields[VAR_27].bytes, VAR_10->pFields[VAR_27].type);
            } else if (VAR_4 == VAR_1) {

            } else {
              FUNC_2(VAR_29, (char*)&VAR_12[VAR_27], VAR_10->pFields[VAR_27].bytes, VAR_10->pFields[VAR_27].type);
            }
          }
          VAR_28 += VAR_10->pFields[VAR_27].bytes;
        }


        FUNC_9(VAR_5, VAR_19, VAR_10, VAR_3->order, VAR_10->numOfCols - VAR_18, VAR_14,
                                    VAR_15);
      }

      VAR_3->startTimestamp += (VAR_8 * VAR_20);
      VAR_3->rowIdx += VAR_20;
      VAR_15 += 1;

      if ((VAR_3->rowIdx >= VAR_3->numOfRawDataInRows && FUNC_1(VAR_3)) ||
          (VAR_3->rowIdx < 0 && !FUNC_1(VAR_3)) || VAR_15 >= VAR_7) {
        if (VAR_3->rowIdx >= VAR_3->numOfRawDataInRows || VAR_3->rowIdx < 0) {
          VAR_3->rowIdx = -1;
          VAR_3->numOfRawDataInRows = 0;


          FUNC_10(*VAR_17);
        }

        VAR_3->numOfTotalInterpo += VAR_3->numOfCurrentInterpo;
        return VAR_15;
      }
    }
  }
}
