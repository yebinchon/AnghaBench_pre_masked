
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_quick_menu; int thumbnail_path_data; scalar_t__ is_playlist; scalar_t__ categories_selection_ptr; } ;
typedef TYPE_1__ xmb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, unsigned VAR_5)
{
   xmb_handle_t *VAR_6 = (xmb_handle_t*)VAR_4;

   if (!VAR_6)
      return;


   if ( FUNC_0(VAR_6->thumbnail_path_data, VAR_2) ||
         FUNC_0(VAR_6->thumbnail_path_data, VAR_1))
   {
      unsigned VAR_7 = (unsigned)FUNC_2(VAR_6, VAR_0);
      unsigned VAR_8 = FUNC_1(VAR_6, (unsigned)VAR_6->categories_selection_ptr);
      if (((VAR_8 > VAR_3 && VAR_7 == 1) ||
           (VAR_8 < VAR_3 && VAR_7 == 4)) &&
          VAR_6->is_playlist)
      {
         if (FUNC_0(VAR_6->thumbnail_path_data, VAR_2))
            FUNC_4(VAR_6, 0 , 'R');

         if (FUNC_0(VAR_6->thumbnail_path_data, VAR_1))
            FUNC_4(VAR_6, 0 , 'L');

         FUNC_3(VAR_6);
      }
      else if (VAR_6->is_quick_menu)
      {




         FUNC_3(VAR_6);
      }
   }
}
