
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_buf {int buf_put; int buf_get; } ;



__attribute__((used)) static void FUNC_0(struct edge_buf *VAR_0)
{
 if (VAR_0 != ((void*)0))
  VAR_0->buf_get = VAR_0->buf_put;

}
