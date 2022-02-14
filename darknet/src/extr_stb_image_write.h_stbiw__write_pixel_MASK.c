
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 int FUNC_0 (TYPE_1__*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(stbi__write_context *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, unsigned char *VAR_5)
{
   unsigned char VAR_6[3] = { 255, 0, 255}, VAR_7[3];
   int VAR_8;

   if (VAR_3 < 0)
      VAR_0->func(VAR_0->context, &VAR_5[VAR_2 - 1], 1);

   switch (VAR_2) {
      case 2:
      case 1:
         if (VAR_4)
            FUNC_0(VAR_0, VAR_5[0], VAR_5[0], VAR_5[0]);
         else
            VAR_0->func(VAR_0->context, VAR_5, 1);
         break;
      case 4:
         if (!VAR_3) {

            for (VAR_8 = 0; VAR_8 < 3; ++VAR_8)
               VAR_7[VAR_8] = VAR_6[VAR_8] + ((VAR_5[VAR_8] - VAR_6[VAR_8]) * VAR_5[3]) / 255;
            FUNC_0(VAR_0, VAR_7[1 - VAR_1], VAR_7[1], VAR_7[1 + VAR_1]);
            break;
         }

      case 3:
         FUNC_0(VAR_0, VAR_5[1 - VAR_1], VAR_5[1], VAR_5[1 + VAR_1]);
         break;
   }
   if (VAR_3 > 0)
      VAR_0->func(VAR_0->context, &VAR_5[VAR_2 - 1], 1);
}
