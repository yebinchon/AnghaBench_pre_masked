
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int n_difchan; int difseg_size; } ;
struct TYPE_10__ {TYPE_1__* work_chunks; } ;
struct TYPE_9__ {int buf_offset; int * mb_coordinates; } ;
typedef TYPE_2__ DVVideoContext ;
typedef TYPE_3__ AVDVProfile ;


 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*,int,int,int,int *) ;

int FUNC_3(DVVideoContext *VAR_0, const AVDVProfile *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_6 = VAR_3 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1->n_difchan; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_1->difseg_size; VAR_5++) {
            VAR_6 += 6;
            for (VAR_2 = 0; VAR_2 < 27; VAR_2++) {
                VAR_6 += !(VAR_2 % 3);
                if (!(FUNC_0(VAR_1) && VAR_4 != 0 && VAR_5 == 11) &&
                    !(FUNC_1(VAR_1) && VAR_5 > 9)) {
                    FUNC_2(VAR_1, VAR_4, VAR_5, VAR_2, &VAR_0->work_chunks[VAR_3].mb_coordinates[0]);
                    VAR_0->work_chunks[VAR_3++].buf_offset = VAR_6;
                }
                VAR_6 += 5;
            }
        }
    }

    return 0;
}
