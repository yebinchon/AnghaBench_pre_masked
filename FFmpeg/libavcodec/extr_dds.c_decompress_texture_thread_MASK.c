
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int coded_width; int coded_height; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int slice_count; int tex_ratio; int (* tex_funct ) (int *,int,int const*) ;int * tex_data; } ;
typedef TYPE_1__ DDSContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int const*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2, void *VAR_3,
                                     int VAR_4, int VAR_5)
{
    DDSContext *VAR_6 = VAR_2->priv_data;
    AVFrame *VAR_7 = VAR_3;
    const uint8_t *VAR_8 = VAR_6->tex_data;
    int VAR_9 = VAR_2->coded_width / VAR_1;
    int VAR_10 = VAR_2->coded_height / VAR_0;
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;
    int VAR_15 = VAR_10 / VAR_6->slice_count;
    int VAR_16 = VAR_10 % VAR_6->slice_count;




    VAR_13 = VAR_4 * VAR_15;

    VAR_13 += FUNC_0(VAR_4, VAR_16);

    VAR_14 = VAR_13 + VAR_15;

    if (VAR_4 < VAR_16)
        VAR_14++;

    for (VAR_12 = VAR_13; VAR_12 < VAR_14; VAR_12++) {
        uint8_t *VAR_17 = VAR_7->data[0] + VAR_12 * VAR_7->linesize[0] * VAR_0;
        int VAR_18 = VAR_12 * VAR_9;
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            VAR_6->tex_funct(VAR_17 + VAR_11 * 16, VAR_7->linesize[0],
                           VAR_8 + (VAR_18 + VAR_11) * VAR_6->tex_ratio);
        }
    }

    return 0;
}
