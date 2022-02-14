
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int num; double val; } ;
struct TYPE_6__ {int numOfEntries; int maxEntries; TYPE_2__* elems; } ;
typedef TYPE_1__ SHistogramInfo ;
typedef int SHistBin ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

int32_t FUNC_3(SHistogramInfo* VAR_0, int32_t VAR_1, double VAR_2) {
  FUNC_0(VAR_0->numOfEntries <= VAR_0->maxEntries);
  return 0;
}
