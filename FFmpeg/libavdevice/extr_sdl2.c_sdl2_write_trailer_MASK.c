
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int inited; int * window; int * renderer; int * texture; } ;
typedef TYPE_1__ SDLContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    SDLContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->texture)
        FUNC_1(VAR_1->texture);
    VAR_1->texture = ((void*)0);

    if (VAR_1->renderer)
        FUNC_0(VAR_1->renderer);
    VAR_1->renderer = ((void*)0);

    if (VAR_1->window)
        FUNC_2(VAR_1->window);
    VAR_1->window = ((void*)0);

    if (!VAR_1->inited)
        FUNC_3();

    return 0;
}
