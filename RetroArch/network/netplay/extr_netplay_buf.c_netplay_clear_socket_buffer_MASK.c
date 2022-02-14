
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {scalar_t__ end; scalar_t__ read; scalar_t__ start; } ;



void FUNC_0(struct socket_buffer *VAR_0)
{
   VAR_0->start = VAR_0->read = VAR_0->end = 0;
}
