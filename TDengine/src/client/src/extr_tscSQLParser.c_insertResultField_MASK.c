
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int8_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_7__ {size_t num; int * ids; } ;
struct TYPE_6__ {int fieldsInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SColumnList ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,size_t,int ,char*,int ) ;

int32_t FUNC_2(SSqlCmd* VAR_1, int32_t VAR_2, SColumnList* VAR_3, int16_t VAR_4, int8_t VAR_5,
                          char* VAR_6) {
  for (int32_t VAR_7 = 0; VAR_7 < VAR_3->num; ++VAR_7) {
    FUNC_0(VAR_1, &(VAR_3->ids[VAR_7]));
  }

  FUNC_1(&VAR_1->fieldsInfo, VAR_2, VAR_5, VAR_6, VAR_4);
  return VAR_0;
}
