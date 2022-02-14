
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {scalar_t__ numOfVnodes; scalar_t__ numOfMeters; int* list; } ;
typedef int SVnodeSidList ;
typedef TYPE_1__ SMetricMeta ;


 int FUNC_0 (char*,...) ;

SVnodeSidList* FUNC_1(SMetricMeta* VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0)) {
    FUNC_0("illegal metricmeta");
    return 0;
  }

  if (VAR_0->numOfVnodes == 0 || VAR_0->numOfMeters == 0) {
    return 0;
  }

  if (VAR_1 < 0 || VAR_1 >= VAR_0->numOfVnodes) {
    int32_t VAR_2 = (VAR_0->numOfVnodes > 0) ? (VAR_0->numOfVnodes - 1) : 0;
    FUNC_0("illegal vnodeIdx:%d, reset to 0, vnodeIdx range:%d-%d", VAR_1, 0, VAR_2);

    VAR_1 = 0;
  }

  return (SVnodeSidList*)(VAR_0->list[VAR_1] + (char*)VAR_0);
}
