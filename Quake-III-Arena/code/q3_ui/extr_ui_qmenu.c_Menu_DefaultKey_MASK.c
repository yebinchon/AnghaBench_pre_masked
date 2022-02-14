
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
typedef int menuslider_s ;
typedef int menuradiobutton_s ;
typedef int menulist_s ;
struct TYPE_11__ {int cursor; int cursor_prev; int nitems; } ;
typedef TYPE_1__ menuframework_s ;
typedef int menufield_s ;
struct TYPE_12__ {int flags; int type; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_13__ {int debug; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ,char*) ;
 TYPE_3__ VAR_7 ;

sfxHandle_t FUNC_11( menuframework_s *VAR_8, int VAR_9 )
{
 sfxHandle_t VAR_10 = 0;
 menucommon_s *VAR_11;
 int VAR_12;


 switch ( VAR_9 )
 {
  case 136:
  case 147:
   FUNC_9();
   return VAR_6;
 }

 if (!VAR_8 || !VAR_8->nitems)
  return 0;


 VAR_11 = FUNC_4( VAR_8 );
 if (VAR_11 && !(VAR_11->flags & (VAR_1|VAR_3)))
 {
  switch (VAR_11->type)
  {
   case 128:
    VAR_10 = FUNC_8( (menulist_s*)VAR_11, VAR_9 );
    break;

   case 131:
    VAR_10 = FUNC_5( (menuradiobutton_s*)VAR_11, VAR_9 );
    break;

   case 129:
    VAR_10 = FUNC_7( (menuslider_s*)VAR_11, VAR_9 );
    break;

   case 130:
    VAR_10 = FUNC_6( (menulist_s*)VAR_11, VAR_9 );
    break;

   case 132:
    VAR_10 = FUNC_0( (menufield_s*)VAR_11, &VAR_9 );
    break;
  }

  if (VAR_10) {

   return VAR_10;
  }
 }


 switch ( VAR_9 )
 {

  case 146:
   VAR_7.debug ^= 1;
   break;

  case 145:
   FUNC_10(VAR_0, "screenshot\n");
   break;

  case 138:
  case 133:
   VAR_12 = VAR_8->cursor;
   VAR_8->cursor_prev = VAR_8->cursor;
   VAR_8->cursor--;
   FUNC_2( VAR_8, -1 );
   if ( VAR_12 != VAR_8->cursor ) {
    FUNC_3( VAR_8 );
    VAR_10 = VAR_5;
   }
   break;

  case 134:
  case 140:
  case 149:
   VAR_12 = VAR_8->cursor;
   VAR_8->cursor_prev = VAR_8->cursor;
   VAR_8->cursor++;
   FUNC_2( VAR_8, 1 );
   if ( VAR_12 != VAR_8->cursor ) {
    FUNC_3( VAR_8 );
    VAR_10 = VAR_5;
   }
   break;

  case 137:
  case 135:
   if (VAR_11)
    if ((VAR_11->flags & VAR_2) && !(VAR_11->flags & (VAR_1|VAR_3)))
     return (FUNC_1( VAR_8, VAR_11 ));
   break;

  case 144:
  case 143:
  case 142:
  case 141:
  case 165:
  case 157:
  case 156:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 150:
  case 164:
  case 163:
  case 162:
  case 161:
  case 160:
  case 159:
  case 158:
  case 139:
  case 148:
   if (VAR_11)
    if (!(VAR_11->flags & (VAR_4|VAR_1|VAR_3)))
     return (FUNC_1( VAR_8, VAR_11 ));
   break;
 }

 return VAR_10;
}
