
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_buf {int buf_size; int buf_put; int buf_get; } ;



__attribute__((used)) static unsigned FUNC_0(struct gs_buf *VAR_0)
{
 return (VAR_0->buf_size + VAR_0->buf_put - VAR_0->buf_get) % VAR_0->buf_size;
}
