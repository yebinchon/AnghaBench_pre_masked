
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; int den; } ;
struct TYPE_5__ {int width; int height; TYPE_1__ sample_aspect_ratio; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0, int *VAR_1, int *VAR_2) {
    int VAR_3, VAR_4;

    VAR_3 = VAR_0->width;
    VAR_4 = VAR_0->height;

    if (VAR_0->sample_aspect_ratio.num > 0 && VAR_0->sample_aspect_ratio.den > 0) {
        VAR_3 *= VAR_0->sample_aspect_ratio.num;
        VAR_4 *= VAR_0->sample_aspect_ratio.den;
    }

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 1024 * 1024);
}
