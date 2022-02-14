
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ rawBuf; } ;
struct TYPE_5__ {int tsOrder; TYPE_1__ tsData; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ STSList ;
typedef TYPE_2__ STSBuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int32_t FUNC_0(STSBuf* VAR_4, const char* VAR_5, int32_t VAR_6) {
  STSList* VAR_7 = &VAR_4->tsData;

  if (VAR_4->tsOrder == -1) {
    if (VAR_7->len > 0) {
      TSKEY VAR_8 = *(TSKEY*)(VAR_7->rawBuf + VAR_7->len - VAR_1);

      if (VAR_8 > *(TSKEY*)VAR_5) {
        VAR_4->tsOrder = VAR_3;
      } else {
        VAR_4->tsOrder = VAR_2;
      }
    } else if (VAR_6 > VAR_1) {

      TSKEY VAR_9 = *(TSKEY*)(VAR_5);
      TSKEY VAR_10 = *(TSKEY*)(VAR_5 + VAR_1);

      if (VAR_9 < VAR_10) {
        VAR_4->tsOrder = VAR_2;
      } else if (VAR_9 > VAR_10) {
        VAR_4->tsOrder = VAR_3;
      } else {

      }
    }
  } else {

  }

  return VAR_0;
}
