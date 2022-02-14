
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status_out; int frame_count_out; int max_samples; scalar_t__ min_samples; int fifo; int * dst; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int **) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1)
{
    AVFrame *VAR_2 = ((void*)0);
    AVFilterContext *VAR_3 = VAR_1->dst;
    int VAR_4;

    FUNC_0(FUNC_4(&VAR_1->fifo));
    VAR_4 = VAR_1->min_samples ?
          FUNC_6(VAR_1, VAR_1->min_samples, VAR_1->max_samples, &VAR_2) :
          FUNC_5(VAR_1, &VAR_2);
    FUNC_0(VAR_4);
    if (VAR_4 < 0) {
        FUNC_0(!VAR_2);
        return VAR_4;
    }


    FUNC_7(VAR_3);


    VAR_1->frame_count_out--;
    VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (VAR_4 < 0 && VAR_4 != VAR_1->status_out) {
        FUNC_1(VAR_1, VAR_4, VAR_0);
    } else {


        FUNC_3(VAR_3, 300);
    }
    return VAR_4;
}
