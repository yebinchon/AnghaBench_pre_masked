
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int reference; scalar_t__ needs_realloc; TYPE_1__* f; } ;
struct TYPE_4__ {int * buf; } ;
typedef TYPE_2__ Picture ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(Picture *VAR_1)
{
    if (!VAR_1->f->buf[0])
        return 1;
    if (VAR_1->needs_realloc && !(VAR_1->reference & VAR_0))
        return 1;
    return 0;
}
