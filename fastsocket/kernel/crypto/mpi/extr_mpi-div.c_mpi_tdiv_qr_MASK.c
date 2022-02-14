
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mpi_size_t ;
typedef scalar_t__* mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;
typedef int marker ;
struct TYPE_7__ {int nlimbs; int sign; scalar_t__* d; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (scalar_t__**,int ,int) ;
 scalar_t__* FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__*,int,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__*,int ,scalar_t__*,int,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (scalar_t__*,scalar_t__*,int,unsigned int) ;
 scalar_t__ FUNC_10 (scalar_t__*,int,scalar_t__) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,int,unsigned int) ;

int
FUNC_12( MPI VAR_1, MPI VAR_2, MPI VAR_3, MPI VAR_4)
{
 int VAR_5 = -VAR_0;
 mpi_ptr_t VAR_6, VAR_7;
 mpi_ptr_t VAR_8, VAR_9;
 mpi_size_t VAR_10 = VAR_3->nlimbs;
 mpi_size_t VAR_11 = VAR_4->nlimbs;
 mpi_size_t VAR_12, VAR_13;
 mpi_size_t VAR_14 = VAR_3->sign;
 mpi_size_t VAR_15 = VAR_3->sign ^ VAR_4->sign;
 unsigned VAR_16;
 mpi_limb_t VAR_17;
 mpi_ptr_t VAR_18[5];
 int VAR_19=0;

 FUNC_3(VAR_18,0,sizeof(VAR_18));




 VAR_13 = VAR_10 + 1;
 if (FUNC_6( VAR_2, VAR_13) < 0) goto nomem;

 VAR_12 = VAR_13 - VAR_11;
 if( VAR_12 <= 0 ) {
  if( VAR_3 != VAR_2 ) {
   VAR_2->nlimbs = VAR_3->nlimbs;
   VAR_2->sign = VAR_3->sign;
   FUNC_0(VAR_2->d, VAR_3->d, VAR_10);
  }
  if( VAR_1 ) {


   VAR_1->nlimbs = 0;
   VAR_1->sign = 0;
  }
  return 0;
 }

 if( VAR_1 )
  if (FUNC_6( VAR_1, VAR_12) < 0) goto nomem;


 VAR_6 = VAR_3->d;
 VAR_7 = VAR_4->d;
 VAR_9 = VAR_2->d;


 if( VAR_11 == 1 ) {
  mpi_limb_t VAR_20;
  if( VAR_1 ) {
   VAR_8 = VAR_1->d;
   VAR_20 = FUNC_7( VAR_8, VAR_6, VAR_10, VAR_7[0] );
   VAR_12 -= VAR_8[VAR_12 - 1] == 0;
   VAR_1->nlimbs = VAR_12;
   VAR_1->sign = VAR_15;
  }
  else
   VAR_20 = FUNC_10( VAR_6, VAR_10, VAR_7[0] );
  VAR_9[0] = VAR_20;
  VAR_13 = VAR_20 != 0?1:0;
  VAR_2->nlimbs = VAR_13;
  VAR_2->sign = VAR_14;
  return 0;
 }


 if( VAR_1 ) {
  VAR_8 = VAR_1->d;


  if(VAR_8 == VAR_6) {
   VAR_6 = VAR_18[VAR_19++] = FUNC_4(VAR_10);
   FUNC_0(VAR_6, VAR_8, VAR_10);
  }
 }
 else
  VAR_8 = VAR_9 + VAR_11;

 FUNC_2( VAR_16, VAR_7[VAR_11 - 1] );





 if( VAR_16 ) {
  mpi_ptr_t VAR_21;
  mpi_limb_t VAR_22;




  VAR_21 = VAR_18[VAR_19++] = FUNC_4(VAR_11);
  if (!VAR_21) goto nomem;
  FUNC_9( VAR_21, VAR_7, VAR_11, VAR_16 );
  VAR_7 = VAR_21;




  VAR_22 = FUNC_9(VAR_9, VAR_6, VAR_10, VAR_16);
  if( VAR_22 ) {
   VAR_9[VAR_10] = VAR_22;
   VAR_13 = VAR_10 + 1;
  }
  else
   VAR_13 = VAR_10;
 }
 else {


  if( VAR_7 == VAR_9 || (VAR_1 && (VAR_7 == VAR_8))) {
   mpi_ptr_t VAR_23;

   VAR_23 = VAR_18[VAR_19++] = FUNC_4(VAR_11);
   if (!VAR_23) goto nomem;
   FUNC_0( VAR_23, VAR_7, VAR_11 );
   VAR_7 = VAR_23;
  }


  if( VAR_9 != VAR_6 )
   FUNC_0(VAR_9, VAR_6, VAR_10);

  VAR_13 = VAR_10;
 }

 VAR_17 = FUNC_8( VAR_8, 0, VAR_9, VAR_13, VAR_7, VAR_11 );

 if( VAR_1 ) {
  VAR_12 = VAR_13 - VAR_11;
  if(VAR_17) {
   VAR_8[VAR_12] = VAR_17;
   VAR_12 += 1;
  }

  VAR_1->nlimbs = VAR_12;
  VAR_1->sign = VAR_15;
 }

 VAR_13 = VAR_11;
 FUNC_1 (VAR_9, VAR_13);

 if( VAR_16 && VAR_13 ) {
  FUNC_11(VAR_9, VAR_9, VAR_13, VAR_16);
  VAR_13 -= VAR_9[VAR_13 - 1] == 0?1:0;
 }

 VAR_2->nlimbs = VAR_13;
 VAR_2->sign = VAR_14;

 VAR_5 = 0;
 nomem:
 while( VAR_19 )
  FUNC_5(VAR_18[--VAR_19]);
 return VAR_5;
}
