
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tOrderDescriptor ;
typedef int tColModel ;
typedef int int32_t ;
struct TYPE_13__ {int pMemBucket; } ;
struct TYPE_12__ {int inputType; int inputBytes; } ;
struct TYPE_11__ {scalar_t__ interResultBuf; } ;
struct TYPE_10__ {char* member_1; int member_3; int member_2; int member_0; } ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SPercentileInfo ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int,int const,int ,int ,int *) ;
 int * FUNC_4 (int*,int const,int *,int ) ;

__attribute__((used)) static bool FUNC_5(SQLFunctionCtx *VAR_1) {
  const int32_t VAR_2 = 1 << 20;
  const int32_t VAR_3 = 1;

  if (!FUNC_1(VAR_1)) {
    return 0;
  }

  SResultInfo *VAR_4 = FUNC_0(VAR_1);
  SSchema VAR_5[1] = {{VAR_1->inputType, "dummyCol", 0, VAR_1->inputBytes}};

  tColModel *VAR_6 = FUNC_2(VAR_5, 1, 1000);
  int32_t VAR_7 = 0;


  tOrderDescriptor *VAR_8 = FUNC_4(&VAR_7, VAR_3, VAR_6, VAR_0);

  ((SPercentileInfo *)(VAR_4->interResultBuf))->pMemBucket =
      FUNC_3(1024, VAR_2, VAR_1->inputBytes, VAR_1->inputType, VAR_8);

  return 1;
}
