
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_4__ {int* bits; } ;
typedef TYPE_1__ format_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(format_list *VAR_6, int VAR_7)
{
   if (VAR_7)
   {
      int VAR_8;


      for (VAR_8=0; VAR_8<VAR_1; ++VAR_8)
         VAR_6->bits[VAR_8] = ~(png_uint_32)0;
   }

   else
   {
      png_uint_32 VAR_9;

      for (VAR_9=0; VAR_9<VAR_0; ++VAR_9)
      {






            if ((VAR_9 & 0x10U ) != 0)

            continue;






            if ((VAR_9 & 0x20U ) != 0)

            continue;

         FUNC_0(VAR_6, VAR_9);
      }
   }
}
