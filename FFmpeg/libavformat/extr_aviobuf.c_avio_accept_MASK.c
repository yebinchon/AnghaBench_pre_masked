
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_7__ {TYPE_1__* opaque; } ;
struct TYPE_6__ {int * h; } ;
typedef TYPE_1__ AVIOInternal ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (TYPE_2__**,int *) ;
 int FUNC_1 (int *,int **) ;

int FUNC_2(AVIOContext *VAR_0, AVIOContext **VAR_1)
{
    int VAR_2;
    AVIOInternal *VAR_3 = VAR_0->opaque;
    URLContext *VAR_4 = VAR_3->h;
    URLContext *VAR_5 = ((void*)0);
    VAR_2 = FUNC_1(VAR_4, &VAR_5);
    if (VAR_2 < 0)
        return VAR_2;
    return FUNC_0(VAR_1, VAR_5);
}
