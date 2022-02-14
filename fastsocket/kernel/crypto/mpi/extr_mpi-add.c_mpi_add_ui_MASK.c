
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpi_size_t ;
typedef unsigned long* mpi_ptr_t ;
typedef void* mpi_limb_t ;
struct TYPE_5__ {int nlimbs; int sign; int alloced; unsigned long* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (unsigned long*,unsigned long*,int,unsigned long) ;
 int FUNC_2 (unsigned long*,unsigned long*,int,unsigned long) ;

int
FUNC_3(MPI VAR_1, const MPI VAR_2, unsigned long VAR_3 )
{
    mpi_ptr_t VAR_4, VAR_5;
    mpi_size_t VAR_6, VAR_7;
    int VAR_8, VAR_9;

    VAR_6 = VAR_2->nlimbs;
    VAR_8 = VAR_2->sign;
    VAR_9 = 0;


    VAR_7 = VAR_6 + 1;
    if( VAR_1->alloced < VAR_7 )
     if (FUNC_0(VAR_1, VAR_7) < 0)
      return -VAR_0;


    VAR_5 = VAR_2->d;
    VAR_4 = VAR_1->d;

    if( !VAR_6 ) {
 VAR_4[0] = VAR_3;
 VAR_7 = VAR_3? 1:0;
    }
    else if( !VAR_8 ) {
 mpi_limb_t VAR_10;
 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_3);
 VAR_4[VAR_6] = VAR_10;
 VAR_7 = VAR_6 + VAR_10;
    }
    else {

 if( VAR_6 == 1 && VAR_5[0] < VAR_3 ) {
     VAR_4[0] = VAR_3 - VAR_5[0];
     VAR_7 = 1;
 }
 else {
     FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3);

     VAR_7 = VAR_6 - (VAR_4[VAR_6-1]==0);
     VAR_9 = 1;
 }
    }

    VAR_1->nlimbs = VAR_7;
    VAR_1->sign = VAR_9;
    return 0;
}
