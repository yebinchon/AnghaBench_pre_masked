
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int maxSessions; } ;
typedef TYPE_1__ SHashObj ;



int FUNC_0(void *VAR_0, uint64_t VAR_1) {
  SHashObj *VAR_2 = (SHashObj *)VAR_0;
  int VAR_3 = 0;

  VAR_3 = (int)(VAR_1 >> 16);
  VAR_3 += (int)(VAR_1 & 0xFFFF);

  VAR_3 = VAR_3 % VAR_2->maxSessions;

  return VAR_3;
}
