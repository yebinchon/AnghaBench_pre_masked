
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* buffer; int cursor; int scroll; int widthInChars; } ;
typedef TYPE_1__ field_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*) ;

void FUNC_4( field_t *VAR_2, int VAR_3 ) {
 int VAR_4;

 if ( VAR_3 == 'v' - 'a' + 1 ) {
  FUNC_1( VAR_2 );
  return;
 }

 if ( VAR_3 == 'c' - 'a' + 1 ) {
  FUNC_0( VAR_2 );
  return;
 }

 VAR_4 = FUNC_3( VAR_2->buffer );

 if ( VAR_3 == 'h' - 'a' + 1 ) {
  if ( VAR_2->cursor > 0 ) {
   FUNC_2( VAR_2->buffer + VAR_2->cursor - 1,
    VAR_2->buffer + VAR_2->cursor, VAR_4 + 1 - VAR_2->cursor );
   VAR_2->cursor--;
   if ( VAR_2->cursor < VAR_2->scroll )
   {
    VAR_2->scroll--;
   }
  }
  return;
 }

 if ( VAR_3 == 'a' - 'a' + 1 ) {
  VAR_2->cursor = 0;
  VAR_2->scroll = 0;
  return;
 }

 if ( VAR_3 == 'e' - 'a' + 1 ) {
  VAR_2->cursor = VAR_4;
  VAR_2->scroll = VAR_2->cursor - VAR_2->widthInChars;
  return;
 }




 if ( VAR_3 < 32 ) {
  return;
 }

 if ( VAR_1 ) {
  if ( VAR_2->cursor == VAR_0 - 1 )
   return;
  VAR_2->buffer[VAR_2->cursor] = VAR_3;
  VAR_2->cursor++;
 } else {
  if ( VAR_4 == VAR_0 - 1 ) {
   return;
  }
  FUNC_2( VAR_2->buffer + VAR_2->cursor + 1,
   VAR_2->buffer + VAR_2->cursor, VAR_4 + 1 - VAR_2->cursor );
  VAR_2->buffer[VAR_2->cursor] = VAR_3;
  VAR_2->cursor++;
 }


 if ( VAR_2->cursor >= VAR_2->widthInChars ) {
  VAR_2->scroll++;
 }

 if ( VAR_2->cursor == VAR_4 + 1) {
  VAR_2->buffer[VAR_2->cursor] = 0;
 }
}
