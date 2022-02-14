
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int maxSessions; } ;
typedef TYPE_1__ SHashObj ;



uint32_t FUNC_0(void *VAR_0, char *VAR_1) {
  SHashObj *VAR_2 = (SHashObj *)VAR_0;
  uint32_t VAR_3 = 0, VAR_4;
  char * VAR_5;

  VAR_5 = VAR_1;
  while (*VAR_5) {
    VAR_3 += *((int *)VAR_5);
    VAR_5 += 4;
  }

  VAR_4 = VAR_3 / VAR_2->maxSessions;
  VAR_3 = (VAR_4 + VAR_3 % VAR_2->maxSessions) % VAR_2->maxSessions;

  return VAR_3;
}
