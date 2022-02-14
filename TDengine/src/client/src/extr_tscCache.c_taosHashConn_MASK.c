
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int maxSessions; } ;
typedef TYPE_1__ SConnCache ;



int FUNC_0(void *VAR_0, uint32_t VAR_1, short VAR_2, char *VAR_3) {
  SConnCache *VAR_4 = (SConnCache *)VAR_0;
  int VAR_5 = 0;


  VAR_5 = VAR_1 >> 16;
  VAR_5 += (unsigned short)(VAR_1 & 0xFFFF);
  VAR_5 += (unsigned short)VAR_2;
  while (*VAR_3 != '\0') {
    VAR_5 += *VAR_3;
    VAR_3++;
  }

  VAR_5 = VAR_5 % VAR_4->maxSessions;

  return VAR_5;
}
