
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {int * pMeterMeta; } ;
struct TYPE_7__ {int cmd; } ;
typedef TYPE_1__ SSqlObj ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__ const,scalar_t__ const,scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_6(SSqlObj *VAR_0) {
  FUNC_0(FUNC_3(&VAR_0->cmd, 0)->pMeterMeta != ((void*)0));

  const int32_t VAR_1 = 4;
  const int32_t VAR_2 = 16;
  const int32_t VAR_3 = 8;

  int32_t VAR_4 = FUNC_4(VAR_0);
  if (VAR_4 == 0) {
    VAR_4 = VAR_3;
  }

  int32_t VAR_5 =
      FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_2(&VAR_0->cmd);
  return FUNC_5(VAR_0, VAR_5);
}
