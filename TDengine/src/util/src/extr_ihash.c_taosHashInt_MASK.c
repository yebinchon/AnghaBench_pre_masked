
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int32_t ;
struct TYPE_2__ {int maxSessions; } ;
typedef TYPE_1__ IHashObj ;



int32_t FUNC_0(void *VAR_0, uint64_t VAR_1) {
  IHashObj *VAR_2 = (IHashObj *)VAR_0;
  int32_t VAR_3 = VAR_1 % VAR_2->maxSessions;
  return VAR_3;
}
