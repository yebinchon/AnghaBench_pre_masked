
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int coded_width; int coded_height; int lowres; void* height; void* width; int max_pixels; } ;
typedef TYPE_1__ AVCodecContext ;


 void* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int ,int ,int ,TYPE_1__*) ;

int FUNC_2(AVCodecContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1->max_pixels, VAR_0, 0, VAR_1);

    if (VAR_4 < 0)
        VAR_2 = VAR_3 = 0;

    VAR_1->coded_width = VAR_2;
    VAR_1->coded_height = VAR_3;
    VAR_1->width = FUNC_0(VAR_2, VAR_1->lowres);
    VAR_1->height = FUNC_0(VAR_3, VAR_1->lowres);

    return VAR_4;
}
