
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mpi_limb_t ;
struct TYPE_3__ {unsigned int nlimbs; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

unsigned
FUNC_1( const MPI VAR_1 )
{
    unsigned VAR_2, VAR_3 = 0;

    for(VAR_2=0; VAR_2 < VAR_1->nlimbs; VAR_2++ ) {
 if( VAR_1->d[VAR_2] ) {
     unsigned VAR_4;
     mpi_limb_t VAR_5 = VAR_1->d[VAR_2];

     FUNC_0( VAR_4, VAR_5 );
     VAR_3 += VAR_4;
     break;
 }
 VAR_3 += VAR_0;
    }
    return VAR_3;

}
