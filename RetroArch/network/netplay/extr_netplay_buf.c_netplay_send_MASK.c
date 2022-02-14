
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {size_t bufsz; size_t end; size_t data; } ;


 size_t FUNC_0 (struct socket_buffer*) ;
 int FUNC_1 (size_t,void const*,size_t) ;
 int FUNC_2 (struct socket_buffer*,int,int) ;
 int FUNC_3 (int,void const*,size_t,int) ;

bool FUNC_4(struct socket_buffer *VAR_0, int VAR_1, const void *VAR_2,
   size_t VAR_3)
{
   if (FUNC_0(VAR_0) < VAR_3)
   {

      if (!FUNC_2(VAR_0, VAR_1, 1))
         return 0;
   }

   if (FUNC_0(VAR_0) < VAR_3)
   {


      if (!FUNC_3(VAR_1, VAR_2, VAR_3, 0))
         return 0;
      return 1;
   }


   if (VAR_0->bufsz - VAR_0->end < VAR_3)
   {

      size_t VAR_4 = VAR_0->bufsz - VAR_0->end,
             VAR_5 = VAR_3 - VAR_4;
      FUNC_1(VAR_0->data + VAR_0->end, VAR_2, VAR_4);
      FUNC_1(VAR_0->data, (const unsigned char *) VAR_2 + VAR_4, VAR_5);
      VAR_0->end = VAR_5;

   }
   else
   {

      FUNC_1(VAR_0->data + VAR_0->end, VAR_2, VAR_3);
      VAR_0->end += VAR_3;

   }

   return 1;
}
