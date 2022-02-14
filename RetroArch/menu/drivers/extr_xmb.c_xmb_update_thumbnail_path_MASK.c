
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thumbnail_path_data; } ;
typedef TYPE_1__ xmb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, unsigned VAR_3, char VAR_4)
{
   xmb_handle_t *VAR_5 = (xmb_handle_t*)VAR_2;
   const char *VAR_6 = ((void*)0);

   if (!VAR_5)
      return;


   FUNC_0(VAR_5->thumbnail_path_data, &VAR_6);
   if (FUNC_3(VAR_6, "imageviewer"))
   {
      if ((VAR_4 == 'R') || (VAR_4 == 'L' && !FUNC_1(VAR_5->thumbnail_path_data, VAR_1)))
         FUNC_2(VAR_5->thumbnail_path_data, VAR_4 == 'R' ? VAR_1 : VAR_0);
   }
   else
      FUNC_2(VAR_5->thumbnail_path_data, VAR_4 == 'R' ? VAR_1 : VAR_0);
}
