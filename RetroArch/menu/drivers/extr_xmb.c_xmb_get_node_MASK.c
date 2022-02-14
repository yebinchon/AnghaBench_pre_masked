
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmb_node_t ;
struct TYPE_5__ {unsigned int system_tab_end; int main_menu_node; int add_tab_node; int netplay_tab_node; int favorites_tab_node; int history_tab_node; int video_tab_node; int music_tab_node; int images_tab_node; int settings_tab_node; } ;
typedef TYPE_1__ xmb_handle_t ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int * FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static xmb_node_t* FUNC_2(xmb_handle_t *VAR_0, unsigned VAR_1)
{
   switch (FUNC_0(VAR_0, VAR_1))
   {
      case 129:
         return &VAR_0->settings_tab_node;




      case 131:
         return &VAR_0->music_tab_node;




      case 133:
         return &VAR_0->history_tab_node;
      case 134:
         return &VAR_0->favorites_tab_node;




      case 135:
         return &VAR_0->add_tab_node;
      default:
         if (VAR_1 > VAR_0->system_tab_end)
            return FUNC_1(
                  VAR_0, VAR_1 - (VAR_0->system_tab_end + 1));
   }

   return &VAR_0->main_menu_node;
}
