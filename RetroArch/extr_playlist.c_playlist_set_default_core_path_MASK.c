
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int real_core_path ;
struct TYPE_3__ {char* default_core_path; int modified; } ;
typedef TYPE_1__ playlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*,int) ;

void FUNC_6(playlist_t *VAR_2, const char *VAR_3)
{
   char VAR_4[VAR_0];

   VAR_4[0] = '\0';

   if (!VAR_2 || FUNC_3(VAR_3))
      return;


   FUNC_5(VAR_4, VAR_3, sizeof(VAR_4));
   if (!FUNC_4(VAR_4, "DETECT"))
       FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));

   if (FUNC_3(VAR_4))
      return;

   if (!FUNC_4(VAR_2->default_core_path, VAR_4))
   {
      if (VAR_2->default_core_path)
         FUNC_0(VAR_2->default_core_path);
      VAR_2->default_core_path = FUNC_2(VAR_4);
      VAR_2->modified = 1;
   }
}
