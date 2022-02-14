
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buffer; } ;
struct TYPE_4__ {int refcount; } ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (int *) ;

int FUNC_1(const AVBufferRef *VAR_0)
{
    return FUNC_0(&VAR_0->buffer->refcount);
}
