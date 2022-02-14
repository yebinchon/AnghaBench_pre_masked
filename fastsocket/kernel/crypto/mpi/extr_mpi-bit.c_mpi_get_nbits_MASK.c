
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mpi_limb_t ;
struct TYPE_4__ {int nlimbs; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

unsigned
FUNC_2( MPI VAR_1 )
{
    unsigned VAR_2;

    FUNC_1( VAR_1 );

    if( VAR_1->nlimbs ) {
 mpi_limb_t VAR_3 = VAR_1->d[VAR_1->nlimbs-1];
 if( VAR_3 ) {
   FUNC_0( VAR_2, VAR_3 );
 }
 else
     VAR_2 = VAR_0;
 VAR_2 = VAR_0 - VAR_2 + (VAR_1->nlimbs-1) * VAR_0;
    }
    else
 VAR_2 = 0;
    return VAR_2;
}
