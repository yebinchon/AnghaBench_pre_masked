
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int numOfTags; scalar_t__* tagColumnIndex; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;

void FUNC_3(SSqlCmd* VAR_1, int32_t VAR_2, int32_t VAR_3) {
  SMeterMetaInfo* VAR_4 = FUNC_2(VAR_1, VAR_3);

  if (VAR_4->numOfTags == 0 || VAR_4->tagColumnIndex[VAR_4->numOfTags - 1] < VAR_2) {
    VAR_4->tagColumnIndex[VAR_4->numOfTags++] = VAR_2;
  } else {
    for (int32_t VAR_5 = 0; VAR_5 < VAR_4->numOfTags; ++VAR_5) {
      if (VAR_2 > VAR_4->tagColumnIndex[VAR_5]) {
        continue;
      } else if (VAR_2 == VAR_4->tagColumnIndex[VAR_5]) {
        break;
      } else {
        FUNC_1(&VAR_4->tagColumnIndex[VAR_5 + 1], &VAR_4->tagColumnIndex[VAR_5],
                sizeof(VAR_4->tagColumnIndex[0]) * (VAR_4->numOfTags - VAR_5));

        VAR_4->tagColumnIndex[VAR_5] = VAR_2;

        VAR_4->numOfTags++;
        break;
      }
    }
  }


  FUNC_0(VAR_2 >= -1 && VAR_2 < VAR_0 && VAR_4->numOfTags <= VAR_0 + 1);
}
