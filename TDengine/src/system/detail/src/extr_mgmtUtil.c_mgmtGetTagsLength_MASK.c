
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ bytes; } ;
struct TYPE_5__ {scalar_t__ numOfColumns; scalar_t__ numOfTags; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int32_t FUNC_2(STabObj* VAR_0, int32_t VAR_1) {
  FUNC_0(FUNC_1(VAR_0) && VAR_1 >= 0);

  int32_t VAR_2 = 0;
  int32_t VAR_3 = VAR_0->numOfColumns;

  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->numOfTags && VAR_4 < VAR_1; ++VAR_4) {
    VAR_2 += ((SSchema*)VAR_0->schema)[VAR_3 + VAR_4].bytes;
  }

  return VAR_2;
}
