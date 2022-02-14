
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cypress_buf {unsigned int buf_size; unsigned int buf_put; unsigned int buf_get; } ;



__attribute__((used)) static unsigned int FUNC_0(struct cypress_buf *VAR_0)
{
 if (VAR_0 != ((void*)0))
  return (VAR_0->buf_size + VAR_0->buf_put - VAR_0->buf_get)
       % VAR_0->buf_size;
 else
  return 0;
}
