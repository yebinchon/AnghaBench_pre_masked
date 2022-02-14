
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ menu_texture_item ;
typedef int badge_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*,scalar_t__*,int ,int *,int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4(menu_texture_item *VAR_3, const char *VAR_4)
{
   char VAR_5[16];
   char VAR_6[VAR_1];

   if (!VAR_4)
   {
      *VAR_3 = 0;
      return;
   }

   FUNC_3(VAR_5, VAR_4, sizeof(VAR_5));
   FUNC_2(VAR_5, ".png", sizeof(VAR_5));
   FUNC_0(VAR_6,
         VAR_1 * sizeof(char),
         VAR_0);

   FUNC_1(VAR_5, VAR_6,
         VAR_3, VAR_2, ((void*)0), ((void*)0));
}
