
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int temp ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_9__ {char* buffer; int widthInChars; int cursor; } ;
struct TYPE_8__ {scalar_t__ down; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 () ;
 TYPE_4__ VAR_19 ;
 TYPE_2__ VAR_20 ;
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 size_t VAR_23 ;
 TYPE_1__* VAR_24 ;
 size_t VAR_25 ;
 char FUNC_12 (int) ;

void FUNC_13 (int VAR_26) {

 if ( VAR_26 == 'l' && VAR_24[VAR_3].down ) {
  FUNC_0 ("clear\n");
  return;
 }


 if ( VAR_26 == VAR_6 || VAR_26 == VAR_9 ) {

  if ( VAR_19.state != VAR_0 && VAR_20.buffer[0] != '\\'
   && VAR_20.buffer[0] != '/' ) {
   char VAR_27[VAR_18];

   FUNC_10( VAR_27, VAR_20.buffer, sizeof( VAR_27 ) );
   FUNC_2( VAR_20.buffer, sizeof( VAR_20.buffer ), "\\%s", VAR_27 );
   VAR_20.cursor++;
  }

  FUNC_1 ( "]%s\n", VAR_20.buffer );


  if ( VAR_20.buffer[0] == '\\' || VAR_20.buffer[0] == '/' ) {
   FUNC_0( VAR_20.buffer+1 );
   FUNC_0 ("\n");
  } else {

   if ( !VAR_20.buffer[0] ) {
    return;
   } else {
    FUNC_0 ("cmd say ");
    FUNC_0( VAR_20.buffer );
    FUNC_0 ("\n");
   }
  }


  VAR_22[VAR_25 % VAR_2] = VAR_20;
  VAR_25++;
  VAR_23 = VAR_25;

  FUNC_7( &VAR_20 );

  VAR_20.widthInChars = VAR_21;

  if ( VAR_19.state == VAR_1 ) {
   FUNC_11 ();
  }
  return;
 }



 if (VAR_26 == VAR_16) {
  FUNC_8(&VAR_20);
  return;
 }



 if ( (VAR_26 == VAR_12 && VAR_24[VAR_15].down) || ( VAR_26 == VAR_17 ) || ( VAR_26 == VAR_10 ) ||
   ( ( FUNC_12(VAR_26) == 'p' ) && VAR_24[VAR_3].down ) ) {
  if ( VAR_25 - VAR_23 < VAR_2
   && VAR_23 > 0 ) {
   VAR_23--;
  }
  VAR_20 = VAR_22[ VAR_23 % VAR_2 ];
  return;
 }

 if ( (VAR_26 == VAR_11 && VAR_24[VAR_15].down) || ( VAR_26 == VAR_4 ) || ( VAR_26 == VAR_8 ) ||
   ( ( FUNC_12(VAR_26) == 'n' ) && VAR_24[VAR_3].down ) ) {
  if (VAR_23 == VAR_25)
   return;
  VAR_23++;
  VAR_20 = VAR_22[ VAR_23 % VAR_2 ];
  return;
 }


 if ( VAR_26 == VAR_14 ) {
  FUNC_5();
  return;
 }

 if ( VAR_26 == VAR_13) {
  FUNC_4();
  return;
 }

 if ( VAR_26 == VAR_12) {
  FUNC_5();
  if(VAR_24[VAR_3].down) {
   FUNC_5();
   FUNC_5();
  }
  return;
 }

 if ( VAR_26 == VAR_11) {
  FUNC_4();
  if(VAR_24[VAR_3].down) {
   FUNC_4();
   FUNC_4();
  }
  return;
 }


 if ( VAR_26 == VAR_7 && VAR_24[VAR_3].down ) {
  FUNC_6();
  return;
 }


 if ( VAR_26 == VAR_5 && VAR_24[VAR_3].down ) {
  FUNC_3();
  return;
 }


 FUNC_9( &VAR_20, VAR_26 );
}
