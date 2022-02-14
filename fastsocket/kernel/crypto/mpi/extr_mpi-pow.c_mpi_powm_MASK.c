
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct karatsuba_ctx {int dummy; } ;
typedef int mpi_size_t ;
typedef int* mpi_ptr_t ;
typedef int mpi_limb_t ;
typedef scalar_t__ mpi_limb_signed_t ;
struct TYPE_8__ {int nlimbs; int sign; int* d; int alloced; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct karatsuba_ctx*,int ,int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int*,int*,int,int*) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int ,int*,int,int*,int) ;
 int FUNC_12 (int*,int*,int,int) ;
 scalar_t__ FUNC_13 (int*,int*,int,int*,int,int*) ;
 scalar_t__ FUNC_14 (int*,int*,int,int*,int,struct karatsuba_ctx*) ;
 int FUNC_15 (struct karatsuba_ctx*) ;
 int FUNC_16 (int*,int*,int,int) ;
 int FUNC_17 (int*,int*,int,int*,int) ;

int
FUNC_18( MPI VAR_3, MPI VAR_4, MPI VAR_5, MPI VAR_6)
{
    mpi_ptr_t VAR_7=((void*)0), VAR_8=((void*)0), VAR_9=((void*)0);
    mpi_ptr_t VAR_10=((void*)0);
    mpi_ptr_t VAR_11 = ((void*)0);
    mpi_ptr_t VAR_12, VAR_13, VAR_14, VAR_15;
    mpi_size_t VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    mpi_size_t VAR_24;
    int VAR_25;
    int VAR_26;
    int VAR_27=0;
    mpi_size_t VAR_28=0;

    int VAR_29 = -VAR_1;

    VAR_16 = VAR_5->nlimbs;
    VAR_17 = VAR_6->nlimbs;
    VAR_24 = 2 * VAR_17;
    VAR_20 = VAR_5->sign;
    VAR_21 = VAR_6->sign;

    VAR_12 = VAR_3->d;
    VAR_13 = VAR_5->d;

    if( !VAR_17 )
 VAR_17 = 1 / VAR_17;

    if( !VAR_16 ) {


 VAR_12[0] = 1;
 VAR_3->nlimbs = (VAR_17 == 1 && VAR_6->d[0] == 1) ? 0 : 1;
 VAR_3->sign = 0;
 goto leave;
    }





    VAR_14 = VAR_7 = FUNC_5(VAR_17);
    if (!VAR_14)
     goto enomem;
    FUNC_3( VAR_25, VAR_6->d[VAR_17-1] );
    if( VAR_25 )
 FUNC_12( VAR_14, VAR_6->d, VAR_17, VAR_25 );
    else
 FUNC_1( VAR_14, VAR_6->d, VAR_17 );

    VAR_18 = VAR_4->nlimbs;
    VAR_22 = VAR_4->sign;
    if( VAR_18 > VAR_17 ) {


 VAR_15 = VAR_8 = FUNC_5( VAR_18 + 1);
 if (!VAR_15)
  goto enomem;
 FUNC_1( VAR_15, VAR_4->d, VAR_18 );


 FUNC_11( VAR_15 + VAR_17, 0, VAR_15, VAR_18, VAR_14, VAR_17 );
 VAR_18 = VAR_17;


 FUNC_2( VAR_15, VAR_18 );
    }
    else
 VAR_15 = VAR_4->d;

    if( !VAR_18 ) {
 VAR_3->nlimbs = 0;
 VAR_3->sign = 0;
 goto leave;
    }

    if( VAR_3->alloced < VAR_24 ) {



 if( VAR_12 == VAR_13 || VAR_12 == VAR_14 || VAR_12 == VAR_15 ) {
     VAR_12 = FUNC_5(VAR_24);
     if (!VAR_12)
      goto enomem;
     VAR_27 = 1;
 }
 else {
  if (FUNC_8( VAR_3, VAR_24 ) < 0)
   goto enomem;
     VAR_12 = VAR_3->d;
 }
    }
    else {
 if( VAR_12 == VAR_15 ) {

  FUNC_0(VAR_8);
     VAR_15 = VAR_8 = FUNC_5(VAR_18);
     if (!VAR_15)
      goto enomem;
     FUNC_1(VAR_15, VAR_12, VAR_18);
 }
 if( VAR_12 == VAR_13 ) {

     VAR_13 = VAR_9 = FUNC_5(VAR_16);
     if (!VAR_13)
      goto enomem;
     FUNC_1(VAR_13, VAR_12, VAR_16);
 }
 if( VAR_12 == VAR_14 ) {

     FUNC_0(VAR_7);
     VAR_14 = VAR_7 = FUNC_5(VAR_17);
     if (!VAR_14)
      goto enomem;
     FUNC_1(VAR_14, VAR_12, VAR_17);
 }
    }

    FUNC_1( VAR_12, VAR_15, VAR_18 );
    VAR_19 = VAR_18;
    VAR_23 = VAR_22;

    {
 mpi_size_t VAR_30;
 mpi_ptr_t VAR_31;
 int VAR_32;
 mpi_limb_t VAR_33;
 mpi_limb_t VAR_34;
 struct karatsuba_ctx VAR_35;

 VAR_31 = VAR_10 = FUNC_5(2 * (VAR_17 + 1));
 if (VAR_31)
  goto enomem;

 FUNC_4( &VAR_35, 0, sizeof VAR_35 );
 VAR_26 = (VAR_13[0] & 1) && VAR_4->sign;

 VAR_30 = VAR_16 - 1;
 VAR_33 = VAR_13[VAR_30];
 FUNC_3 (VAR_32, VAR_33);
 VAR_33 = (VAR_33 << VAR_32) << 1;
 VAR_32 = VAR_0 - 1 - VAR_32;
 for(;;) {
     while( VAR_32 ) {
  mpi_ptr_t VAR_36;
  mpi_size_t VAR_37;


  if( VAR_19 < VAR_2 )
      FUNC_10( VAR_31, VAR_12, VAR_19 );
  else {
      if( !VAR_11 ) {
   VAR_28 = 2 * VAR_19;
   VAR_11 = FUNC_5(VAR_28);
   if (!VAR_11)
    goto enomem;
      }
      else if( VAR_28 < (2*VAR_19) ) {
   FUNC_7( VAR_11 );
   VAR_28 = 2 * VAR_19;
   VAR_11 = FUNC_5(VAR_28);
   if (!VAR_11)
    goto enomem;
      }
      FUNC_9( VAR_31, VAR_12, VAR_19, VAR_11 );
  }

  VAR_37 = 2 * VAR_19;
  if( VAR_37 > VAR_17 ) {
      FUNC_11(VAR_31 + VAR_17, 0, VAR_31, VAR_37, VAR_14, VAR_17);
      VAR_37 = VAR_17;
  }

  VAR_36 = VAR_12; VAR_12 = VAR_31; VAR_31 = VAR_36;
  VAR_19 = VAR_37;

  if( (mpi_limb_signed_t)VAR_33 < 0 ) {

      if( VAR_18 < VAR_2 ) {
       mpi_limb_t VAR_38;
       if (FUNC_13( VAR_31, VAR_12, VAR_19, VAR_15, VAR_18, &VAR_38 ) < 0)
        goto enomem;
      }
      else {
       if (FUNC_14(
     VAR_31, VAR_12, VAR_19, VAR_15, VAR_18, &VAR_35 ) < 0)
        goto enomem;
      }

      VAR_37 = VAR_19 + VAR_18;
      if( VAR_37 > VAR_17 ) {
   FUNC_11(VAR_31 + VAR_17, 0, VAR_31, VAR_37, VAR_14, VAR_17);
   VAR_37 = VAR_17;
      }

      VAR_36 = VAR_12; VAR_12 = VAR_31; VAR_31 = VAR_36;
      VAR_19 = VAR_37;
  }
  VAR_33 <<= 1;
  VAR_32--;
     }

     VAR_30--;
     if( VAR_30 < 0 )
  break;
     VAR_33 = VAR_13[VAR_30];
     VAR_32 = VAR_0;
 }







 if( VAR_25 ) {
     VAR_34 = FUNC_12( VAR_3->d, VAR_12, VAR_19, VAR_25);
     VAR_12 = VAR_3->d;
     if( VAR_34 ) {
  VAR_12[VAR_19] = VAR_34;
  VAR_19++;
     }
 }
 else {
     FUNC_1( VAR_3->d, VAR_12, VAR_19);
     VAR_12 = VAR_3->d;
 }

 if( VAR_19 >= VAR_17 ) {
     FUNC_11(VAR_12 + VAR_17, 0, VAR_12, VAR_19, VAR_14, VAR_17);
     VAR_19 = VAR_17;
 }


 if( VAR_25 )
     FUNC_16( VAR_12, VAR_12, VAR_19, VAR_25);
 FUNC_2 (VAR_12, VAR_19);

 FUNC_15( &VAR_35 );
    }

    if( VAR_26 && VAR_19 ) {
 if( VAR_25 )
     FUNC_16( VAR_14, VAR_14, VAR_17, VAR_25);
 FUNC_17( VAR_12, VAR_14, VAR_17, VAR_12, VAR_19);
 VAR_19 = VAR_17;
 VAR_23 = VAR_21;
 FUNC_2(VAR_12, VAR_19);
    }
    VAR_3->nlimbs = VAR_19;
    VAR_3->sign = VAR_23;

 leave:
    VAR_29 = 0;
 enomem:
    if( VAR_27 ) FUNC_6( VAR_3, VAR_12, VAR_24 );
    if( VAR_7 ) FUNC_7( VAR_7 );
    if( VAR_8 ) FUNC_7( VAR_8 );
    if( VAR_9 ) FUNC_7( VAR_9 );
    if( VAR_10 ) FUNC_7( VAR_10 );
    if( VAR_11 ) FUNC_7( VAR_11 );
    return VAR_29;
}
