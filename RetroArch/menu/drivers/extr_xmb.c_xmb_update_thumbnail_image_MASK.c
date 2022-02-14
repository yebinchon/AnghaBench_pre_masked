
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thumbnail_path_data; int left_thumbnail; int thumbnail; } ;
typedef TYPE_3__ xmb_handle_t ;
struct TYPE_7__ {scalar_t__ network_on_demand_thumbnails; } ;
struct TYPE_6__ {int menu_thumbnail_upscale_threshold; } ;
struct TYPE_9__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,char const**) ;
 scalar_t__ FUNC_3 (int ,char const**) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int,int ,int ,int *) ;
 int FUNC_7 (char const*,int ,unsigned int,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_4)
{
   settings_t *VAR_5 = FUNC_0();
   xmb_handle_t *VAR_6 = (xmb_handle_t*)VAR_4;
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   bool VAR_9 = FUNC_8();
   if (!VAR_6 || !VAR_5)
      return;

   if (FUNC_2(VAR_6->thumbnail_path_data, VAR_1, &VAR_7))
   {
      if (FUNC_4(VAR_7))
         FUNC_6(VAR_7,
               VAR_9, VAR_5->uints.menu_thumbnail_upscale_threshold,
               VAR_3, ((void*)0));
      else
      {
         FUNC_9(&VAR_6->thumbnail);



      }
   }
   else
      FUNC_9(&VAR_6->thumbnail);

   if (FUNC_2(VAR_6->thumbnail_path_data, VAR_0, &VAR_8))
   {
      if (FUNC_4(VAR_8))
         FUNC_6(VAR_8,
               VAR_9, VAR_5->uints.menu_thumbnail_upscale_threshold,
               VAR_2, ((void*)0));
      else
      {
         FUNC_9(&VAR_6->left_thumbnail);



      }
   }
   else
      FUNC_9(&VAR_6->left_thumbnail);
}
