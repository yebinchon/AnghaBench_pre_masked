
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {scalar_t__ end; scalar_t__ start; scalar_t__ data; scalar_t__ bufsz; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct socket_buffer*) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__,int) ;

bool FUNC_3(struct socket_buffer *VAR_0, int VAR_1, bool VAR_2)
{
   ssize_t VAR_3;

   if (FUNC_0(VAR_0) == 0)
      return 1;

   if (VAR_0->end > VAR_0->start)
   {

      if (VAR_2)
      {
         if (!FUNC_1(
                  VAR_1, VAR_0->data + VAR_0->start, FUNC_0(VAR_0), 1))
            return 0;
         VAR_0->start = VAR_0->end = 0;

      }
      else
      {
         VAR_3 = FUNC_2(VAR_1, VAR_0->data + VAR_0->start, FUNC_0(VAR_0), 1);
         if (VAR_3 < 0)
            return 0;
         VAR_0->start += VAR_3;

         if (VAR_0->start == VAR_0->end)
            VAR_0->start = VAR_0->end = 0;

      }

   }
   else
   {

      if (VAR_2)
      {
         if (!FUNC_1(VAR_1, VAR_0->data + VAR_0->start, VAR_0->bufsz - VAR_0->start, 1))
            return 0;
         VAR_0->start = 0;
         return FUNC_3(VAR_0, VAR_1, 1);

      }
      else
      {
         VAR_3 = FUNC_2(VAR_1, VAR_0->data + VAR_0->start, VAR_0->bufsz - VAR_0->start, 1);
         if (VAR_3 < 0)
            return 0;
         VAR_0->start += VAR_3;

         if (VAR_0->start >= VAR_0->bufsz)
         {
            VAR_0->start = 0;
            return FUNC_3(VAR_0, VAR_1, 0);

         }

      }

   }

   return 1;
}
