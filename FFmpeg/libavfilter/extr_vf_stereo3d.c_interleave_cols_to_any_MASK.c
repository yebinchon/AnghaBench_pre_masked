
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_7__ {int row_step; } ;
struct TYPE_8__ {int* pheight; int* pixstep; int* linesize; TYPE_1__ out; } ;
typedef TYPE_2__ Stereo3DContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(Stereo3DContext *VAR_0, int *VAR_1, int VAR_2, AVFrame *VAR_3, AVFrame *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_0->pheight[VAR_2]; VAR_6++) {
        const uint8_t *VAR_8 = (const uint8_t*)VAR_3->data[VAR_2] + VAR_6 * VAR_3->linesize[VAR_2] + VAR_5 * VAR_0->pixstep[VAR_2];
        uint8_t *VAR_9 = VAR_4->data[VAR_2] + VAR_1[VAR_2] + VAR_6 * VAR_4->linesize[VAR_2] * VAR_0->out.row_step;

        switch (VAR_0->pixstep[VAR_2]) {
        case 1:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7++)
                VAR_9[VAR_7] = VAR_8[VAR_7 * 2];
            break;
        case 2:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7+=2)
                FUNC_7(&VAR_9[VAR_7], FUNC_2(&VAR_8[VAR_7 * 2]));
            break;
        case 3:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7+=3)
                FUNC_5(&VAR_9[VAR_7], FUNC_0(&VAR_8[VAR_7 * 2]));
            break;
        case 4:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7+=4)
                FUNC_8(&VAR_9[VAR_7], FUNC_3(&VAR_8[VAR_7 * 2]));
            break;
        case 6:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7+=6)
                FUNC_6(&VAR_9[VAR_7], FUNC_1(&VAR_8[VAR_7 * 2]));
            break;
        case 8:
            for (VAR_7 = 0; VAR_7 < VAR_0->linesize[VAR_2]; VAR_7+=8)
                FUNC_9(&VAR_9[VAR_7], FUNC_4(&VAR_8[VAR_7 * 2]));
            break;
        }
    }
}
