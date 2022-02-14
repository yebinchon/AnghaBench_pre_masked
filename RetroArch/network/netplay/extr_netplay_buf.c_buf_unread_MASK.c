
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {size_t end; size_t read; scalar_t__ bufsz; } ;



__attribute__((used)) static size_t FUNC_0(struct socket_buffer *VAR_0)
{
   if (VAR_0->end < VAR_0->read)
   {
      size_t VAR_1 = VAR_0->end;
      while (VAR_1 < VAR_0->read)
         VAR_1 += VAR_0->bufsz;
      return VAR_1 - VAR_0->read;
   }

   return VAR_0->end - VAR_0->read;
}
