
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mpi_size_t ;
typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;


 int FUNC_0 (int*,int*,size_t) ;
 int FUNC_1 (int*,size_t) ;
 int FUNC_2 (int*,int*,int*,size_t) ;
 int FUNC_3 (int*,int*,size_t,int) ;
 int FUNC_4 (int*,int*,size_t,int) ;

void
FUNC_5( mpi_ptr_t VAR_0, mpi_ptr_t VAR_1, mpi_size_t VAR_2 )
{
    mpi_size_t VAR_3;
    mpi_limb_t VAR_4;
    mpi_limb_t VAR_5;



    VAR_5 = VAR_1[0];
    if( VAR_5 <= 1 ) {
 if( VAR_5 == 1 )
     FUNC_0( VAR_0, VAR_1, VAR_2 );
 else
     FUNC_1(VAR_0, VAR_2);
 VAR_4 = 0;
    }
    else
 VAR_4 = FUNC_4( VAR_0, VAR_1, VAR_2, VAR_5 );

    VAR_0[VAR_2] = VAR_4;
    VAR_0++;



    for( VAR_3=1; VAR_3 < VAR_2; VAR_3++) {
 VAR_5 = VAR_1[VAR_3];
 if( VAR_5 <= 1 ) {
     VAR_4 = 0;
     if( VAR_5 == 1 )
  VAR_4 = FUNC_2(VAR_0, VAR_0, VAR_1, VAR_2);
 }
 else
     VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);

 VAR_0[VAR_2] = VAR_4;
 VAR_0++;
    }
}
