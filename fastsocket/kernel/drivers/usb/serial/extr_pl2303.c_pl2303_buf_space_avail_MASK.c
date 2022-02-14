
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl2303_buf {int buf_size; int buf_get; int buf_put; } ;



__attribute__((used)) static unsigned int FUNC_0(struct pl2303_buf *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;

 return (VAR_0->buf_size + VAR_0->buf_get - VAR_0->buf_put - 1) % VAR_0->buf_size;
}
