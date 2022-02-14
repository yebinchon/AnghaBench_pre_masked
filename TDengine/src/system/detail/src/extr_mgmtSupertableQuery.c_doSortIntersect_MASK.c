
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* pRes; size_t num; } ;
typedef TYPE_1__ tQueryResultset ;
typedef size_t int32_t ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (scalar_t__*,size_t,size_t,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static tQueryResultset* FUNC_3(tQueryResultset* VAR_1, tQueryResultset* VAR_2) {
  size_t VAR_3 = sizeof(void*);

  FUNC_1(VAR_1->pRes, VAR_1->num, VAR_3, VAR_0);
  FUNC_1(VAR_2->pRes, VAR_2->num, VAR_3, VAR_0);

  int32_t VAR_4 = 0;
  int32_t VAR_5 = 0;

  int32_t VAR_6 = 0;
  while (VAR_4 < VAR_1->num && VAR_5 < VAR_2->num) {
    if (VAR_1->pRes[VAR_4] == VAR_2->pRes[VAR_5]) {
      VAR_5++;
      VAR_1->pRes[VAR_6++] = VAR_1->pRes[VAR_4++];
    } else if (VAR_1->pRes[VAR_4] < VAR_2->pRes[VAR_5]) {
      VAR_4++;
    } else {
      VAR_5++;
    }
  }

  FUNC_2(VAR_2);

  FUNC_0(VAR_1->pRes + VAR_6, 0, sizeof(void*) * (VAR_1->num - VAR_6));
  VAR_1->num = VAR_6;
  return VAR_1;
}
