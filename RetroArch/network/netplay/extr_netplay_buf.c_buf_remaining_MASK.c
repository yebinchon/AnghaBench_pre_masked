
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer {size_t bufsz; } ;


 size_t FUNC_0 (struct socket_buffer*) ;

__attribute__((used)) static size_t FUNC_1(struct socket_buffer *VAR_0)
{
   return VAR_0->bufsz - FUNC_0(VAR_0) - 1;
}
