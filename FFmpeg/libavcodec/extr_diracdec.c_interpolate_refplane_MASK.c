
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* draw_edges ) (scalar_t__,int,int,int,int,int,int) ;} ;
struct TYPE_8__ {int (* dirac_hpel_filter ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;} ;
struct TYPE_12__ {TYPE_2__ mpvencdsp; TYPE_1__ diracdsp; int mv_precision; } ;
struct TYPE_11__ {int* interpolated; TYPE_3__* avframe; scalar_t__** hpel; scalar_t__** hpel_base; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_4__ DiracFrame ;
typedef TYPE_5__ DiracContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,int,int,int,int,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_4 (scalar_t__,int,int,int,int,int,int) ;
 int FUNC_5 (scalar_t__,int,int,int,int,int,int) ;
 int FUNC_6 (scalar_t__,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(DiracContext *VAR_4, DiracFrame *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{



    int VAR_9, VAR_10 = VAR_2/2;

    VAR_5->hpel[VAR_6][0] = VAR_5->avframe->data[VAR_6];
    VAR_4->mpvencdsp.draw_edges(VAR_5->hpel[VAR_6][0], VAR_5->avframe->linesize[VAR_6], VAR_7, VAR_8, VAR_10, VAR_10, VAR_1 | VAR_0);


    if (!VAR_4->mv_precision)
        return 0;

    for (VAR_9 = 1; VAR_9 < 4; VAR_9++) {
        if (!VAR_5->hpel_base[VAR_6][VAR_9])
            VAR_5->hpel_base[VAR_6][VAR_9] = FUNC_1((VAR_8+2*VAR_10) * VAR_5->avframe->linesize[VAR_6] + 32);
        if (!VAR_5->hpel_base[VAR_6][VAR_9]) {
            return FUNC_0(VAR_3);
        }

        VAR_5->hpel[VAR_6][VAR_9] = VAR_5->hpel_base[VAR_6][VAR_9] + VAR_10*VAR_5->avframe->linesize[VAR_6] + 16;
    }

    if (!VAR_5->interpolated[VAR_6]) {
        VAR_4->diracdsp.dirac_hpel_filter(VAR_5->hpel[VAR_6][1], VAR_5->hpel[VAR_6][2],
                                      VAR_5->hpel[VAR_6][3], VAR_5->hpel[VAR_6][0],
                                      VAR_5->avframe->linesize[VAR_6], VAR_7, VAR_8);
        VAR_4->mpvencdsp.draw_edges(VAR_5->hpel[VAR_6][1], VAR_5->avframe->linesize[VAR_6], VAR_7, VAR_8, VAR_10, VAR_10, VAR_1 | VAR_0);
        VAR_4->mpvencdsp.draw_edges(VAR_5->hpel[VAR_6][2], VAR_5->avframe->linesize[VAR_6], VAR_7, VAR_8, VAR_10, VAR_10, VAR_1 | VAR_0);
        VAR_4->mpvencdsp.draw_edges(VAR_5->hpel[VAR_6][3], VAR_5->avframe->linesize[VAR_6], VAR_7, VAR_8, VAR_10, VAR_10, VAR_1 | VAR_0);
    }
    VAR_5->interpolated[VAR_6] = 1;

    return 0;
}
