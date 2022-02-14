
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float margins_screen_top; float icon_size; } ;
typedef TYPE_1__ xmb_handle_t ;


 float FUNC_0 (TYPE_1__ const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(const xmb_handle_t *VAR_0,
      unsigned VAR_1, size_t VAR_2, unsigned VAR_3,
      unsigned *VAR_4, unsigned *VAR_5)
{
   unsigned VAR_6;
   float VAR_7 = VAR_0->margins_screen_top;

   *VAR_4 = 0;
   *VAR_5 = (unsigned)(VAR_2 ? VAR_2 - 1 : 0);

   if (VAR_3)
   {
      for (VAR_6 = VAR_3; VAR_6-- > 0; )
      {
         float VAR_8 = FUNC_0(VAR_0, VAR_6, VAR_3)
            + VAR_7 + VAR_0->icon_size;

         if (VAR_8 < 0)
            break;

         *VAR_4 = VAR_6;
      }
   }

   for (VAR_6 = VAR_3+1; VAR_6 < VAR_2; VAR_6++)
   {
      float VAR_9 = FUNC_0(VAR_0, VAR_6, VAR_3) + VAR_7;

      if (VAR_9 > VAR_1)
         break;

      *VAR_5 = VAR_6;
   }
}
