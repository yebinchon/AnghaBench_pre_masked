
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int widthInChars; int scroll; int cursor; scalar_t__ buffer; } ;
typedef TYPE_1__ field_t ;
struct TYPE_5__ {int realtime; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,char*,double) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,char*,float*,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7( field_t *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, qboolean VAR_11 ) {
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 char VAR_16[VAR_1];
 int VAR_17;

 VAR_13 = VAR_6->widthInChars;
 VAR_12 = FUNC_6( VAR_6->buffer ) + 1;


 if ( VAR_12 <= VAR_13 ) {
  VAR_14 = 0;
 } else {
  if ( VAR_6->scroll + VAR_13 > VAR_12 ) {
   VAR_6->scroll = VAR_12 - VAR_13;
   if ( VAR_6->scroll < 0 ) {
    VAR_6->scroll = 0;
   }
  }
  VAR_14 = VAR_6->scroll;
 }

 if ( VAR_14 + VAR_13 > VAR_12 ) {
  VAR_13 = VAR_12 - VAR_14;
 }


 if ( VAR_13 >= VAR_1 ) {
  FUNC_0( VAR_0, "drawLen >= MAX_STRING_CHARS" );
 }

 FUNC_1( VAR_16, VAR_6->buffer + VAR_14, VAR_13 );
 VAR_16[ VAR_13 ] = 0;


 if ( VAR_10 == VAR_2 ) {
  float VAR_18[4];

  VAR_18[0] = VAR_18[1] = VAR_18[2] = VAR_18[3] = 1.0;
  FUNC_5( VAR_7, VAR_8, VAR_16, VAR_18, VAR_5 );
 } else {

  FUNC_3( VAR_7, VAR_8, VAR_16, 1.0 );
 }


 if ( !VAR_11 ) {
  return;
 }

 if ( (int)( VAR_3.realtime >> 8 ) & 1 ) {
  return;
 }

 if ( VAR_4 ) {
  VAR_15 = 11;
 } else {
  VAR_15 = 10;
 }

 VAR_17 = VAR_13 - ( FUNC_2( VAR_16 ) + 1 );

 if ( VAR_10 == VAR_2 ) {
  FUNC_4( VAR_7 + ( VAR_6->cursor - VAR_14 - VAR_17 ) * VAR_10, VAR_8, VAR_15 );
 } else {
  VAR_16[0] = VAR_15;
  VAR_16[1] = 0;
  FUNC_3( VAR_7 + ( VAR_6->cursor - VAR_14 - VAR_17 ) * VAR_10, VAR_8, VAR_16, 1.0 );

 }
}
