
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mpi_size_t ;
typedef scalar_t__ mpi_ptr_t ;
typedef scalar_t__ mpi_limb_t ;
struct TYPE_7__ {scalar_t__ nlimbs; int sign; scalar_t__ d; size_t alloced; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;

int
FUNC_6( MPI VAR_1, MPI VAR_2, MPI VAR_3)
{
 int VAR_4 = -VAR_0;
 mpi_size_t VAR_5, VAR_6, VAR_7;
 mpi_ptr_t VAR_8, VAR_9, VAR_10;
 mpi_limb_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15=0;
 mpi_ptr_t VAR_16=((void*)0);


 if( VAR_2->nlimbs < VAR_3->nlimbs ) {
  VAR_5 = VAR_3->nlimbs;
  VAR_12 = VAR_3->sign;
  VAR_8 = VAR_3->d;
  VAR_6 = VAR_2->nlimbs;
  VAR_13 = VAR_2->sign;
  VAR_9 = VAR_2->d;
 }
 else {
  VAR_5 = VAR_2->nlimbs;
  VAR_12 = VAR_2->sign;
  VAR_8 = VAR_2->d;
  VAR_6 = VAR_3->nlimbs;
  VAR_13 = VAR_3->sign;
  VAR_9 = VAR_3->d;
 }
 VAR_14 = VAR_12 ^ VAR_13;
 VAR_10 = VAR_1->d;


 VAR_7 = VAR_5 + VAR_6;
 if( VAR_1->alloced < (size_t)VAR_7 ) {
  if( VAR_10 == VAR_8 || VAR_10 == VAR_9 ) {
   VAR_10 = FUNC_1(VAR_7);
   if (!VAR_10) goto nomem;
   VAR_15 = 1;
  }
  else {
   if (FUNC_4(VAR_1, VAR_7 ) < 0) goto nomem;
   VAR_10 = VAR_1->d;
  }
 }
 else {
  if( VAR_10 == VAR_8 ) {

   VAR_8 = VAR_16 = FUNC_1( VAR_5);
   if (!VAR_8) goto nomem;

   if( VAR_10 == VAR_9 )
    VAR_9 = VAR_8;

   FUNC_0( VAR_8, VAR_10, VAR_5 );
  }
  else if( VAR_10 == VAR_9 ) {

   VAR_9 = VAR_16 = FUNC_1( VAR_6);
   if (!VAR_9) goto nomem;

   FUNC_0( VAR_9, VAR_10, VAR_6 );
  }
 }

 if( !VAR_6 )
  VAR_7 = 0;
 else {
  if (FUNC_5( VAR_10, VAR_8, VAR_5, VAR_9, VAR_6, &VAR_11) < 0)
   goto nomem;
  VAR_7 -= VAR_11? 0:1;
 }

 if( VAR_15 )
  FUNC_2( VAR_1, VAR_10, VAR_7 );

 VAR_1->nlimbs = VAR_7;
 VAR_1->sign = VAR_14;
 VAR_4 = 0;
 nomem:
 if( VAR_16 )
  FUNC_3( VAR_16 );
 return VAR_4;
}
