
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {size_t offset; unsigned int len; scalar_t__* data; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct buffer FUNC_1(struct buffer VAR_0)
{
   for (; (unsigned)VAR_0.offset < VAR_0.len
         && FUNC_0((int)VAR_0.data[VAR_0.offset]); VAR_0.offset++);
   return VAR_0;
}
