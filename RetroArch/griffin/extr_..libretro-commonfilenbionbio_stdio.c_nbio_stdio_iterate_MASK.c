
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {size_t len; size_t progress; int op; int f; scalar_t__ data; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int,size_t,int ) ;
 size_t FUNC_1 (char*,int,size_t,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_2)
{
   size_t VAR_3 = 65536;
   struct nbio_stdio_t *VAR_4 = (struct nbio_stdio_t*)VAR_2;

   if (!VAR_4)
      return 0;

   if (VAR_3 > VAR_4->len - VAR_4->progress)
      VAR_3 = VAR_4->len - VAR_4->progress;

   switch (VAR_4->op)
   {
      case 129:
         if (VAR_4->mode == VAR_0)
         {
            VAR_3 = VAR_4->len;
            FUNC_0((char*)VAR_4->data, 1, VAR_3, VAR_4->f);
         }
         else
            FUNC_0((char*)VAR_4->data + VAR_4->progress, 1, VAR_3, VAR_4->f);
         break;
      case 128:
         if (VAR_4->mode == VAR_1)
         {
            size_t VAR_5 = 0;
            VAR_3 = VAR_4->len;
            VAR_5 = FUNC_1((char*)VAR_4->data, 1, VAR_3, VAR_4->f);
            if (VAR_5 != VAR_3)
               return 0;
         }
         else
            FUNC_1((char*)VAR_4->data + VAR_4->progress, 1, VAR_3, VAR_4->f);
         break;
   }

   VAR_4->progress += VAR_3;

   if (VAR_4->progress == VAR_4->len)
      VAR_4->op = -1;
   return (VAR_4->op < 0);
}
