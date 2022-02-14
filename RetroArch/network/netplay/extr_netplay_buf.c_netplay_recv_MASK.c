
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {scalar_t__ end; scalar_t__ start; scalar_t__ data; scalar_t__ bufsz; scalar_t__ read; } ;
typedef int ssize_t ;


 size_t FUNC_0 (struct socket_buffer*) ;
 int FUNC_1 (unsigned char*,scalar_t__,size_t) ;
 int FUNC_2 (int,unsigned char*,size_t) ;
 int FUNC_3 (int,int*,scalar_t__,scalar_t__) ;

ssize_t FUNC_4(struct socket_buffer *VAR_0, int VAR_1, void *VAR_2,
   size_t VAR_3, bool VAR_4)
{
   bool VAR_5;
   ssize_t VAR_6;


   if (VAR_0->end >= VAR_0->start)
   {
      VAR_5 = 0;
      VAR_6 = FUNC_3(VAR_1, &VAR_5,
         VAR_0->data + VAR_0->end, VAR_0->bufsz - VAR_0->end -
         ((VAR_0->start == 0) ? 1 : 0));
      if (VAR_6 < 0 || VAR_5)
         return -1;
      VAR_0->end += VAR_6;
      if (VAR_0->end >= VAR_0->bufsz)
      {
         VAR_0->end = 0;
         VAR_5 = 0;
         VAR_6 = FUNC_3(VAR_1, &VAR_5, VAR_0->data, VAR_0->start - 1);
         if (VAR_6 < 0 || VAR_5)
            return -1;
         VAR_0->end += VAR_6;

      }

   }
   else
   {
      VAR_5 = 0;
      VAR_6 = FUNC_3(VAR_1, &VAR_5, VAR_0->data + VAR_0->end, VAR_0->start - VAR_0->end - 1);
      if (VAR_6 < 0 || VAR_5)
         return -1;
      VAR_0->end += VAR_6;

   }


   if (VAR_0->end >= VAR_0->read || (VAR_0->bufsz - VAR_0->read) >= VAR_3)
   {
      size_t VAR_7 = FUNC_0(VAR_0);
      if (VAR_3 <= VAR_7)
      {
         FUNC_1(VAR_2, VAR_0->data + VAR_0->read, VAR_3);
         VAR_0->read += VAR_3;
         if (VAR_0->read >= VAR_0->bufsz)
            VAR_0->read = 0;
         VAR_6 = VAR_3;

      }
      else
      {
         FUNC_1(VAR_2, VAR_0->data + VAR_0->read, VAR_7);
         VAR_0->read += VAR_7;
         if (VAR_0->read >= VAR_0->bufsz)
            VAR_0->read = 0;
         VAR_6 = VAR_7;
      }
   }
   else
   {

      size_t VAR_8 = VAR_0->bufsz - VAR_0->read,
             VAR_9 = VAR_3 - VAR_8,
             VAR_10 = (VAR_9 >= VAR_0->end) ? VAR_0->end : VAR_9;
      FUNC_1(VAR_2, VAR_0->data + VAR_0->read, VAR_8);
      FUNC_1((unsigned char *) VAR_2 + VAR_8, VAR_0->data, VAR_10);
      VAR_0->read = VAR_10;
      VAR_6 = VAR_8 + VAR_10;
   }


   if (VAR_4)
   {
      VAR_0->start = VAR_0->read;
      if (VAR_6 < 0 || VAR_6 < (ssize_t) VAR_3)
      {
         if (!FUNC_2(VAR_1, (unsigned char *) VAR_2 + VAR_6, VAR_3 - VAR_6))
            return -1;
         VAR_6 = VAR_3;

      }
   }

   return VAR_6;
}
