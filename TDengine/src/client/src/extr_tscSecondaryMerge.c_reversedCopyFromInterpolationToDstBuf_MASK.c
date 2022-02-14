
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {char* data; } ;
typedef TYPE_3__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_21__ {TYPE_2__* resColModel; } ;
struct TYPE_15__ {size_t numOfExprs; } ;
struct TYPE_20__ {TYPE_1__ exprsInfo; } ;
struct TYPE_19__ {int numOfRows; char* data; } ;
struct TYPE_18__ {int bytes; } ;
struct TYPE_16__ {size_t* colOffset; } ;
typedef TYPE_4__ TAOS_FIELD ;
typedef TYPE_5__ SSqlRes ;
typedef TYPE_6__ SSqlCmd ;
typedef TYPE_7__ SLocalReducer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 TYPE_4__* FUNC_2 (TYPE_6__*,size_t) ;
 size_t FUNC_3 (TYPE_6__*,size_t) ;

__attribute__((used)) static void FUNC_4(SSqlCmd *VAR_0, SSqlRes *VAR_1, tFilePage **VAR_2,
                                                  SLocalReducer *VAR_3) {
  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->exprsInfo.numOfExprs; ++VAR_4) {
    TAOS_FIELD *VAR_5 = FUNC_2(VAR_0, VAR_4);

    int32_t VAR_6 = FUNC_3(VAR_0, VAR_4);
    FUNC_0(VAR_6 == VAR_3->resColModel->colOffset[VAR_4]);

    char *VAR_7 = VAR_2[VAR_4]->data + (VAR_1->numOfRows - 1) * VAR_5->bytes;
    char *VAR_8 = VAR_1->data + VAR_1->numOfRows * VAR_6;

    for (int32_t VAR_9 = 0; VAR_9 < VAR_1->numOfRows; ++VAR_9) {
      FUNC_1(VAR_8, VAR_7, (size_t)VAR_5->bytes);
      VAR_8 += VAR_5->bytes;
      VAR_7 -= VAR_5->bytes;
    }
  }
}
