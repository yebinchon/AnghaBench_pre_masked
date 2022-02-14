
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int alloc; int used; int sign; int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1 (mp_int * VAR_1, mp_int * VAR_2)
{
  int VAR_3, VAR_4;


  if (VAR_1 == VAR_2) {
    return VAR_0;
  }


  if (VAR_2->alloc < VAR_1->used) {
     if ((VAR_3 = FUNC_0 (VAR_2, VAR_1->used)) != VAR_0) {
        return VAR_3;
     }
  }


  {
    register mp_digit *VAR_5, *VAR_6;




    VAR_5 = VAR_1->dp;


    VAR_6 = VAR_2->dp;


    for (VAR_4 = 0; VAR_4 < VAR_1->used; VAR_4++) {
      *VAR_6++ = *VAR_5++;
    }


    for (; VAR_4 < VAR_2->used; VAR_4++) {
      *VAR_6++ = 0;
    }
  }


  VAR_2->used = VAR_1->used;
  VAR_2->sign = VAR_1->sign;
  return VAR_0;
}
