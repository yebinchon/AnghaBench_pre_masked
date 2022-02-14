
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* opaque; } ;
struct TYPE_3__ {void* h; } ;
typedef TYPE_1__ AVIOInternal ;
typedef TYPE_2__ AVIOContext ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, void *VAR_1)
{
    AVIOContext *VAR_2 = VAR_0;
    AVIOInternal *VAR_3 = VAR_2->opaque;
    return VAR_1 ? ((void*)0) : VAR_3->h;
}
