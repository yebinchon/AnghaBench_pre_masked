
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int maxSessions; } ;
typedef TYPE_1__ SHashObj ;


 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_0, char *VAR_1) {
  SHashObj * VAR_2 = (SHashObj *)VAR_0;
  unsigned int VAR_3 = 0, VAR_4;
  char * VAR_5;
  int VAR_6 = FUNC_0(VAR_1);

  VAR_5 = VAR_1;

  while (VAR_6 >= 4) {
    VAR_3 += *((int *)VAR_5);
    VAR_5 += 4;
    VAR_6 -= 4;
  }

  while (VAR_6 > 0) {
    VAR_3 += *VAR_5;
    VAR_5++;
    VAR_6--;
  }

  VAR_4 = VAR_3 / VAR_2->maxSessions;
  VAR_3 = (VAR_4 + VAR_3 % VAR_2->maxSessions) % VAR_2->maxSessions;

  return VAR_3;
}
