
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* audio_device; } ;
struct TYPE_5__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_4(char **VAR_0, const char **VAR_1)
{
   int VAR_2;
   char *VAR_3 = ((void*)0);
   int VAR_4 = 0;
   settings_t *VAR_5 = FUNC_0();
   char *VAR_6 = FUNC_2(VAR_5->arrays.audio_device);
   const char *VAR_7 = FUNC_3(VAR_6, ",", &VAR_3);

   if (VAR_7)
      VAR_0[VAR_4++] = FUNC_2(VAR_7);
   VAR_7 = FUNC_3(((void*)0), ",", &VAR_3);
   if (VAR_7)
      VAR_0[VAR_4++] = FUNC_2(VAR_7);

   for (VAR_2 = VAR_4; VAR_2 < 2; VAR_2++)
      VAR_0[VAR_2] = FUNC_2(VAR_1[VAR_2]);

   FUNC_1(VAR_6);
   return 2;
}
