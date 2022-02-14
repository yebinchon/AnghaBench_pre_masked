
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {scalar_t__ height; scalar_t__ width; int * linesize; int * data; } ;
struct TYPE_9__ {int nb_planes; double* width; double* height; int bitdepth; double prev_mafd; TYPE_2__* prev_picref; int (* sad ) (int ,int ,int ,int ,double,double,double*) ;} ;
typedef TYPE_1__ SelectContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (double,double) ;
 double FUNC_1 (int,int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 () ;
 double FUNC_5 (double) ;
 int FUNC_6 (int ,int ,int ,int ,double,double,double*) ;

__attribute__((used)) static double FUNC_7(AVFilterContext *VAR_0, AVFrame *VAR_1)
{
    double VAR_2 = 0;
    SelectContext *VAR_3 = VAR_0->priv;
    AVFrame *VAR_4 = VAR_3->prev_picref;

    if (VAR_4 &&
        VAR_1->height == VAR_4->height &&
        VAR_1->width == VAR_4->width) {
        uint64_t VAR_5 = 0;
        double VAR_6, VAR_7;
        uint64_t VAR_8 = 0;

        for (int VAR_9 = 0; VAR_9 < VAR_3->nb_planes; VAR_9++) {
            uint64_t VAR_10;
            VAR_3->sad(VAR_4->data[VAR_9], VAR_4->linesize[VAR_9],
                    VAR_1->data[VAR_9], VAR_1->linesize[VAR_9],
                    VAR_3->width[VAR_9], VAR_3->height[VAR_9], &VAR_10);
            VAR_5 += VAR_10;
            VAR_8 += VAR_3->width[VAR_9] * VAR_3->height[VAR_9];
        }

        FUNC_4();
        VAR_6 = (double)VAR_5 / VAR_8 / (1ULL << (VAR_3->bitdepth - 8));
        VAR_7 = FUNC_5(VAR_6 - VAR_3->prev_mafd);
        VAR_2 = FUNC_1(FUNC_0(VAR_6, VAR_7) / 100., 0, 1);
        VAR_3->prev_mafd = VAR_6;
        FUNC_3(&VAR_4);
    }
    VAR_3->prev_picref = FUNC_2(VAR_1);
    return VAR_2;
}
