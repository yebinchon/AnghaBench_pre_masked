
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; int scroll; int widthInChars; scalar_t__ buffer; } ;
typedef TYPE_1__ mfield_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 char FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

void FUNC_7( mfield_t *VAR_14, int VAR_15 ) {
 int VAR_16;


 if ( ( ( VAR_15 == VAR_4 ) || ( VAR_15 == VAR_8 ) ) && FUNC_5( VAR_13 ) ) {
  FUNC_0( VAR_14 );
  return;
 }

 VAR_16 = FUNC_2( VAR_14->buffer );

 if ( VAR_15 == VAR_1 || VAR_15 == VAR_5 ) {
  if ( VAR_14->cursor < VAR_16 ) {
   FUNC_1( VAR_14->buffer + VAR_14->cursor,
    VAR_14->buffer + VAR_14->cursor + 1, VAR_16 - VAR_14->cursor );
  }
  return;
 }

 if ( VAR_15 == VAR_12 || VAR_15 == VAR_10 )
 {
  if ( VAR_14->cursor < VAR_16 ) {
   VAR_14->cursor++;
  }
  if ( VAR_14->cursor >= VAR_14->scroll + VAR_14->widthInChars && VAR_14->cursor <= VAR_16 )
  {
   VAR_14->scroll++;
  }
  return;
 }

 if ( VAR_15 == VAR_11 || VAR_15 == VAR_9 )
 {
  if ( VAR_14->cursor > 0 ) {
   VAR_14->cursor--;
  }
  if ( VAR_14->cursor < VAR_14->scroll )
  {
   VAR_14->scroll--;
  }
  return;
 }

 if ( VAR_15 == VAR_3 || VAR_15 == VAR_7 || ( FUNC_3(VAR_15) == 'a' && FUNC_5( VAR_0 ) ) ) {
  VAR_14->cursor = 0;
  VAR_14->scroll = 0;
  return;
 }

 if ( VAR_15 == VAR_2 || VAR_15 == VAR_6 || ( FUNC_3(VAR_15) == 'e' && FUNC_5( VAR_0 ) ) ) {
  VAR_14->cursor = VAR_16;
  VAR_14->scroll = VAR_16 - VAR_14->widthInChars + 1;
  if (VAR_14->scroll < 0)
   VAR_14->scroll = 0;
  return;
 }

 if ( VAR_15 == VAR_4 || VAR_15 == VAR_8 ) {
  FUNC_6( !FUNC_4() );
  return;
 }
}
