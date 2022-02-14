
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_7__ {TYPE_1__* cover_frame; } ;
struct TYPE_6__ {int * linesize; int height; int width; int ** data; } ;
typedef TYPE_2__ CoverContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(CoverContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        uint8_t *VAR_7 = VAR_1->data[VAR_6] + (VAR_2>>!!VAR_6) + (VAR_3>>!!VAR_6) * VAR_1->linesize[VAR_6];
        const uint8_t *VAR_8 = VAR_0->cover_frame->data[VAR_6];
        int VAR_9 = FUNC_0(VAR_0->cover_frame->width , !!VAR_6);
        int VAR_10 = FUNC_0(VAR_0->cover_frame->height, !!VAR_6);
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
            for (VAR_4 = 0; VAR_4 < VAR_9; VAR_4++) {
                VAR_7[VAR_4] = VAR_8[VAR_4];
            }
            VAR_7 += VAR_1->linesize[VAR_6];
            VAR_8 += VAR_0->cover_frame->linesize[VAR_6];
        }
    }
}
