
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* z; int n; } ;
typedef TYPE_1__ SSQLToken ;


 char* VAR_0 ;
 char* FUNC_0 (char*,char const,int,int) ;

void FUNC_1(SSQLToken* VAR_1, SSQLToken* VAR_2) {
  const char VAR_3 = VAR_0[0];

  if (VAR_1 == VAR_2 || VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
    return;
  }

  char* VAR_4 = FUNC_0(VAR_1->z, VAR_3, VAR_1->n, 0);

  if (VAR_4 != ((void*)0)) {
    VAR_2->n = VAR_4 - VAR_1->z;
    VAR_2->z = VAR_1->z;

    VAR_4 += 1;
    VAR_1->n -= (VAR_4 - VAR_1->z);
    VAR_1->z = VAR_4;
  }
}
