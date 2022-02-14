
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ssize_t ;
struct TYPE_2__ {int lock; int cond; scalar_t__ nonblock; int buffer; } ;
typedef TYPE_1__ coreaudio_t ;


 int FUNC_0 (int ,int const*,size_t) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
   coreaudio_t *VAR_4 = (coreaudio_t*)VAR_1;
   const uint8_t *VAR_5 = (const uint8_t*)VAR_2;
   size_t VAR_6 = 0;

   while (!VAR_0 && VAR_3 > 0)
   {
      size_t VAR_7;

      FUNC_4(VAR_4->lock);

      VAR_7 = FUNC_1(VAR_4->buffer);
      if (VAR_7 > VAR_3)
         VAR_7 = VAR_3;

      FUNC_0(VAR_4->buffer, VAR_5, VAR_7);
      VAR_5 += VAR_7;
      VAR_6 += VAR_7;
      VAR_3 -= VAR_7;

      if (VAR_4->nonblock)
      {
         FUNC_5(VAR_4->lock);
         break;
      }






      if (VAR_7 == 0)
         FUNC_2(VAR_4->cond, VAR_4->lock);

      FUNC_5(VAR_4->lock);
   }

   return VAR_6;
}
