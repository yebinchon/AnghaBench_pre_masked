
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SSchema {int dummy; } ;
typedef int int32_t ;
typedef struct SSchema SSchema ;
typedef int SMeterMeta ;



struct SSchema* FUNC_0(SMeterMeta* VAR_0, int32_t VAR_1) {
  return (SSchema*)(((char*)VAR_0 + sizeof(SMeterMeta)) + VAR_1 * sizeof(SSchema));
}
