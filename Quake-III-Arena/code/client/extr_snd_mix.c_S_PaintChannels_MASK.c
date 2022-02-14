
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int soundLength; int soundCompressionMethod; int * soundData; } ;
typedef TYPE_1__ sfx_t ;
typedef int portable_samplepair_t ;
struct TYPE_18__ {double leftvol; double rightvol; int startSample; TYPE_1__* thesfx; } ;
typedef TYPE_2__ channel_t ;
struct TYPE_20__ {scalar_t__ right; scalar_t__ left; } ;
struct TYPE_19__ {int value; } ;


 int FUNC_0 (TYPE_4__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_5 (int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;

void FUNC_6( int VAR_12 ) {
 int VAR_13;
 int VAR_14;
 channel_t *VAR_15;
 sfx_t *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;


 VAR_11 = VAR_10->value*255;


 while ( VAR_7 < VAR_12 ) {


  VAR_14 = VAR_12;
  if ( VAR_12 - VAR_7 > VAR_2 ) {
   VAR_14 = VAR_7 + VAR_2;
  }


  if ( VAR_8 < VAR_7 ) {
   if ( VAR_8 ) {

   }
   FUNC_0(VAR_5, 0, (VAR_14 - VAR_7) * sizeof(portable_samplepair_t));
  } else {

   int VAR_20;
   int VAR_21;

   VAR_21 = (VAR_14 < VAR_8) ? VAR_14 : VAR_8;

   for ( VAR_13 = VAR_7 ; VAR_13 < VAR_21 ; VAR_13++ ) {
    VAR_20 = VAR_13&(VAR_1-1);
    VAR_5[VAR_13-VAR_7] = VAR_9[VAR_20];
   }




   for ( ; VAR_13 < VAR_14 ; VAR_13++ ) {
    VAR_5[VAR_13-VAR_7].left =
    VAR_5[VAR_13-VAR_7].right = 0;
   }
  }


  VAR_15 = VAR_6;
  for ( VAR_13 = 0; VAR_13 < VAR_0 ; VAR_13++, VAR_15++ ) {
   if ( !VAR_15->thesfx || (VAR_15->leftvol<0.25 && VAR_15->rightvol<0.25 )) {
    continue;
   }

   VAR_17 = VAR_7;
   VAR_16 = VAR_15->thesfx;

   VAR_19 = VAR_17 - VAR_15->startSample;
   VAR_18 = VAR_14 - VAR_17;
   if ( VAR_19 + VAR_18 > VAR_16->soundLength ) {
    VAR_18 = VAR_16->soundLength - VAR_19;
   }

   if ( VAR_18 > 0 ) {
    if( VAR_16->soundCompressionMethod == 1) {
     FUNC_2 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
    } else if( VAR_16->soundCompressionMethod == 2) {
     FUNC_4 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
    } else if( VAR_16->soundCompressionMethod == 3) {
     FUNC_3 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
    } else {
     FUNC_1 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
    }
   }
  }


  VAR_15 = VAR_3;
  for ( VAR_13 = 0; VAR_13 < VAR_4 ; VAR_13++, VAR_15++ ) {
   if ( !VAR_15->thesfx || (!VAR_15->leftvol && !VAR_15->rightvol )) {
    continue;
   }

   VAR_17 = VAR_7;
   VAR_16 = VAR_15->thesfx;

   if (VAR_16->soundData==((void*)0) || VAR_16->soundLength==0) {
    continue;
   }



   do {
    VAR_19 = (VAR_17 % VAR_16->soundLength);

    VAR_18 = VAR_14 - VAR_17;
    if ( VAR_19 + VAR_18 > VAR_16->soundLength ) {
     VAR_18 = VAR_16->soundLength - VAR_19;
    }

    if ( VAR_18 > 0 ) {
     if( VAR_16->soundCompressionMethod == 1) {
      FUNC_2 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
     } else if( VAR_16->soundCompressionMethod == 2) {
      FUNC_4 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
     } else if( VAR_16->soundCompressionMethod == 3) {
      FUNC_3 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
     } else {
      FUNC_1 (VAR_15, VAR_16, VAR_18, VAR_19, VAR_17 - VAR_7);
     }
     VAR_17 += VAR_18;
    }
   } while ( VAR_17 < VAR_14);
  }


  FUNC_5( VAR_14 );
  VAR_7 = VAR_14;
 }
}
