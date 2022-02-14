
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int ptrdiff_t ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_8__ {scalar_t__ scd_method; double prev_mafd; double scd_threshold; int (* sad ) (int *,int ,int *,int ,int,int,scalar_t__*) ;TYPE_2__* frames; TYPE_4__ me_ctx; } ;
struct TYPE_7__ {TYPE_1__* avf; } ;
struct TYPE_6__ {int * linesize; int ** data; } ;
typedef TYPE_3__ MIContext ;
typedef TYPE_4__ AVMotionEstContext ;


 int FUNC_0 (double,double) ;
 scalar_t__ VAR_0 ;
 double FUNC_1 (int ,int ,double) ;
 int FUNC_2 () ;
 double FUNC_3 (double) ;
 int FUNC_4 (int *,int ,int *,int ,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(MIContext *VAR_1)
{
    AVMotionEstContext *VAR_2 = &VAR_1->me_ctx;
    uint8_t *VAR_3 = VAR_1->frames[1].avf->data[0];
    ptrdiff_t VAR_4 = VAR_1->frames[1].avf->linesize[0];
    uint8_t *VAR_5 = VAR_1->frames[2].avf->data[0];
    ptrdiff_t VAR_6 = VAR_1->frames[2].avf->linesize[0];

    if (VAR_1->scd_method == VAR_0) {
        double VAR_7 = 0, VAR_8, VAR_9;
        uint64_t VAR_10;
        VAR_1->sad(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2->width, VAR_2->height, &VAR_10);
        FUNC_2();
        VAR_8 = (double) VAR_10 / (VAR_2->height * VAR_2->width * 3);
        VAR_9 = FUNC_3(VAR_8 - VAR_1->prev_mafd);
        VAR_7 = FUNC_1(FUNC_0(VAR_8, VAR_9), 0, 100.0);
        VAR_1->prev_mafd = VAR_8;

        return VAR_7 >= VAR_1->scd_threshold;
    }

    return 0;
}
