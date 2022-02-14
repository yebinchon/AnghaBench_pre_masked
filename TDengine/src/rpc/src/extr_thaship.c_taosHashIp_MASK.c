
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int maxSessions; } ;
typedef TYPE_1__ SHashObj ;



int FUNC_0(void *VAR_0, uint32_t VAR_1, short VAR_2) {
  SHashObj *VAR_3 = (SHashObj *)VAR_0;
  int VAR_4 = 0;

  VAR_4 = (int)(VAR_1 >> 16);
  VAR_4 += (unsigned short)(VAR_1 & 0xFFFF);
  VAR_4 += (unsigned short)VAR_2;

  VAR_4 = VAR_4 % VAR_3->maxSessions;

  return VAR_4;
}
