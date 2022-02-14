
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nlimbs; unsigned int* d; } ;
typedef TYPE_1__* MPI ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

void
FUNC_0( MPI VAR_2, unsigned VAR_3 )
{
    unsigned VAR_4, VAR_5;

    VAR_4 = VAR_3 / VAR_1;
    VAR_5 = VAR_3 % VAR_1;

    if( VAR_4 >= VAR_2->nlimbs )
 return;

    for( ; VAR_5 < VAR_1; VAR_5++ )
 VAR_2->d[VAR_4] &= ~(VAR_0 << VAR_5);
    VAR_2->nlimbs = VAR_4+1;
}
