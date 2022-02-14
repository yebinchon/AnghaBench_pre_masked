
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num; scalar_t__* pRes; } ;
typedef TYPE_1__ tQueryResultset ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,int ,size_t) ;
 int FUNC_2 (scalar_t__*,size_t,size_t,int ) ;
 void* FUNC_3 (scalar_t__*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(tQueryResultset* VAR_2, tQueryResultset* VAR_3) {
  if (VAR_3->num == 0) {
    FUNC_4(VAR_3);
    return;
  }

  int32_t VAR_4 = VAR_2->num + VAR_3->num;
  void* VAR_5 = FUNC_3(VAR_2->pRes, VAR_4 * VAR_0);
  if (VAR_5 == ((void*)0)) {
    return;
  }
  VAR_2->pRes = VAR_5;

  FUNC_0(&VAR_2->pRes[VAR_2->num], VAR_3->pRes, VAR_0 * VAR_3->num);
  FUNC_2(VAR_2->pRes, VAR_4, VAR_0, VAR_1);

  int32_t VAR_6 = 1;
  for (int32_t VAR_7 = 1; VAR_7 < VAR_4; ++VAR_7) {
    if (VAR_2->pRes[VAR_7] != VAR_2->pRes[VAR_7 - 1]) {
      VAR_2->pRes[VAR_6++] = VAR_2->pRes[VAR_7];
    }
  }

  if (VAR_6 < VAR_4) {
    FUNC_1(&VAR_2->pRes[VAR_6], 0, VAR_0 * (VAR_4 - VAR_6));
  }

  VAR_2->num = VAR_6;

  FUNC_4(VAR_3);
}
