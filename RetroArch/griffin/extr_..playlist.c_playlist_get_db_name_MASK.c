
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int conf_path; TYPE_1__* entries; } ;
typedef TYPE_2__ playlist_t ;
struct TYPE_4__ {char const* db_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ) ;

void FUNC_4(playlist_t *VAR_5, size_t VAR_6,
      const char **VAR_7)
{
   if (!VAR_5)
      return;

   if (VAR_7)
   {
      if (!FUNC_2(VAR_5->entries[VAR_6].db_name))
         *VAR_7 = VAR_5->entries[VAR_6].db_name;
      else
      {
         const char *VAR_8 = FUNC_1(VAR_5->conf_path);



         if (!FUNC_2(VAR_8) &&
             !FUNC_3(VAR_8, FUNC_0(VAR_0)) &&
             !FUNC_3(VAR_8, FUNC_0(VAR_1)) &&
             !FUNC_3(VAR_8, FUNC_0(VAR_2)) &&
             !FUNC_3(VAR_8, FUNC_0(VAR_3)) &&
             !FUNC_3(VAR_8, FUNC_0(VAR_4)))
            *VAR_7 = VAR_8;
      }
   }
}
