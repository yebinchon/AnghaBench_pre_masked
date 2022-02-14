
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dwType; int hDevice; int hnd; int y; int x; } ;
typedef TYPE_1__ winraw_mouse_t ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_1__ RAWINPUTDEVICELIST ;
typedef TYPE_3__ POINT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int,unsigned int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static bool FUNC_8(winraw_mouse_t **VAR_1, unsigned *VAR_2)
{
   UINT VAR_3;
   POINT VAR_4;
   winraw_mouse_t *VAR_5 = ((void*)0);
   unsigned VAR_6 = 0;
   RAWINPUTDEVICELIST *VAR_7 = ((void*)0);
   UINT VAR_8 = 0;
   UINT VAR_9 = FUNC_2(
         ((void*)0), &VAR_8, sizeof(RAWINPUTDEVICELIST));

   if (VAR_9 == (UINT)-1)
   {
      FUNC_3("[WINRAW]: GetRawInputDeviceList failed with error %lu.\n", FUNC_1());
      goto error;
   }

   VAR_7 = (RAWINPUTDEVICELIST*)FUNC_6(VAR_8 * sizeof(RAWINPUTDEVICELIST));
   if (!VAR_7)
      goto error;

   VAR_8 = FUNC_2(VAR_7, &VAR_8, sizeof(RAWINPUTDEVICELIST));
   if (VAR_8 == (UINT)-1)
   {
      FUNC_3("[WINRAW]: GetRawInputDeviceList failed with error %lu.\n", FUNC_1());
      goto error;
   }

   for (VAR_3 = 0; VAR_3 < VAR_8; ++VAR_3)
      VAR_6 += VAR_7[VAR_3].dwType == VAR_0 ? 1 : 0;

   if (VAR_6)
   {
      VAR_5 = (winraw_mouse_t*)FUNC_4(1, VAR_6 * sizeof(winraw_mouse_t));
      if (!VAR_5)
         goto error;

      if (!FUNC_0(&VAR_4))
         goto error;

      for (VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3)
      {
         VAR_5[VAR_3].x = VAR_4.x;
         VAR_5[VAR_3].y = VAR_4.y;
      }
   }


   for (VAR_3 = VAR_6 = 0; VAR_3 < VAR_8; ++VAR_3)
   {
      if (VAR_7[VAR_3].dwType == VAR_0)
         VAR_5[VAR_6++].hnd = VAR_7[VAR_3].hDevice;
   }

   FUNC_7(VAR_5, VAR_6);
   FUNC_5(VAR_7);

   *VAR_1 = VAR_5;
   *VAR_2 = VAR_6;

   return 1;

error:
   FUNC_5(VAR_7);
   FUNC_5(VAR_5);
   *VAR_1 = ((void*)0);
   *VAR_2 = 0;
   return 0;
}
