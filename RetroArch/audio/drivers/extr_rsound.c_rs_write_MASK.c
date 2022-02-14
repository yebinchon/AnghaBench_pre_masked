
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int rd; int buffer; int cond_lock; int cond; scalar_t__ has_error; scalar_t__ nonblock; } ;
typedef TYPE_1__ rsd_t ;


 int FUNC_0 (int ,char const*,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   rsd_t *VAR_3 = (rsd_t*)VAR_0;

   if (VAR_3->has_error)
      return -1;

   if (VAR_3->nonblock)
   {
      size_t VAR_4, VAR_5;

      FUNC_2(VAR_3->rd);

      VAR_4 = FUNC_1(VAR_3->buffer);
      VAR_5 = VAR_4 > VAR_2 ? VAR_2 : VAR_4;

      FUNC_0(VAR_3->buffer, VAR_1, VAR_5);
      FUNC_3(VAR_3->rd);
      return VAR_5;
   }
   else
   {
      size_t VAR_6 = 0;
      while (VAR_6 < VAR_2 && !VAR_3->has_error)
      {
         size_t VAR_7;
         FUNC_2(VAR_3->rd);

         VAR_7 = FUNC_1(VAR_3->buffer);

         if (VAR_7 == 0)
         {
            FUNC_3(VAR_3->rd);
            if (!VAR_3->has_error)
            {
               FUNC_5(VAR_3->cond_lock);
               FUNC_4(VAR_3->cond, VAR_3->cond_lock);
               FUNC_6(VAR_3->cond_lock);
            }
         }
         else
         {
            size_t VAR_8 = VAR_2 - VAR_6 > VAR_7 ? VAR_7 : VAR_2 - VAR_6;
            FUNC_0(VAR_3->buffer, (const char*)VAR_1 + VAR_6, VAR_8);
            FUNC_3(VAR_3->rd);
            VAR_6 += VAR_8;
         }
      }
      return VAR_6;
   }
}
