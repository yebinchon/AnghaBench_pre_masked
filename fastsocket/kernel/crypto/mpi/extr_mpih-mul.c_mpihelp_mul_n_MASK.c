
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_size_t ;
typedef scalar_t__ mpi_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int) ;

int
FUNC_6( mpi_ptr_t VAR_2, mpi_ptr_t VAR_3, mpi_ptr_t VAR_4, mpi_size_t VAR_5)
{
    if( VAR_3 == VAR_4 ) {
 if( VAR_5 < VAR_1 )
     FUNC_3( VAR_2, VAR_3, VAR_5 );
 else {
     mpi_ptr_t VAR_6;
     VAR_6 = FUNC_0( 2 * VAR_5 );
     if (!VAR_6)
      return -VAR_0;
     FUNC_2( VAR_2, VAR_3, VAR_5, VAR_6 );
     FUNC_1( VAR_6 );
 }
    }
    else {
 if( VAR_5 < VAR_1 )
     FUNC_5( VAR_2, VAR_3, VAR_4, VAR_5 );
 else {
     mpi_ptr_t VAR_7;
     VAR_7 = FUNC_0( 2 * VAR_5 );
     if (!VAR_7)
      return -VAR_0;
     FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
     FUNC_1( VAR_7 );
 }
    }

    return 0;
}
