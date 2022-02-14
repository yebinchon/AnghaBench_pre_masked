
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {int member_0; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SSQLToken ;
typedef int SColumnIndex ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *) ;

int32_t FUNC_2(SSQLToken* VAR_2, SSqlCmd* VAR_3, SColumnIndex* VAR_4) {
  SSQLToken VAR_5 = {0};
  FUNC_0(VAR_2, &VAR_5);

  if (FUNC_1(&VAR_5, VAR_3, VAR_4) != VAR_1) {
    return VAR_0;
  }

  return VAR_1;
}
