
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int menutext_s ;
typedef int menuslider_s ;
typedef int menuradiobutton_s ;
typedef int menulist_s ;
struct TYPE_4__ {size_t nitems; void** items; } ;
typedef TYPE_1__ menuframework_s ;
typedef int menufield_s ;
struct TYPE_5__ {size_t menuPosition; int flags; int type; TYPE_1__* parent; } ;
typedef TYPE_2__ menucommon_s ;
typedef int menubitmap_s ;
typedef int menuaction_s ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,int) ;

void FUNC_12( menuframework_s *VAR_3, void *VAR_4 )
{
 menucommon_s *VAR_5;

 if (VAR_3->nitems >= VAR_0)
  FUNC_10 ("Menu_AddItem: excessive items");

 VAR_3->items[VAR_3->nitems] = VAR_4;
 ((menucommon_s*)VAR_3->items[VAR_3->nitems])->parent = VAR_3;
 ((menucommon_s*)VAR_3->items[VAR_3->nitems])->menuPosition = VAR_3->nitems;
 ((menucommon_s*)VAR_3->items[VAR_3->nitems])->flags &= ~VAR_1;


 VAR_5 = (menucommon_s*)VAR_4;
 if (!(VAR_5->flags & VAR_2))
 {
  switch (VAR_5->type)
  {
   case 137:
    FUNC_0((menuaction_s*)VAR_4);
    break;

   case 134:
    FUNC_3((menufield_s*)VAR_4);
    break;

   case 129:
    FUNC_8((menulist_s*)VAR_4);
    break;

   case 132:
    FUNC_5((menuradiobutton_s*)VAR_4);
    break;

   case 130:
    FUNC_7((menuslider_s*)VAR_4);
    break;

   case 136:
    FUNC_2((menubitmap_s*)VAR_4);
    break;

   case 128:
    FUNC_9((menutext_s*)VAR_4);
    break;

   case 131:
    FUNC_6((menulist_s*)VAR_4);
    break;

   case 133:
    FUNC_4((menutext_s*)VAR_4);
    break;

   case 135:
    FUNC_1((menutext_s*)VAR_4);
    break;

   default:
    FUNC_10( FUNC_11("Menu_Init: unknown type %d", VAR_5->type) );
  }
 }

 VAR_3->nitems++;
}
