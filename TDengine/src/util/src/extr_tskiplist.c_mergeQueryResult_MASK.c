
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSkipListNode ;
typedef size_t int32_t ;
struct TYPE_3__ {size_t len; int ** pData; } ;
typedef TYPE_1__ MultipleQueryResult ;


 size_t VAR_0 ;
 int ** FUNC_0 (size_t) ;

__attribute__((used)) static int32_t FUNC_1(MultipleQueryResult *VAR_1, int32_t VAR_2, tSkipListNode ***VAR_3) {
  int32_t VAR_4 = 0;
  for (int32_t VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
    VAR_4 += VAR_1[VAR_5].len;
  }

  (*VAR_3) = FUNC_0(VAR_0 * VAR_4);
  int32_t VAR_6 = 0;

  for (int32_t VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
    MultipleQueryResult *VAR_8 = &VAR_1[VAR_7];
    for (int32_t VAR_9 = 0; VAR_9 < VAR_8->len; ++VAR_9) {
      (*VAR_3)[VAR_6++] = VAR_8->pData[VAR_9];
    }
  }

  return VAR_4;
}
