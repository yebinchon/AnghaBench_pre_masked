
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor; int scroll; int widthInChars; scalar_t__ buffer; } ;
typedef TYPE_1__ field_t ;
struct TYPE_6__ {scalar_t__ down; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 char FUNC_3 (int) ;

void FUNC_4( field_t *VAR_11, int VAR_12 ) {
 int VAR_13;


 if ( ( ( VAR_12 == VAR_4 ) || ( VAR_12 == VAR_5 ) ) && VAR_10[VAR_8].down ) {
  FUNC_0( VAR_11 );
  return;
 }

 VAR_13 = FUNC_2( VAR_11->buffer );

 if ( VAR_12 == VAR_1 ) {
  if ( VAR_11->cursor < VAR_13 ) {
   FUNC_1( VAR_11->buffer + VAR_11->cursor,
    VAR_11->buffer + VAR_11->cursor + 1, VAR_13 - VAR_11->cursor );
  }
  return;
 }

 if ( VAR_12 == VAR_7 )
 {
  if ( VAR_11->cursor < VAR_13 ) {
   VAR_11->cursor++;
  }

  if ( VAR_11->cursor >= VAR_11->scroll + VAR_11->widthInChars && VAR_11->cursor <= VAR_13 )
  {
   VAR_11->scroll++;
  }
  return;
 }

 if ( VAR_12 == VAR_6 )
 {
  if ( VAR_11->cursor > 0 ) {
   VAR_11->cursor--;
  }
  if ( VAR_11->cursor < VAR_11->scroll )
  {
   VAR_11->scroll--;
  }
  return;
 }

 if ( VAR_12 == VAR_3 || ( FUNC_3(VAR_12) == 'a' && VAR_10[VAR_0].down ) ) {
  VAR_11->cursor = 0;
  return;
 }

 if ( VAR_12 == VAR_2 || ( FUNC_3(VAR_12) == 'e' && VAR_10[VAR_0].down ) ) {
  VAR_11->cursor = VAR_13;
  return;
 }

 if ( VAR_12 == VAR_4 ) {
  VAR_9 = !VAR_9;
  return;
 }
}
