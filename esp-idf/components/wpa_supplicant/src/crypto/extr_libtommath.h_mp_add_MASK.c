
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (mp_int * VAR_1, mp_int * VAR_2, mp_int * VAR_3)
{
  int VAR_4, VAR_5, VAR_6;


  VAR_4 = VAR_1->sign;
  VAR_5 = VAR_2->sign;


  if (VAR_4 == VAR_5) {


    VAR_3->sign = VAR_4;
    VAR_6 = FUNC_1 (VAR_1, VAR_2, VAR_3);
  } else {




    if (FUNC_0 (VAR_1, VAR_2) == VAR_0) {
      VAR_3->sign = VAR_5;
      VAR_6 = FUNC_2 (VAR_2, VAR_1, VAR_3);
    } else {
      VAR_3->sign = VAR_4;
      VAR_6 = FUNC_2 (VAR_1, VAR_2, VAR_3);
    }
  }
  return VAR_6;
}
