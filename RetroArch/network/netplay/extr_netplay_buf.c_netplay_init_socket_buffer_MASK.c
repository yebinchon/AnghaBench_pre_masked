
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {unsigned char* data; size_t bufsz; scalar_t__ end; scalar_t__ read; scalar_t__ start; } ;


 scalar_t__ FUNC_0 (size_t) ;

bool FUNC_1(struct socket_buffer *VAR_0, size_t VAR_1)
{
   VAR_0->data = (unsigned char*)FUNC_0(VAR_1);
   if (!VAR_0->data)
      return 0;
   VAR_0->bufsz = VAR_1;
   VAR_0->start = VAR_0->read = VAR_0->end = 0;
   return 1;
}
