
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_3__ {int widthInChars; char* buffer; int scroll; int cursor; } ;
typedef TYPE_1__ mfield_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (int,int,char*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;

void FUNC_6( mfield_t *VAR_10, int VAR_11, int VAR_12, int VAR_13, vec4_t VAR_14 ) {
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 char VAR_20[VAR_2];

 VAR_17 = VAR_10->widthInChars;
 VAR_15 = FUNC_3( VAR_10->buffer ) + 1;


 if ( VAR_15 <= VAR_17 ) {
  VAR_18 = 0;
 } else {
  if ( VAR_10->scroll + VAR_17 > VAR_15 ) {
   VAR_10->scroll = VAR_15 - VAR_17;
   if ( VAR_10->scroll < 0 ) {
    VAR_10->scroll = 0;
   }
  }
  VAR_18 = VAR_10->scroll;
 }

 if ( VAR_18 + VAR_17 > VAR_15 ) {
  VAR_17 = VAR_15 - VAR_18;
 }


 if ( VAR_17 >= VAR_2 ) {
  FUNC_4( "drawLen >= MAX_STRING_CHARS" );
 }
 FUNC_2( VAR_20, VAR_10->buffer + VAR_18, VAR_17 );
 VAR_20[ VAR_17 ] = 0;

 FUNC_1( VAR_11, VAR_12, VAR_20, VAR_13, VAR_14 );


 if (!(VAR_13 & VAR_7)) {
  return;
 }

 if ( FUNC_5() ) {
  VAR_19 = 11;
 } else {
  VAR_19 = 10;
 }

 VAR_13 &= ~VAR_7;
 VAR_13 |= VAR_4;

 if (VAR_13 & VAR_9)
 {
  VAR_16 = VAR_3;
 }
 else if (VAR_13 & VAR_6)
 {
  VAR_16 = VAR_1;
 }
 else
 {
  VAR_16 = VAR_0;
 }

 if (VAR_13 & VAR_5)
 {
  VAR_15 = FUNC_3(VAR_20);
  VAR_11 = VAR_11 - VAR_15*VAR_16/2;
 }
 else if (VAR_13 & VAR_8)
 {
  VAR_15 = FUNC_3(VAR_20);
  VAR_11 = VAR_11 - VAR_15*VAR_16;
 }

 FUNC_0( VAR_11 + ( VAR_10->cursor - VAR_18 ) * VAR_16, VAR_12, VAR_19, VAR_13 & ~(VAR_5|VAR_8), VAR_14 );
}
