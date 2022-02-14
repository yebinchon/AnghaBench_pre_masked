
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ binding; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(const char *VAR_1) {
  int VAR_2;

  if (VAR_1) {
   for (VAR_2=0 ; VAR_2<256 ; VAR_2++) {
      if (VAR_0[VAR_2].binding && FUNC_0(VAR_1, VAR_0[VAR_2].binding) == 0) {
        return VAR_2;
      }
    }
  }
  return -1;
}
