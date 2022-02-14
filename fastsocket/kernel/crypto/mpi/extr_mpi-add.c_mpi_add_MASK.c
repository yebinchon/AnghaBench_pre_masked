
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;
struct TYPE_6__ {scalar_t__ nlimbs; int sign; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__) ;

int
FUNC_7(MPI VAR_1, MPI VAR_2, MPI VAR_3)
{
    mpi_ptr_t VAR_4, VAR_5, VAR_6;
    mpi_size_t VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;

    if( VAR_2->nlimbs < VAR_3->nlimbs ) {
 VAR_7 = VAR_3->nlimbs;
 VAR_10 = VAR_3->sign;
 VAR_8 = VAR_2->nlimbs;
 VAR_11 = VAR_2->sign;
 VAR_9 = VAR_7 + 1;
 if (FUNC_2(VAR_1, VAR_9) < 0)
  return -VAR_0;

 VAR_5 = VAR_3->d;
 VAR_6 = VAR_2->d;
    }
    else {
 VAR_7 = VAR_2->nlimbs;
 VAR_10 = VAR_2->sign;
 VAR_8 = VAR_3->nlimbs;
 VAR_11 = VAR_3->sign;
 VAR_9 = VAR_7 + 1;
 if (FUNC_2(VAR_1, VAR_9) < 0)
  return -VAR_0;

 VAR_5 = VAR_2->d;
 VAR_6 = VAR_3->d;
    }
    VAR_4 = VAR_1->d;
    VAR_12 = 0;

    if( !VAR_8 ) {
        FUNC_0(VAR_4, VAR_5, VAR_7 );
 VAR_9 = VAR_7;
 VAR_12 = VAR_10;
    }
    else if( VAR_10 != VAR_11 ) {

 if( VAR_7 != VAR_8 ) {
     FUNC_5(VAR_4, VAR_5, VAR_7, VAR_6, VAR_8);
     VAR_9 = VAR_7;
     FUNC_1(VAR_4, VAR_9);
     VAR_12 = VAR_10;
 }
 else if( FUNC_4(VAR_5, VAR_6, VAR_7) < 0 ) {
     FUNC_6(VAR_4, VAR_6, VAR_5, VAR_7);
     VAR_9 = VAR_7;
     FUNC_1(VAR_4, VAR_9);
     if( !VAR_10 )
  VAR_12 = 1;
 }
 else {
     FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
     VAR_9 = VAR_7;
     FUNC_1(VAR_4, VAR_9);
     if( VAR_10 )
  VAR_12 = 1;
 }
    }
    else {
 mpi_limb_t VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_6, VAR_8);
 VAR_4[VAR_7] = VAR_13;
 VAR_9 = VAR_7 + VAR_13;
 if( VAR_10 )
     VAR_12 = 1;
    }

    VAR_1->nlimbs = VAR_9;
    VAR_1->sign = VAR_12;
    return 0;
}
