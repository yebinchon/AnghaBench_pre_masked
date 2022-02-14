
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t d; size_t k; int splitPoint; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;



__attribute__((used)) static int FUNC_0(ZDICT_cover_params_t VAR_0,
                                 size_t VAR_1) {

  if (VAR_0.d == 0 || VAR_0.k == 0) {
    return 0;
  }

  if (VAR_0.k > VAR_1) {
    return 0;
  }

  if (VAR_0.d > VAR_0.k) {
    return 0;
  }

  if (VAR_0.splitPoint <= 0 || VAR_0.splitPoint > 1){
    return 0;
  }
  return 1;
}
