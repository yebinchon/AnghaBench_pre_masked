
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_2__ {int key; scalar_t__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;

void FUNC_2(enum retro_key VAR_3, char *VAR_4, size_t VAR_5)
{
   unsigned VAR_6;

   FUNC_0(VAR_5 >= 2);
   *VAR_4 = '\0';

   if (VAR_3 >= VAR_0 && VAR_3 <= VAR_1)
   {
      VAR_4[0] = (VAR_3 - VAR_0) + 'a';
      VAR_4[1] = '\0';
      return;
   }

   for (VAR_6 = 0; VAR_2[VAR_6].str; VAR_6++)
   {
      if (VAR_2[VAR_6].key != VAR_3)
         continue;

      FUNC_1(VAR_4, VAR_2[VAR_6].str, VAR_5);
      break;
   }
}
