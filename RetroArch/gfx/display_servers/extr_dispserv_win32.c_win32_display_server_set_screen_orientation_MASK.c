
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum rotation { ____Placeholder_rotation } rotation ;
typedef int dm ;
struct TYPE_4__ {int dmPelsWidth; int dmPelsHeight; int dmDisplayOrientation; int member_0; } ;
typedef TYPE_1__ DEVMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

void FUNC_2(enum rotation VAR_4)
{
   DEVMODE VAR_5 = {0};

   FUNC_1(&VAR_5, -1, sizeof(VAR_5));

   switch (VAR_4)
   {
      case 129:
      default:
      {
         int VAR_6 = VAR_5.dmPelsWidth;

         if ((VAR_5.dmDisplayOrientation == VAR_2 || VAR_5.dmDisplayOrientation == VAR_1) && VAR_6 != VAR_5.dmPelsHeight)
         {

            VAR_5.dmPelsWidth = VAR_5.dmPelsHeight;
            VAR_5.dmPelsHeight = VAR_6;
         }

         VAR_5.dmDisplayOrientation = VAR_3;
         break;
      }
      case 128:
      {
         int VAR_7 = VAR_5.dmPelsWidth;

         if ((VAR_5.dmDisplayOrientation == VAR_3 || VAR_5.dmDisplayOrientation == VAR_0) && VAR_7 != VAR_5.dmPelsHeight)
         {

            VAR_5.dmPelsWidth = VAR_5.dmPelsHeight;
            VAR_5.dmPelsHeight = VAR_7;
         }

         VAR_5.dmDisplayOrientation = VAR_1;
         break;
      }
      case 131:
      {
         int VAR_8 = VAR_5.dmPelsWidth;

         if ((VAR_5.dmDisplayOrientation == VAR_2 || VAR_5.dmDisplayOrientation == VAR_1) && VAR_8 != VAR_5.dmPelsHeight)
         {

            VAR_5.dmPelsWidth = VAR_5.dmPelsHeight;
            VAR_5.dmPelsHeight = VAR_8;
         }

         VAR_5.dmDisplayOrientation = VAR_0;
         break;
      }
      case 130:
      {
         int VAR_9 = VAR_5.dmPelsWidth;

         if ((VAR_5.dmDisplayOrientation == VAR_3 || VAR_5.dmDisplayOrientation == VAR_0) && VAR_9 != VAR_5.dmPelsHeight)
         {

            VAR_5.dmPelsWidth = VAR_5.dmPelsHeight;
            VAR_5.dmPelsHeight = VAR_9;
         }

         VAR_5.dmDisplayOrientation = VAR_2;
         break;
      }
   }

   FUNC_0(((void*)0), &VAR_5, 0);
}
