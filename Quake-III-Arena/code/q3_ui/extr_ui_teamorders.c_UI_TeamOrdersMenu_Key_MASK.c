
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_6__ {int left; int top; int (* callback ) (TYPE_2__*,int ) ;int bottom; int right; } ;
struct TYPE_7__ {int oldvalue; int curvalue; int numitems; TYPE_1__ generic; } ;
typedef TYPE_2__ menulist_s ;
struct TYPE_9__ {int menu; TYPE_2__ list; } ;
struct TYPE_8__ {int cursory; } ;







 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

sfxHandle_t FUNC_4( int VAR_6 ) {
 menulist_s *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = (menulist_s *)FUNC_1( &VAR_4.menu );
 if( VAR_7 != &VAR_4.list ) {
  return FUNC_0( &VAR_4.menu, VAR_6 );
 }

 switch( VAR_6 ) {
  case 129:
   VAR_8 = VAR_7->generic.left;
   VAR_9 = VAR_7->generic.top;
   if( FUNC_2( VAR_8, VAR_9, VAR_7->generic.right - VAR_8, VAR_7->generic.bottom - VAR_9 ) ) {
    VAR_10 = (VAR_5.cursory - VAR_9) / VAR_0;
    VAR_7->oldvalue = VAR_7->curvalue;
    VAR_7->curvalue = VAR_10;

    if( VAR_7->generic.callback ) {
     VAR_7->generic.callback( VAR_7, VAR_1 );
     return VAR_2;
    }
   }
   return VAR_3;

  case 130:
  case 128:
   VAR_7->oldvalue = VAR_7->curvalue;

   if( VAR_7->curvalue == 0 ) {
    VAR_7->curvalue = VAR_7->numitems - 1;
   }
   else {
    VAR_7->curvalue--;
   }
   return VAR_2;

  case 131:
  case 132:
   VAR_7->oldvalue = VAR_7->curvalue;

   if( VAR_7->curvalue == VAR_7->numitems - 1 ) {
    VAR_7->curvalue = 0;;
   }
   else {
    VAR_7->curvalue++;
   }
   return VAR_2;
 }

 return FUNC_0( &VAR_4.menu, VAR_6 );
}
