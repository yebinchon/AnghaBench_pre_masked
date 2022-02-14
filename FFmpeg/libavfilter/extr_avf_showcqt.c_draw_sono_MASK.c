
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; int height; int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_2, AVFrame *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = VAR_2->format, VAR_7 = VAR_3->height;
    int VAR_8 = (VAR_6 == VAR_0) ? 1 : 3;
    int VAR_9 = (VAR_6 == VAR_1) ? VAR_4 / 2 : VAR_4;
    int VAR_10 = (VAR_6 == VAR_1) ? 2 : 1;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_11 = FUNC_0(VAR_2->linesize[0], VAR_3->linesize[0]);
    for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
        FUNC_1(VAR_2->data[0] + (VAR_4 + VAR_13) * VAR_2->linesize[0],
               VAR_3->data[0] + (VAR_5 + VAR_13) % VAR_7 * VAR_3->linesize[0], VAR_11);
    }

    for (VAR_12 = 1; VAR_12 < VAR_8; VAR_12++) {
        VAR_11 = FUNC_0(VAR_2->linesize[VAR_12], VAR_3->linesize[VAR_12]);
        for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13 += VAR_10) {
            VAR_14 = (VAR_6 == VAR_1) ? VAR_13 / 2 : VAR_13;
            FUNC_1(VAR_2->data[VAR_12] + (VAR_9 + VAR_14) * VAR_2->linesize[VAR_12],
                   VAR_3->data[VAR_12] + (VAR_5 + VAR_13) % VAR_7 * VAR_3->linesize[VAR_12], VAR_11);
        }
    }
}
