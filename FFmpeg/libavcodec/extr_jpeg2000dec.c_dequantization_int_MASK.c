
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_12__ {int i_stepsize; } ;
struct TYPE_11__ {int** coord; } ;
struct TYPE_10__ {int* i_data; int** coord; } ;
struct TYPE_9__ {int* data; int stride; } ;
typedef TYPE_1__ Jpeg2000T1Context ;
typedef TYPE_2__ Jpeg2000Component ;
typedef TYPE_3__ Jpeg2000Cblk ;
typedef TYPE_4__ Jpeg2000Band ;



__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, Jpeg2000Cblk *VAR_2,
                               Jpeg2000Component *VAR_3,
                               Jpeg2000T1Context *VAR_4, Jpeg2000Band *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = VAR_2->coord[0][1] - VAR_2->coord[0][0];
    for (VAR_7 = 0; VAR_7 < (VAR_2->coord[1][1] - VAR_2->coord[1][0]); ++VAR_7) {
        int32_t *VAR_9 = &VAR_3->i_data[(VAR_3->coord[0][1] - VAR_3->coord[0][0]) * (VAR_1 + VAR_7) + VAR_0];
        int *VAR_10 = VAR_4->data + VAR_7*VAR_4->stride;
        if (VAR_5->i_stepsize == 32768) {
            for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
                VAR_9[VAR_6] = VAR_10[VAR_6] / 2;
        } else {

            for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
                VAR_9[VAR_6] = (VAR_10[VAR_6] * (int64_t)VAR_5->i_stepsize) / 65536;
        }
    }
}
