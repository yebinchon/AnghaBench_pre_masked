
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_base; scalar_t__ buf_ptr; } ;
typedef TYPE_1__ console_buf_t ;



__attribute__((used)) static inline int
FUNC_0(console_buf_t * VAR_0)
{
 return (int)(VAR_0->buf_ptr - VAR_0->buf_base);
}
