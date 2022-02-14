
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(MPI VAR_1, MPI VAR_2, MPI VAR_3)
{
 int VAR_4;

    if( VAR_1 == VAR_3 ) {
     MPI VAR_5;
 if (FUNC_1(&VAR_5, VAR_3) < 0)
  return -VAR_0;
 VAR_5->sign = !VAR_5->sign;
 VAR_4 = FUNC_0( VAR_1, VAR_2, VAR_5 );
 FUNC_2(VAR_5);
    }
    else {

 VAR_3->sign = !VAR_3->sign;
 VAR_4 = FUNC_0( VAR_1, VAR_2, VAR_3 );
 VAR_3->sign = !VAR_3->sign;
    }
    return VAR_4;
}
