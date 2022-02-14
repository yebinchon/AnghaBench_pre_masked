
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ** l_h; int ** subband; int idwt_tmp; int idwt_buf; } ;
struct TYPE_4__ {scalar_t__ a_width; scalar_t__ a_height; TYPE_3__* plane; } ;
typedef TYPE_1__ CFHDContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CFHDContext *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->plane); VAR_1++) {
        FUNC_1(&VAR_0->plane[VAR_1].idwt_buf);
        FUNC_1(&VAR_0->plane[VAR_1].idwt_tmp);

        for (VAR_2 = 0; VAR_2 < 9; VAR_2++)
            VAR_0->plane[VAR_1].subband[VAR_2] = ((void*)0);

        for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
            VAR_0->plane[VAR_1].l_h[VAR_2] = ((void*)0);
    }
    VAR_0->a_height = 0;
    VAR_0->a_width = 0;
}
