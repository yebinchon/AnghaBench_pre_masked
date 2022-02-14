
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef long mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;
struct TYPE_5__ {long nlimbs; int sign; long alloced; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,long) ;
 int FUNC_1 (scalar_t__*,long) ;
 scalar_t__ FUNC_2 (TYPE_1__*,long) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,long,unsigned long) ;

int
FUNC_4( MPI VAR_2, MPI VAR_3, unsigned long VAR_4)
{
    mpi_size_t VAR_5, VAR_6, VAR_7;
    mpi_ptr_t VAR_8;
    mpi_limb_t VAR_9;
    int VAR_10, VAR_11;

    VAR_5 = VAR_3->nlimbs;
    VAR_10 = VAR_3->sign;

    if( !VAR_5 ) {
 VAR_2->nlimbs = 0;
 VAR_2->sign = 0;
 return 0;
    }

    VAR_7 = VAR_4 / VAR_0;
    VAR_6 = VAR_5 + VAR_7 + 1;
    if( VAR_2->alloced < VAR_6 )
     if (FUNC_2(VAR_2, VAR_6 ) < 0)
      return -VAR_1;
    VAR_8 = VAR_2->d;
    VAR_6 = VAR_5 + VAR_7;
    VAR_11 = VAR_10;

    VAR_4 %= VAR_0;
    if( VAR_4 ) {
 VAR_9 = FUNC_3( VAR_8 + VAR_7, VAR_3->d, VAR_5, VAR_4 );
 if( VAR_9 ) {
     VAR_8[VAR_6] = VAR_9;
     VAR_6++;
 }
    }
    else {
 FUNC_0( VAR_8 + VAR_7, VAR_3->d, VAR_5 );
    }



    FUNC_1( VAR_8, VAR_7 );

    VAR_2->nlimbs = VAR_6;
    VAR_2->sign = VAR_11;
    return 0;
}
