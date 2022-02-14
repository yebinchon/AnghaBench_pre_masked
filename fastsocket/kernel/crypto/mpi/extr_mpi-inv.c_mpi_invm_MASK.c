
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__**,TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;

int
FUNC_11( MPI VAR_1, const MPI VAR_2, const MPI VAR_3 )
{



 MPI VAR_4 = ((void*)0), VAR_5 = ((void*)0);
 MPI VAR_6 = ((void*)0), VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 MPI VAR_9 = ((void*)0), VAR_10 = ((void*)0), VAR_11 = ((void*)0);
 MPI VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0);
 unsigned VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18 = -VAR_0;

 if (FUNC_4(&VAR_4, VAR_2) < 0) goto cleanup;
 if (FUNC_4(&VAR_5, VAR_3) < 0) goto cleanup;

 for(VAR_15=0; !FUNC_10(VAR_4,0) && !FUNC_10(VAR_5,0); VAR_15++ ) {
  if (FUNC_7(VAR_4, VAR_4, 1) < 0) goto cleanup;
  if (FUNC_7(VAR_5, VAR_5, 1) < 0) goto cleanup;
 }
 VAR_17 = FUNC_10(VAR_5,0);

 VAR_6 = FUNC_2(1); if (!VAR_6) goto cleanup;
 if( !VAR_17 ) {
  VAR_7 = FUNC_2(0);
  if (!VAR_7) goto cleanup;
 }
 if (FUNC_4(&VAR_8, VAR_4) < 0) goto cleanup;
 if (FUNC_4(&VAR_9, VAR_5) < 0) goto cleanup;
 if( !VAR_17 ) {
  VAR_10 = FUNC_1( FUNC_6(VAR_4) ); if (!VAR_10) goto cleanup;
  if (FUNC_9( VAR_10, VAR_6, VAR_4 ) < 0) goto cleanup;
 }
 if (FUNC_4(&VAR_11, VAR_5) < 0) goto cleanup;
 if( FUNC_10(VAR_4, 0) ) {
  VAR_12 = FUNC_2(0); if (!VAR_12) goto cleanup;
  if( !VAR_17 ) {
   VAR_13 = FUNC_2(1); if (!VAR_13) goto cleanup;
   VAR_13->sign = 1;
  }
  if (FUNC_4(&VAR_14, VAR_5) < 0) goto cleanup;
  VAR_14->sign = !VAR_14->sign;
  goto Y4;
 }
 else {
  VAR_12 = FUNC_2(1); if (!VAR_12) goto cleanup;
  if( !VAR_17 ) {
   VAR_13 = FUNC_2(0); if (!VAR_13) goto cleanup;
  }
  if (FUNC_4(&VAR_14, VAR_4) < 0) goto cleanup;
 }
 do {
  do {
   if( !VAR_17 ) {
    if( FUNC_10(VAR_12, 0) || FUNC_10(VAR_13, 0) ) {
     if (FUNC_0(VAR_12, VAR_12, VAR_5) < 0) goto cleanup;
     if (FUNC_9(VAR_13, VAR_13, VAR_4) < 0) goto cleanup;
    }
    if (FUNC_7(VAR_12, VAR_12, 1) < 0) goto cleanup;
    if (FUNC_7(VAR_13, VAR_13, 1) < 0) goto cleanup;
    if (FUNC_7(VAR_14, VAR_14, 1) < 0) goto cleanup;
   }
   else {
    if( FUNC_10(VAR_12, 0) )
     if (FUNC_0(VAR_12, VAR_12, VAR_5) < 0) goto cleanup;
    if (FUNC_7(VAR_12, VAR_12, 1) < 0) goto cleanup;
    if (FUNC_7(VAR_14, VAR_14, 1) < 0) goto cleanup;
   }
  Y4:
   ;
  } while( !FUNC_10( VAR_14, 0 ) );

  if( !VAR_14->sign ) {
   if (FUNC_8(VAR_6, VAR_12) < 0) goto cleanup;
   if( !VAR_17 )
    if (FUNC_8(VAR_7, VAR_13) < 0) goto cleanup;
   if (FUNC_8(VAR_8, VAR_14) < 0) goto cleanup;
  }
  else {
   if (FUNC_9(VAR_9, VAR_5, VAR_12) < 0) goto cleanup;
   VAR_16 = VAR_4->sign; VAR_4->sign = !VAR_4->sign;
   if( !VAR_17 )
    if (FUNC_9(VAR_10, VAR_4, VAR_13) < 0) goto cleanup;
   VAR_4->sign = VAR_16;
   VAR_16 = VAR_14->sign; VAR_14->sign = !VAR_14->sign;
   if (FUNC_8(VAR_11, VAR_14) < 0) goto cleanup;
   VAR_14->sign = VAR_16;
  }
  if (FUNC_9(VAR_12, VAR_6, VAR_9) < 0) goto cleanup;
  if( !VAR_17 )
   if (FUNC_9(VAR_13, VAR_7, VAR_10) < 0) goto cleanup;
  if (FUNC_9(VAR_14, VAR_8, VAR_11) < 0) goto cleanup;
  if( VAR_12->sign ) {
   if (FUNC_0(VAR_12, VAR_12, VAR_5) < 0) goto cleanup;
   if( !VAR_17 )
    if (FUNC_9(VAR_13, VAR_13, VAR_4) < 0) goto cleanup;
  }
 } while( FUNC_3( VAR_14, 0 ) );

 VAR_18 = FUNC_8(VAR_1, VAR_6);

 cleanup:
 FUNC_5(VAR_6);
 FUNC_5(VAR_9);
 FUNC_5(VAR_12);
 if( !VAR_17 ) {
  FUNC_5(VAR_7);
  FUNC_5(VAR_10);
  FUNC_5(VAR_13);
 }
 FUNC_5(VAR_8);
 FUNC_5(VAR_11);
 FUNC_5(VAR_14);

 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
 return VAR_18;
}
