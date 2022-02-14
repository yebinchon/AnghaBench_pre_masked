
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpi_size_t ;
typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int,int) ;

mpi_limb_t
FUNC_3( mpi_ptr_t VAR_4,
    mpi_ptr_t VAR_5, mpi_size_t VAR_6,
    mpi_limb_t VAR_7)
{
    mpi_size_t VAR_8;
    mpi_limb_t VAR_9, VAR_10, VAR_11;
    int VAR_12;

    if( !VAR_6 )
 return 0;
    if( VAR_2 > (2 * VAR_3 + 6)
 && (VAR_2 - (2 * VAR_3 + 6)) * VAR_6 > VAR_2 ) {
 int VAR_13;

 FUNC_1( VAR_13, VAR_7 );
 if( VAR_13 ) {
     mpi_limb_t VAR_14;

     VAR_7 <<= VAR_13;






     if( !(VAR_7 << 1) )
  VAR_14 = ~(mpi_limb_t)0;
     else
  FUNC_2(VAR_14, VAR_12,
      -VAR_7, 0, VAR_7);

     VAR_9 = VAR_5[VAR_6 - 1];
     VAR_11 = VAR_9 >> (VAR_0 - VAR_13);







     for( VAR_8 = VAR_6 - 2; VAR_8 >= 0; VAR_8--) {
  VAR_10 = VAR_5[VAR_8];
  FUNC_0( VAR_4[VAR_8 + 1], VAR_11, VAR_11,
       ((VAR_9 << VAR_13)
    | (VAR_10 >> (VAR_0 - VAR_13))),
         VAR_7, VAR_14);
  VAR_9 = VAR_10;
     }
     FUNC_0( VAR_4[0], VAR_11, VAR_11,
          VAR_9 << VAR_13,
          VAR_7, VAR_14);
     return VAR_11 >> VAR_13;
 }
 else {
     mpi_limb_t VAR_15;






     if( !(VAR_7 << 1) )
  VAR_15 = ~(mpi_limb_t) 0;
     else
  FUNC_2(VAR_15, VAR_12,
      -VAR_7, 0, VAR_7);

     VAR_8 = VAR_6 - 1;
     VAR_11 = VAR_5[VAR_8];

     if( VAR_11 >= VAR_7 )
  VAR_11 = 0;
     else
  VAR_4[VAR_8--] = 0;

     for( ; VAR_8 >= 0; VAR_8-- ) {
  VAR_10 = VAR_5[VAR_8];
  FUNC_0( VAR_4[VAR_8], VAR_11, VAR_11,
       VAR_10, VAR_7, VAR_15);
     }
     return VAR_11;
 }
    }
    else {
 if(VAR_1) {
     int VAR_16;

     FUNC_1 (VAR_16, VAR_7);
     if( VAR_16 ) {
  VAR_7 <<= VAR_16;

  VAR_9 = VAR_5[VAR_6 - 1];
  VAR_11 = VAR_9 >> (VAR_0 - VAR_16);







  for( VAR_8 = VAR_6 - 2; VAR_8 >= 0; VAR_8--) {
      VAR_10 = VAR_5[VAR_8];
      FUNC_2 (VAR_4[VAR_8 + 1], VAR_11, VAR_11,
        ((VAR_9 << VAR_16)
    | (VAR_10 >> (VAR_0 - VAR_16))),
    VAR_7);
      VAR_9 = VAR_10;
  }
  FUNC_2 (VAR_4[0], VAR_11, VAR_11,
       VAR_9 << VAR_16,
       VAR_7);
  return VAR_11 >> VAR_16;
     }
 }


 VAR_8 = VAR_6 - 1;
 VAR_11 = VAR_5[VAR_8];

 if(VAR_11 >= VAR_7)
     VAR_11 = 0;
 else
     VAR_4[VAR_8--] = 0;

 for(; VAR_8 >= 0; VAR_8--) {
     VAR_10 = VAR_5[VAR_8];
     FUNC_2( VAR_4[VAR_8], VAR_11, VAR_11, VAR_10, VAR_7 );
 }
 return VAR_11;
    }
}
