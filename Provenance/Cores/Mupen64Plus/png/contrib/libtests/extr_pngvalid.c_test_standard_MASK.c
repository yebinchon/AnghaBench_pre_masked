
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int use_update_info; int this; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int ,int ,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(png_modifier* const VAR_3, png_byte const VAR_4,
    int VAR_5, int const VAR_6)
{
   for (; VAR_5 <= VAR_6; ++VAR_5)
   {
      int VAR_7;

      for (VAR_7 = VAR_1;
           VAR_7 < VAR_0; ++VAR_7)
      {
         FUNC_3(&VAR_3->this, FUNC_1(VAR_4, FUNC_0(VAR_5), 0 ,
            VAR_7, 0, 0, 0), VAR_2, VAR_3->use_update_info);

         if (FUNC_2(VAR_3))
            return 0;
      }
   }

   return 1;
}
