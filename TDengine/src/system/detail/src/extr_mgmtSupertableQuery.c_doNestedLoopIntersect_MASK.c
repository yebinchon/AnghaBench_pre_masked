
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void** pRes; size_t num; } ;
typedef TYPE_1__ tQueryResultset ;
typedef size_t int32_t ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static tQueryResultset* FUNC_2(tQueryResultset* VAR_0, tQueryResultset* VAR_1) {
  int32_t VAR_2 = 0;
  void** VAR_3 = VAR_0->pRes;

  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->num; ++VAR_4) {
    for (int32_t VAR_5 = 0; VAR_5 < VAR_1->num; ++VAR_5) {
      if (VAR_0->pRes[VAR_4] == VAR_1->pRes[VAR_5]) {
        VAR_3[VAR_2++] = VAR_0->pRes[VAR_4];
        break;
      }
    }
  }

  FUNC_1(VAR_1);

  FUNC_0(VAR_0->pRes + VAR_2, 0, sizeof(void*) * (VAR_0->num - VAR_2));
  VAR_0->num = VAR_2;

  return VAR_0;
}
