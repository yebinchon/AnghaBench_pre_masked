
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int * dp; scalar_t__ used; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (mp_int * VAR_1)
{
  int VAR_2;
  mp_digit *VAR_3;

  VAR_1->sign = VAR_0;
  VAR_1->used = 0;

  VAR_3 = VAR_1->dp;
  for (VAR_2 = 0; VAR_2 < VAR_1->alloc; VAR_2++) {
     *VAR_3++ = 0;
  }
}
