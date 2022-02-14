
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pixel_t ;
struct TYPE_3__ {int type; char* message; } ;
typedef TYPE_1__ OSDMessage_struct ;



 int FUNC_0 (int *,int,int,int,int) ;
 char** VAR_0 ;

void FUNC_1(OSDMessage_struct * VAR_1, pixel_t * VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5;
   char * VAR_6;
   int VAR_7 = 0;

   if (VAR_2 == ((void*)0)) return;

   switch (VAR_1->type)
   {
      case 128:
         VAR_7 = VAR_4 - 48;
         break;
   }

   VAR_6 = VAR_1->message;
   VAR_5 = 0;
   while(*VAR_6)
   {
      if (*VAR_6 >= 47)
      {
         int VAR_8, VAR_9, VAR_10;
         VAR_8 = *VAR_6 * 10;
         for(VAR_9 = 0;VAR_9 < 10;VAR_9++)
         {
            for(VAR_10 = 0;VAR_10 < 9;VAR_10++)
            {
               if (VAR_0[VAR_8 + VAR_9][VAR_10] == '.')
                  FUNC_0(VAR_2, VAR_3, (VAR_5 * 8) + 20 + VAR_10, VAR_7 + VAR_9 + 20, 0xFF000000);
               else if (VAR_0[VAR_8 + VAR_9][VAR_10] == '#')
                  FUNC_0(VAR_2, VAR_3, (VAR_5 * 8) + 20 + VAR_10, VAR_7 + VAR_9 + 20, 0xFFFFFFFF);
            }
         }
      }
      VAR_6++;
      VAR_5++;
   }
}
