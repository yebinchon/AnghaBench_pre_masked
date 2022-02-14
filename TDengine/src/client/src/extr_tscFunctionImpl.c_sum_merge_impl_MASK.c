
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ aOutputBuf; } ;
struct TYPE_9__ {int superTableQ; } ;
struct TYPE_8__ {scalar_t__ hasResult; double dsum; int isum; } ;
typedef TYPE_1__ SSumInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (TYPE_3__ const*,scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 () ;






 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int32_t FUNC_4(const SQLFunctionCtx *VAR_2) {
  int32_t VAR_3 = 0;

  FUNC_2();
  SResultInfo *VAR_4 = FUNC_1(VAR_2);
  FUNC_3(VAR_4->superTableQ);

  for (int32_t VAR_5 = 0; VAR_5 < VAR_2->size; ++VAR_5) {
    char * VAR_6 = FUNC_0(VAR_2, VAR_5);
    SSumInfo *VAR_7 = (SSumInfo *)VAR_6;
    if (VAR_7->hasResult != VAR_0) {
      continue;
    }

    VAR_3++;

    switch (VAR_1) {
      case 128:
      case 129:
      case 130:
      case 133: {
        *(int64_t *)VAR_2->aOutputBuf += VAR_7->isum;
        break;
      };
      case 131:
      case 132: {
        *(double *)VAR_2->aOutputBuf += VAR_7->dsum;
      }
    }
  }

  return VAR_3;
}
