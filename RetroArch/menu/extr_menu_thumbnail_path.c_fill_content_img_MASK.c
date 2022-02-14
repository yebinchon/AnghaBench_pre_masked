
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int content_img; int content_label; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(menu_thumbnail_path_data_t *VAR_0)
{
   char *VAR_1 = ((void*)0);


   FUNC_1(VAR_0->content_img,
         VAR_0->content_label, sizeof(VAR_0->content_img));





   while((VAR_1 = FUNC_2(VAR_0->content_img, "&*/:`\"<>?\\|")))
      *VAR_1 = '_';


   FUNC_0(VAR_0->content_img, ".png", sizeof(VAR_0->content_img));
}
