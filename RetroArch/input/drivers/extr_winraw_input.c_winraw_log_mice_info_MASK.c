
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hnd; } ;
typedef TYPE_1__ winraw_mouse_t ;
typedef int name ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (int ,int ,char*,scalar_t__*) ;
 int FUNC_1 (char*,unsigned int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(winraw_mouse_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;
   char VAR_4[256];
   UINT VAR_5 = sizeof(VAR_4);

   VAR_4[0] = '\0';

   for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   {
      UINT VAR_6 = FUNC_0(VAR_1[VAR_3].hnd, VAR_0,
            VAR_4, &VAR_5);
      if (VAR_6 == (UINT)-1 || VAR_6 == 0)
         VAR_4[0] = '\0';
      FUNC_1("[WINRAW]: Mouse #%u %s.\n", VAR_3, VAR_4);
   }
}
