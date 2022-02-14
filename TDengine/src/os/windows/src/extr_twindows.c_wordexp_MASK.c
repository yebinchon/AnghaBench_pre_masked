
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int we_wordc; char** we_wordv; scalar_t__ wordPos; scalar_t__ we_offs; } ;
typedef TYPE_1__ wordexp_t ;



int FUNC_0(const char *VAR_0, wordexp_t *VAR_1, int VAR_2) {
  VAR_1->we_offs = 0;
  VAR_1->we_wordc = 1;
  VAR_1->we_wordv = (char **)(VAR_1->wordPos);
  VAR_1->we_wordv[0] = (char *)VAR_0;
  return 0;
}
