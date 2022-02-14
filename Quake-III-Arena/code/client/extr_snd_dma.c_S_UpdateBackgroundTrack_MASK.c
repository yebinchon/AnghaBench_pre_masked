
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int raw ;
typedef int byte ;
struct TYPE_6__ {int speed; } ;
struct TYPE_5__ {int rate; int width; int channels; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int,int,int *) ;
 int FUNC_3 (int,int,int,int,int *,float) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int,int,scalar_t__) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_8( void ) {
 int VAR_9;
 int VAR_10;
 byte VAR_11[30000];
 int VAR_12;
 int VAR_13;
 static float VAR_14 = 0.5f;

 if ( !VAR_2 ) {
  return;
 }


 VAR_14 = (VAR_14 + (VAR_6->value * 2))/4.0f;


 if ( VAR_14 <= 0 ) {
  return;
 }


 if ( VAR_7 < VAR_8 ) {
  VAR_7 = VAR_8;
 }

 while ( VAR_7 < VAR_8 + VAR_0 ) {
  VAR_9 = VAR_0 - (VAR_7 - VAR_8);


  VAR_10 = VAR_9 * VAR_3.rate / VAR_1.speed;


  if ( VAR_10 > VAR_5 ) {
   VAR_10 = VAR_5;
  }


  VAR_12 = VAR_10 * (VAR_3.width * VAR_3.channels);
  if ( VAR_12 > sizeof(VAR_11) ) {
   VAR_12 = sizeof(VAR_11);
   VAR_10 = VAR_12 / (VAR_3.width * VAR_3.channels);
  }

  VAR_13 = FUNC_7( VAR_11, 1, VAR_12, VAR_2 );
  if ( VAR_13 != VAR_12 ) {
   FUNC_0("StreamedRead failure on music track\n");
   FUNC_5();
   return;
  }


  FUNC_2( VAR_10, VAR_3.width, VAR_3.channels, VAR_11 );


  FUNC_3( VAR_10, VAR_3.rate,
   VAR_3.width, VAR_3.channels, VAR_11, VAR_14 );

  VAR_5 -= VAR_10;
  if ( !VAR_5 ) {

   if (VAR_4[0]) {
    FUNC_6( VAR_2 );
    FUNC_1( VAR_2 );
    VAR_2 = 0;
    FUNC_4( VAR_4, VAR_4 );
    if ( !VAR_2 ) {
     return;
    }
   } else {
    VAR_2 = 0;
    return;
   }
  }
 }
}
