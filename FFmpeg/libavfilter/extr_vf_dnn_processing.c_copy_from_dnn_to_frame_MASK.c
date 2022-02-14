
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_6__ {scalar_t__ format; int height; int width; int* linesize; float** data; } ;
struct TYPE_5__ {scalar_t__ dt; float* data; } ;
typedef TYPE_1__ DNNData ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 float FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(AVFrame *VAR_4, const DNNData *VAR_5)
{

    FUNC_0(VAR_4->format == VAR_1 || VAR_4->format == VAR_0);

    if (VAR_5->dt == VAR_2) {
        float *VAR_6 = VAR_5->data;
        for (int VAR_7 = 0; VAR_7 < VAR_4->height; VAR_7++) {
            for(int VAR_8 = 0; VAR_8 < VAR_4->width * 3; VAR_8++) {
                int VAR_9 = VAR_7 * VAR_4->linesize[0] + VAR_8;
                int VAR_10 = VAR_7 * VAR_4->width * 3 + VAR_8;
                VAR_4->data[0][VAR_9] = FUNC_1((int)(VAR_6[VAR_10] * 255.0f), 8);
            }
        }
    } else {
        uint8_t *VAR_11 = VAR_5->data;
        FUNC_0(VAR_5->dt == VAR_3);
        for (int VAR_12 = 0; VAR_12 < VAR_4->height; VAR_12++) {
            for(int VAR_13 = 0; VAR_13 < VAR_4->width * 3; VAR_13++) {
                int VAR_14 = VAR_12 * VAR_4->linesize[0] + VAR_13;
                int VAR_15 = VAR_12 * VAR_4->width * 3 + VAR_13;
                VAR_4->data[0][VAR_14] = VAR_11[VAR_15];
            }
        }
    }

    return 0;
}
