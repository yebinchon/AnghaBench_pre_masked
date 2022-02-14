
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__* mpi_ptr_t ;
struct TYPE_4__ {int nlimbs; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1( MPI VAR_1, unsigned int VAR_2 )
{
    mpi_ptr_t VAR_3 = VAR_1->d;
    int VAR_4 = VAR_1->nlimbs;
    int VAR_5;

    if( !VAR_2 || !VAR_4 )
 return 0;

    if (FUNC_0( VAR_1, VAR_4+VAR_2 ) < 0) return -VAR_0;

    for( VAR_5 = VAR_4-1; VAR_5 >= 0; VAR_5-- )
 VAR_3[VAR_5+VAR_2] = VAR_3[VAR_5];
    for(VAR_5=0; VAR_5 < VAR_2; VAR_5++ )
 VAR_3[VAR_5] = 0;
    VAR_1->nlimbs += VAR_2;
    return 0;
}
