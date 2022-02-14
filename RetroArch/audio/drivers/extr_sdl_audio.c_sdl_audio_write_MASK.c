
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {int buffer; int lock; int cond; scalar_t__ nonblock; } ;
typedef TYPE_1__ sdl_audio_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   ssize_t VAR_3 = 0;
   sdl_audio_t *VAR_4 = (sdl_audio_t*)VAR_0;

   if (VAR_4->nonblock)
   {
      size_t VAR_5, VAR_6;

      FUNC_0();
      VAR_5 = FUNC_3(VAR_4->buffer);
      VAR_6 = VAR_5 > VAR_2 ? VAR_2 : VAR_5;
      FUNC_2(VAR_4->buffer, VAR_1, VAR_6);
      FUNC_1();
      VAR_3 = VAR_6;
   }
   else
   {
      size_t VAR_7 = 0;

      while (VAR_7 < VAR_2)
      {
         size_t VAR_8;

         FUNC_0();
         VAR_8 = FUNC_3(VAR_4->buffer);

         if (VAR_8 == 0)
         {
            FUNC_1();





         }
         else
         {
            size_t VAR_9 = VAR_2 - VAR_7 > VAR_8 ? VAR_8 : VAR_2 - VAR_7;
            FUNC_2(VAR_4->buffer, (const char*)VAR_1 + VAR_7, VAR_9);
            FUNC_1();
            VAR_7 += VAR_9;
         }
      }
      VAR_3 = VAR_7;
   }

   return VAR_3;
}
