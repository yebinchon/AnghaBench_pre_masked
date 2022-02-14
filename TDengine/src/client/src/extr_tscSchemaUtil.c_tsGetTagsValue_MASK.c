
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int numOfColumns; int numOfTags; } ;
typedef int SSchema ;
typedef TYPE_1__ SMeterMeta ;



char* FUNC_0(SMeterMeta* VAR_0) {
  int32_t VAR_1 = VAR_0->numOfColumns + VAR_0->numOfTags;
  uint32_t VAR_2 = sizeof(SMeterMeta) + VAR_1 * sizeof(SSchema);

  return ((char*)VAR_0 + VAR_2);
}
