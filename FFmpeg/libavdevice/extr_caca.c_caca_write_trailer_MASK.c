
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int * canvas; int * dither; int * display; int window_title; } ;
typedef TYPE_1__ CACAContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    CACAContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->window_title);

    if (VAR_1->display) {
        FUNC_2(VAR_1->display);
        VAR_1->display = ((void*)0);
    }
    if (VAR_1->dither) {
        FUNC_3(VAR_1->dither);
        VAR_1->dither = ((void*)0);
    }
    if (VAR_1->canvas) {
        FUNC_1(VAR_1->canvas);
        VAR_1->canvas = ((void*)0);
    }
    return 0;
}
