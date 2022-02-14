
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int *,int const,int ,int,unsigned int,char*) ;
 int FUNC_4 (char*,int,int ,int const,int,int ,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(png_modifier* const VAR_5, png_byte const VAR_6,
    int VAR_7, int const VAR_8)
{
   for (; VAR_7 <= VAR_8; ++VAR_7)
   {
      int VAR_9;

      for (VAR_9 = VAR_2;
           VAR_9 < VAR_1; ++VAR_9)
      {
         unsigned int VAR_10;
         char VAR_11[VAR_0];

         FUNC_4(VAR_11, sizeof VAR_11, 0, VAR_6, 1<<VAR_7, 0,
            VAR_9, 0, 0, VAR_3);

         for (VAR_10=0; VAR_10<FUNC_0(VAR_4); ++VAR_10)
         {
            FUNC_3(&VAR_5->this, VAR_6, FUNC_1(VAR_7), VAR_9,
               VAR_10, VAR_11);

            if (FUNC_2(VAR_5))
               return 0;
         }
      }
   }

   return 1;
}
