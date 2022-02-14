
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int ordered; int tsSource; scalar_t__ prevTS; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ STableDataBlocks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int32_t FUNC_0(STableDataBlocks *VAR_3, const char *VAR_4) {

  if (!VAR_3->ordered) {
    return VAR_0;
  }

  TSKEY VAR_5 = *(TSKEY *)VAR_4;

  if (VAR_5 == 0) {
    if (VAR_3->tsSource == VAR_1) {
      return -1;
    } else if (VAR_3->tsSource == -1) {
      VAR_3->tsSource = VAR_2;
    }
  } else {
    if (VAR_3->tsSource == VAR_2) {
      return -1;
    } else if (VAR_3->tsSource == -1) {
      VAR_3->tsSource = VAR_1;
    }
  }

  if (VAR_5 <= VAR_3->prevTS && (VAR_3->tsSource == VAR_1)) {
    VAR_3->ordered = 0;
  }

  VAR_3->prevTS = VAR_5;
  return VAR_0;
}
