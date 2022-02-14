
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__**,TYPE_1__* const) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;

int
FUNC_5( MPI VAR_1, const MPI VAR_2, const MPI VAR_3 )
{
    MPI VAR_4 = ((void*)0), VAR_5 = ((void*)0);

    if (FUNC_1(&VAR_4, VAR_2) < 0)
     goto nomem;

    if (FUNC_1(&VAR_5, VAR_3) < 0)
     goto nomem;


    VAR_4->sign = 0;
    VAR_5->sign = 0;
    while( FUNC_0( VAR_5, 0 ) ) {
     if (FUNC_2( VAR_1, VAR_4, VAR_5 ) < 0)
      goto nomem;
     if (FUNC_4(VAR_4,VAR_5) < 0)
      goto nomem;
     if (FUNC_4(VAR_5,VAR_1) < 0)
      goto nomem;
    }
    if (FUNC_4(VAR_1, VAR_4) < 0)
     goto nomem;

    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    return !FUNC_0( VAR_1, 1);

 nomem:
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    return -VAR_0;
}
