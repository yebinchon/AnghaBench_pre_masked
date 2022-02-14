
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_4__ {int use_update_info; int this; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int ,int ,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int *,int ,int,int ) ;

__attribute__((used)) static int
FUNC_4(png_modifier* const VAR_2, png_byte const VAR_3,
    int VAR_4, int const VAR_5)
{







   static const png_byte VAR_6[] = {1, 3, 11, 1, 5};
   static const png_byte VAR_7[] = {1, 9, 5, 7, 1};
   const int VAR_8 = VAR_4;

   for (; VAR_4 <= VAR_5; ++VAR_4)
   {
      png_uint_32 VAR_9, VAR_10;

      for (VAR_9=1; VAR_9<=16; VAR_9+=VAR_6[VAR_4]) for (VAR_10=1; VAR_10<=16; VAR_10+=VAR_7[VAR_4])
      {





         FUNC_3(&VAR_2->this, FUNC_1(VAR_3, FUNC_0(VAR_4), 0 ,
            VAR_1, VAR_10, VAR_9, 0), 0 ,
            VAR_2->use_update_info);

         if (FUNC_2(VAR_2))
            return 0;

         FUNC_3(&VAR_2->this, FUNC_1(VAR_3, FUNC_0(VAR_4), 0 ,
            VAR_1, VAR_10, VAR_9, 1), 0 ,
            VAR_2->use_update_info);

         if (FUNC_2(VAR_2))
            return 0;





         FUNC_3(&VAR_2->this, FUNC_1(VAR_3, FUNC_0(VAR_4), 0 ,
            VAR_1, VAR_10, VAR_9, 0), 1 ,
            VAR_2->use_update_info);

         if (FUNC_2(VAR_2))
            return 0;
      }
   }




   for (VAR_4 = VAR_8; VAR_4 <= VAR_5; ++VAR_4)
   {
      png_uint_32 VAR_11, VAR_12;

      for (VAR_11=1; VAR_11<=16; VAR_11+=VAR_6[VAR_4]) for (VAR_12=1; VAR_12<=16; VAR_12+=VAR_7[VAR_4])
      {
      }
   }

   return 1;
}
