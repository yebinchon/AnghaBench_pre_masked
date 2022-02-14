
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numOfCols; TYPE_2__* pSchema; scalar_t__* colOffset; } ;
typedef TYPE_1__ tTagSchema ;
typedef int int32_t ;
struct TYPE_8__ {scalar_t__ bytes; } ;
typedef TYPE_2__ SSchema ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

tTagSchema *FUNC_2(SSchema *VAR_0, int32_t VAR_1) {
  if (VAR_1 == 0 || VAR_0 == ((void*)0)) {
    return ((void*)0);
  }

  tTagSchema *VAR_2 =
      (tTagSchema *)FUNC_0(1, sizeof(tTagSchema) + VAR_1 * sizeof(int32_t) + sizeof(SSchema) * VAR_1);

  VAR_2->colOffset[0] = 0;
  VAR_2->numOfCols = VAR_1;
  for (int32_t VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3) {
    VAR_2->colOffset[VAR_3] = (VAR_2->colOffset[VAR_3 - 1] + VAR_0[VAR_3 - 1].bytes);
  }

  VAR_2->pSchema = (SSchema *)&(VAR_2->colOffset[VAR_1]);
  FUNC_1(VAR_2->pSchema, VAR_0, sizeof(SSchema) * VAR_1);
  return VAR_2;
}
