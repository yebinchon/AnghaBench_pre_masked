
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dispserv_win32_t ;
typedef int devmode ;
typedef int curDevmode ;
struct TYPE_4__ {int dmDisplayFrequency; unsigned int dmPelsWidth; unsigned int dmPelsHeight; int dmBitsPerPel; int dmFields; } ;
typedef int LONG ;
typedef TYPE_1__ DEVMODE ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static bool FUNC_3(void *VAR_10,
      unsigned VAR_11, unsigned VAR_12, int VAR_13, float VAR_14, int VAR_15, int VAR_16, int VAR_17)
{
   DEVMODE VAR_18;
   int VAR_19;
   int VAR_20 = VAR_13;
   int VAR_21 = 0;
   dispserv_win32_t *VAR_22 = (dispserv_win32_t*)VAR_10;

   if (!VAR_22)
      return 0;

   FUNC_2(&VAR_18, -1, sizeof(VAR_18));

   if (VAR_9 == 0)
      VAR_9 = FUNC_0(VAR_5);
   VAR_8 = VAR_18.dmDisplayFrequency;
   if (VAR_7 == 0)
      VAR_7 = FUNC_0(VAR_6);


   if (VAR_11 == VAR_18.dmPelsWidth)
      VAR_11 = 0;
   if (VAR_11 == 0)
      VAR_11 = VAR_18.dmPelsWidth;
   if (VAR_12 == 0)
      VAR_12 = VAR_18.dmPelsHeight;
   if (VAR_21 == 0)
      VAR_21 = VAR_18.dmBitsPerPel;
   if (VAR_20 == 0)
      VAR_20 = VAR_18.dmDisplayFrequency;

   for (VAR_19 = 0;; VAR_19++)
   {
      LONG VAR_23;
      DEVMODE VAR_24;

      if (!FUNC_2(&VAR_24, VAR_19, sizeof(VAR_24)))
         break;

      if (VAR_24.dmPelsWidth != VAR_11)
         continue;

      if (VAR_24.dmPelsHeight != VAR_12)
         continue;

      if (VAR_24.dmBitsPerPel != VAR_21)
         continue;

      if (VAR_24.dmDisplayFrequency != VAR_20)
         continue;

      VAR_24.dmFields |=
            VAR_4 | VAR_3 | VAR_1 | VAR_2;
      VAR_23 =
            FUNC_1(((void*)0), &VAR_24, VAR_0);

      switch (VAR_23)
      {
      case 128:
         VAR_23 = FUNC_1(((void*)0), &VAR_24, 0);
         switch (VAR_23)
         {
            case 128:
               return 1;
            case 130:
               return 1;
            default:
               break;
         }
         break;
      case 129:
         break;
      default:
         break;
      }
   }

   return 1;
}
