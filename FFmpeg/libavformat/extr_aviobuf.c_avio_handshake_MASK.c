
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int * h; } ;
typedef TYPE_1__ AVIOInternal ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (int *) ;

int FUNC_1(AVIOContext *VAR_0)
{
    AVIOInternal *VAR_1 = VAR_0->opaque;
    URLContext *VAR_2 = VAR_1->h;
    return FUNC_0(VAR_2);
}
