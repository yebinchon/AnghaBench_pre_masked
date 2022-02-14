
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {scalar_t__ offsetInHeaderFile; } ;
typedef TYPE_1__ SMeterDataInfo ;



__attribute__((used)) static int32_t FUNC_0(const void *VAR_0, const void *VAR_1) {
  SMeterDataInfo **VAR_2 = (SMeterDataInfo **)VAR_0;
  SMeterDataInfo **VAR_3 = (SMeterDataInfo **)VAR_1;

  if ((*VAR_2)->offsetInHeaderFile == (*VAR_3)->offsetInHeaderFile) {
    return 0;
  }

  return ((*VAR_2)->offsetInHeaderFile > (*VAR_3)->offsetInHeaderFile) ? 1 : -1;
}
