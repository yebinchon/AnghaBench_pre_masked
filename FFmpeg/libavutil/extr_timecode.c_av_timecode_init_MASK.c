
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start; int flags; int fps; int rate; } ;
typedef TYPE_1__ AVTimecode ;
typedef int AVRational ;


 int FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(AVTimecode *VAR_0, AVRational VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->start = VAR_3;
    VAR_0->flags = VAR_2;
    VAR_0->rate = VAR_1;
    VAR_0->fps = FUNC_1(VAR_1);
    return FUNC_0(VAR_4, VAR_0);
}
