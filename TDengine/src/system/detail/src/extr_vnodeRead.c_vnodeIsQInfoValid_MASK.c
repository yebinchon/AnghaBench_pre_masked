
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ signature; } ;
typedef TYPE_1__ SQInfo ;


 scalar_t__ VAR_0 ;

bool FUNC_0(void *VAR_1) {
  SQInfo *VAR_2 = (SQInfo *)VAR_1;
  if (VAR_2 == ((void*)0)) {
    return 0;
  }





  uint64_t VAR_3 = VAR_2->signature;
  return (VAR_3 == (uint64_t)VAR_2) || (VAR_3 == VAR_0);
}
