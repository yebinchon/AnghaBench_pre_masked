
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ uid; scalar_t__ sversion; int numOfColumns; scalar_t__ numOfTags; } ;
struct TYPE_9__ {scalar_t__ bytes; } ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SMeterMeta ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,size_t) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__) ;

bool FUNC_2(SMeterMeta* VAR_0, SMeterMeta* VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->uid != VAR_1->uid || VAR_0->sversion != VAR_1->sversion) {
    return 0;
  }

  if (VAR_0 == VAR_1) {
    return 1;
  }

  size_t VAR_2 = sizeof(SMeterMeta) + VAR_0->numOfColumns * sizeof(SSchema);

  for (int32_t VAR_3 = 0; VAR_3 < VAR_0->numOfTags; ++VAR_3) {
    SSchema* VAR_4 = FUNC_1(VAR_0, VAR_3 + VAR_0->numOfColumns);
    VAR_2 += VAR_4->bytes;
  }

  return FUNC_0(VAR_0, VAR_1, VAR_2) == 0;
}
