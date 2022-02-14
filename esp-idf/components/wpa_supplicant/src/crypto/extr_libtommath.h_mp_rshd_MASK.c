
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (mp_int * VAR_0, int VAR_1)
{
  int VAR_2;


  if (VAR_1 <= 0) {
    return;
  }


  if (VAR_0->used <= VAR_1) {
    FUNC_0 (VAR_0);
    return;
  }

  {
    register mp_digit *VAR_3, *VAR_4;




    VAR_3 = VAR_0->dp;


    VAR_4 = VAR_0->dp + VAR_1;
    for (VAR_2 = 0; VAR_2 < (VAR_0->used - VAR_1); VAR_2++) {
      *VAR_3++ = *VAR_4++;
    }


    for (; VAR_2 < VAR_0->used; VAR_2++) {
      *VAR_3++ = 0;
    }
  }


  VAR_0->used -= VAR_1;
}
