
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kiosk_mode_enable; } ;
struct TYPE_5__ {int kiosk_mode_password; } ;
struct TYPE_7__ {TYPE_2__ bools; TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int,int *,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_4,
      const char *VAR_5)
{
   if (VAR_5 && *VAR_5)
   {
      const char *VAR_6 = FUNC_2();
      settings_t *VAR_7 = FUNC_0();

      if (FUNC_5(VAR_6, VAR_7->paths.kiosk_mode_password))
      {
         VAR_7->bools.kiosk_mode_enable = 0;

         FUNC_4(
            FUNC_3(VAR_3),
            1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
      }
      else
      {
         FUNC_4(
            FUNC_3(VAR_2),
            1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
      }
   }

   FUNC_1();
}
