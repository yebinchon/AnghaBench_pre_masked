
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int format; int width; int height; int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static AVFrame *FUNC_4(enum AVPixelFormat VAR_4, int VAR_5, int VAR_6)
{
    AVFrame *VAR_7;
    VAR_7 = FUNC_0();
    if (!VAR_7)
        return ((void*)0);
    VAR_7->format = VAR_4;
    VAR_7->width = VAR_5;
    VAR_7->height = VAR_6;
    if (FUNC_2(VAR_7, 32) < 0) {
        FUNC_1(&VAR_7);
        return ((void*)0);
    }
    if (VAR_4 == VAR_0 || VAR_4 == VAR_1) {
        FUNC_3(VAR_7->data[0], 0, VAR_7->linesize[0] * VAR_6);
    } else {
        int VAR_8 = (VAR_4 == VAR_2 || VAR_4 == VAR_3) ? VAR_6 / 2 : VAR_6;
        FUNC_3(VAR_7->data[0], 16, VAR_7->linesize[0] * VAR_6);
        FUNC_3(VAR_7->data[1], 128, VAR_7->linesize[1] * VAR_8);
        FUNC_3(VAR_7->data[2], 128, VAR_7->linesize[2] * VAR_8);
        if (VAR_7->data[3])
            FUNC_3(VAR_7->data[3], 0, VAR_7->linesize[3] * VAR_6);
    }
    return VAR_7;
}
