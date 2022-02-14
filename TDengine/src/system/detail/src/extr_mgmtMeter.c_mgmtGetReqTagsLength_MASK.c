
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_6__ {scalar_t__ bytes; } ;
struct TYPE_5__ {int numOfTags; int numOfColumns; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_2(STabObj *VAR_2, int16_t *VAR_3, int32_t VAR_4) {
  FUNC_0(FUNC_1(VAR_2) && VAR_4 >= 0 && VAR_4 <= VAR_0 + 1);

  int32_t VAR_5 = 0;
  for (int32_t VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
    FUNC_0(VAR_3[VAR_6] < VAR_2->numOfTags);
    if (VAR_3[VAR_6] == -1) {
      VAR_5 += VAR_1;
    } else {
      VAR_5 += ((SSchema *)VAR_2->schema)[VAR_2->numOfColumns + VAR_3[VAR_6]].bytes;
    }
  }

  return VAR_5;
}
