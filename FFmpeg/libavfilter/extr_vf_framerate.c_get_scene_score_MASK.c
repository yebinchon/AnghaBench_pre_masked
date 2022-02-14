
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {double height; double width; int * linesize; int * data; } ;
struct TYPE_8__ {int bitdepth; double prev_mafd; int (* sad ) (int ,int ,int ,int ,double,double,scalar_t__*) ;} ;
typedef TYPE_1__ FrameRateContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (double,double) ;
 double FUNC_1 (int ,int ,double) ;
 int FUNC_2 () ;
 double FUNC_3 (double) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (int ,int ,int ,int ,double,double,scalar_t__*) ;

__attribute__((used)) static double FUNC_6(AVFilterContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{
    FrameRateContext *VAR_3 = VAR_0->priv;
    double VAR_4 = 0;

    FUNC_4(VAR_0, "get_scene_score()\n");

    if (VAR_1->height == VAR_2->height &&
        VAR_1->width == VAR_2->width) {
        uint64_t VAR_5;
        double VAR_6, VAR_7;

        FUNC_4(VAR_0, "get_scene_score() process\n");
        VAR_3->sad(VAR_1->data[0], VAR_1->linesize[0], VAR_2->data[0], VAR_2->linesize[0], VAR_1->width, VAR_1->height, &VAR_5);
        FUNC_2();
        VAR_6 = (double)VAR_5 * 100.0 / (VAR_1->width * VAR_1->height) / (1 << VAR_3->bitdepth);
        VAR_7 = FUNC_3(VAR_6 - VAR_3->prev_mafd);
        VAR_4 = FUNC_1(FUNC_0(VAR_6, VAR_7), 0, 100.0);
        VAR_3->prev_mafd = VAR_6;
    }
    FUNC_4(VAR_0, "get_scene_score() result is:%f\n", VAR_4);
    return VAR_4;
}
