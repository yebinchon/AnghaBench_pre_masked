
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int menu_entry_t ;
struct TYPE_5__ {float content_height; scalar_t__ scroll_y; scalar_t__ nav_bar_layout_height; } ;
typedef TYPE_1__ materialui_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int *,size_t,int ) ;

__attribute__((used)) static int FUNC_2(
      materialui_handle_t *VAR_3, menu_entry_t *VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
      size_t VAR_8, bool VAR_9)
{


   if (VAR_7 < (VAR_5 >> 1))
      return FUNC_1(
            VAR_3, VAR_4, VAR_8,
            VAR_9 ? VAR_1 : VAR_0);



   else
   {
      float VAR_10 = VAR_3->content_height * 0.1f;
      float VAR_11 = (int)VAR_5 - (int)VAR_6 - (int)VAR_3->nav_bar_layout_height;
      float VAR_12 = (VAR_11 > VAR_10) ?
            VAR_11 : VAR_10;

      FUNC_0(
            VAR_3,
            VAR_3->scroll_y + (VAR_9 ? (VAR_12 * -1.0f) : VAR_12),
            VAR_2);
   }

   return 0;
}
