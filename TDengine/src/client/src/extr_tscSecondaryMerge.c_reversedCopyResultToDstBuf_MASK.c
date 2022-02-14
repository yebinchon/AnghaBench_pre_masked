
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char* data; } ;
typedef TYPE_2__ tFilePage ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {scalar_t__ numOfExprs; } ;
struct TYPE_16__ {TYPE_1__ exprsInfo; } ;
struct TYPE_15__ {int numOfRows; char* data; } ;
struct TYPE_14__ {int bytes; } ;
typedef TYPE_3__ TAOS_FIELD ;
typedef TYPE_4__ SSqlRes ;
typedef TYPE_5__ SSqlCmd ;


 int FUNC_0 (char*,char*,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(SSqlCmd *VAR_0, SSqlRes *VAR_1, tFilePage *VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_0->exprsInfo.numOfExprs; ++VAR_3) {
    TAOS_FIELD *VAR_4 = FUNC_1(VAR_0, VAR_3);

    int32_t VAR_5 = FUNC_2(VAR_0, VAR_3);
    char * VAR_6 = VAR_2->data + (VAR_1->numOfRows - 1) * VAR_4->bytes + VAR_1->numOfRows * VAR_5;
    char * VAR_7 = VAR_1->data + VAR_1->numOfRows * VAR_5;

    for (int32_t VAR_8 = 0; VAR_8 < VAR_1->numOfRows; ++VAR_8) {
      FUNC_0(VAR_7, VAR_6, (size_t)VAR_4->bytes);
      VAR_7 += VAR_4->bytes;
      VAR_6 -= VAR_4->bytes;
    }
  }
}
