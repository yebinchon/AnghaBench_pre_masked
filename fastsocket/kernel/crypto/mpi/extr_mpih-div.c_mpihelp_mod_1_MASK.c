
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
FUNC_3(mpi_ptr_t VAR_4, mpi_size_t VAR_5,
          mpi_limb_t VAR_6)
{
    mpi_size_t VAR_7;
    mpi_limb_t VAR_8, VAR_9, VAR_10;
    int VAR_11;


    if( !VAR_5 )
 return 0;
    if( VAR_2 > (2 * VAR_3 + 6)
 && (VAR_2 - (2 * VAR_3 + 6)) * VAR_5 > VAR_2 ) {
 int VAR_12;

 FUNC_1( VAR_12, VAR_6 );
 if( VAR_12 ) {
     mpi_limb_t VAR_13;

     VAR_6 <<= VAR_12;







     if( !(VAR_6 << 1) )
  VAR_13 = ~(mpi_limb_t)0;
     else
  FUNC_2(VAR_13, VAR_11,
      -VAR_6, 0, VAR_6);

     VAR_8 = VAR_4[VAR_5 - 1];
     VAR_10 = VAR_8 >> (VAR_0 - VAR_12);







     for( VAR_7 = VAR_5 - 2; VAR_7 >= 0; VAR_7--) {
  VAR_9 = VAR_4[VAR_7];
  FUNC_0(VAR_11, VAR_10, VAR_10,
       ((VAR_8 << VAR_12)
     | (VAR_9 >> (VAR_0 - VAR_12))),
     VAR_6, VAR_13);
  VAR_8 = VAR_9;
     }
     FUNC_0(VAR_11, VAR_10, VAR_10,
         VAR_8 << VAR_12,
         VAR_6, VAR_13);
     return VAR_10 >> VAR_12;
 }
 else {
     mpi_limb_t VAR_14;







     if( !(VAR_6 << 1) )
  VAR_14 = ~(mpi_limb_t)0;
     else
  FUNC_2(VAR_14, VAR_11,
       -VAR_6, 0, VAR_6);

     VAR_7 = VAR_5 - 1;
     VAR_10 = VAR_4[VAR_7];

     if( VAR_10 >= VAR_6 )
  VAR_10 = 0;
     else
  VAR_7--;

     for( ; VAR_7 >= 0; VAR_7--) {
  VAR_9 = VAR_4[VAR_7];
  FUNC_0(VAR_11, VAR_10, VAR_10,
      VAR_9, VAR_6, VAR_14);
     }
     return VAR_10;
 }
    }
    else {
 if( VAR_1 ) {
     int VAR_15;

     FUNC_1(VAR_15, VAR_6);
     if( VAR_15 ) {
  VAR_6 <<= VAR_15;

  VAR_8 = VAR_4[VAR_5 - 1];
  VAR_10 = VAR_8 >> (VAR_0 - VAR_15);







  for(VAR_7 = VAR_5 - 2; VAR_7 >= 0; VAR_7--) {
      VAR_9 = VAR_4[VAR_7];
      FUNC_2 (VAR_11, VAR_10, VAR_10,
    ((VAR_8 << VAR_15)
    | (VAR_9 >> (VAR_0 - VAR_15))),
    VAR_6);
      VAR_8 = VAR_9;
  }
  FUNC_2 (VAR_11, VAR_10, VAR_10,
       VAR_8 << VAR_15,
       VAR_6);
  return VAR_10 >> VAR_15;
     }
 }


 VAR_7 = VAR_5 - 1;
 VAR_10 = VAR_4[VAR_7];

 if(VAR_10 >= VAR_6)
     VAR_10 = 0;
 else
     VAR_7--;

 for(; VAR_7 >= 0; VAR_7--) {
     VAR_9 = VAR_4[VAR_7];
     FUNC_2 (VAR_11, VAR_10, VAR_10, VAR_9, VAR_6);
 }
 return VAR_10;
    }
}
