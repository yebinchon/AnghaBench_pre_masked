
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_20__ {size_t numOfFiles; int * pHeaderFiles; } ;
struct TYPE_24__ {TYPE_1__ runtimeEnv; } ;
struct TYPE_23__ {int member_0; } ;
struct TYPE_21__ {int pointsRead; } ;
struct TYPE_22__ {TYPE_5__* pMeterQuerySupporter; TYPE_2__ query; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQInfo ;
typedef TYPE_4__ SPointInterpoSupporter ;
typedef TYPE_5__ SMeterQuerySupportObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int*,int*,size_t,size_t) ;
 int FUNC_6 (int,int,TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int64_t FUNC_12(SQInfo *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  SQuery * VAR_3 = &VAR_0->query;
  SMeterQuerySupportObj *VAR_4 = VAR_0->pMeterQuerySupporter;
  SQueryRuntimeEnv * VAR_5 = &VAR_4->runtimeEnv;

  bool VAR_6 = 1;
  bool VAR_7 = 1;
  if (!FUNC_5(VAR_0, &VAR_6, &VAR_7, VAR_1, VAR_2)) {
    return 0;
  }


  for (int32_t VAR_8 = 0; VAR_8 < VAR_5->numOfFiles; ++VAR_8) {
    FUNC_10(&VAR_5->pHeaderFiles[VAR_8]);
  }


  SPointInterpoSupporter VAR_9 = {0};
  FUNC_8(VAR_3, &VAR_9);

  if (!FUNC_6(VAR_6, VAR_7, VAR_4, &VAR_9)) {
    FUNC_7(&VAR_9);
    return 0;
  }





  FUNC_9(VAR_0, &VAR_9);
  FUNC_7(&VAR_9);

  FUNC_11(VAR_5);


  if (!FUNC_4(VAR_3)) {
    FUNC_1(VAR_5);
  }

  int64_t VAR_10 = FUNC_3(VAR_5);
  FUNC_0(VAR_10 == 1 || VAR_10 == 0);


  if (VAR_10 > 0) {
    VAR_3->pointsRead += VAR_10;
    FUNC_2(VAR_5, VAR_10);
  }

  return VAR_10;
}
