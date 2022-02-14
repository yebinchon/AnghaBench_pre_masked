
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t n; scalar_t__* z; } ;
typedef TYPE_1__ SSQLToken ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static bool FUNC_0(SSQLToken* VAR_1) {
  for (int32_t VAR_2 = 0; VAR_2 < VAR_1->n; ++VAR_2) {
    if (VAR_1->z[VAR_2] == VAR_0[0]) {
      return 1;
    }
  }

  return 0;
}
