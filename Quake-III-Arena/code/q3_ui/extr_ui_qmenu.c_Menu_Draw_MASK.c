
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int menutext_s ;
typedef int menuslider_s ;
typedef int menuradiobutton_s ;
typedef int menulist_s ;
struct TYPE_8__ {int nitems; scalar_t__* items; } ;
typedef TYPE_1__ menuframework_s ;
typedef int menufield_s ;
struct TYPE_9__ {int flags; int type; int left; int top; int right; int bottom; int (* statusbar ) (void*) ;int (* ownerdraw ) (TYPE_2__*) ;} ;
typedef TYPE_2__ menucommon_s ;
typedef int menubitmap_s ;
typedef int menuaction_s ;
struct TYPE_10__ {scalar_t__ debug; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_15 (char*,int) ;

void FUNC_16( menuframework_s *VAR_6 )
{
 int VAR_7;
 menucommon_s *VAR_8;


 for (VAR_7=0; VAR_7<VAR_6->nitems; VAR_7++)
 {
  VAR_8 = (menucommon_s*)VAR_6->items[VAR_7];

  if (VAR_8->flags & VAR_1)
   continue;

  if (VAR_8->ownerdraw)
  {

   VAR_8->ownerdraw( VAR_8 );
  }
  else
  {
   switch (VAR_8->type)
   {
    case 132:
     FUNC_6( (menuradiobutton_s*)VAR_8 );
     break;

    case 134:
     FUNC_3( (menufield_s*)VAR_8 );
     break;

    case 130:
     FUNC_8( (menuslider_s*)VAR_8 );
     break;

    case 129:
     FUNC_9( (menulist_s*)VAR_8 );
     break;

    case 137:
     FUNC_0( (menuaction_s*)VAR_8 );
     break;

    case 136:
     FUNC_2( (menubitmap_s*)VAR_8 );
     break;

    case 128:
     FUNC_10( (menutext_s*)VAR_8 );
     break;

    case 131:
     FUNC_7( (menulist_s*)VAR_8 );
     break;

    case 133:
     FUNC_5( (menutext_s*)VAR_8 );
     break;

    case 135:
     FUNC_1( (menutext_s*)VAR_8 );
     break;

    default:
     FUNC_14( FUNC_15("Menu_Draw: unknown type %d", VAR_8->type) );
   }
  }

  if( VAR_5.debug ) {
   int VAR_9;
   int VAR_10;
   int VAR_11;
   int VAR_12;

   if( !( VAR_8->flags & VAR_2 ) ) {
    VAR_9 = VAR_8->left;
    VAR_10 = VAR_8->top;
    VAR_11 = VAR_8->right - VAR_8->left + 1;
    VAR_12 = VAR_8->bottom - VAR_8->top + 1;

    if (VAR_8->flags & VAR_0) {
     FUNC_11(VAR_9, VAR_10, VAR_11, VAR_12, VAR_4 );
    }
    else {
     FUNC_11(VAR_9, VAR_10, VAR_11, VAR_12, VAR_3 );
    }
   }
  }

 }

 VAR_8 = FUNC_4( VAR_6 );
 if ( VAR_8 && VAR_8->statusbar)
  VAR_8->statusbar( ( void * ) VAR_8 );
}
