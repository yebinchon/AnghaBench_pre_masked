
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_3__ {size_t numOfParams; int * param; } ;
typedef TYPE_1__ SSqlExpr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;

void FUNC_2(SSqlExpr* VAR_0, char* VAR_1, int32_t VAR_2, int32_t VAR_3, int16_t VAR_4) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == 0) {
    return;
  }



  FUNC_1(&VAR_0->param[VAR_0->numOfParams], VAR_1, VAR_3, VAR_2);

  VAR_0->numOfParams += 1;
  FUNC_0(VAR_0->numOfParams <= 3);
}
