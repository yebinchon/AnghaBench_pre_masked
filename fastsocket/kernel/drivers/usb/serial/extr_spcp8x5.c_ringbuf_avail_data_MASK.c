
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ringbuf {unsigned int buf_size; unsigned int buf_put; unsigned int buf_get; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct ringbuf *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 return (VAR_0->buf_size + VAR_0->buf_put - VAR_0->buf_get) % VAR_0->buf_size;
}
