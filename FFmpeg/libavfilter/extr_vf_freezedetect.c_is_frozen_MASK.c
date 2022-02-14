
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_7__ {int * linesize; int * data; } ;
struct TYPE_6__ {int* width; double* height; unsigned long long bitdepth; double noise; int (* sad ) (int ,int ,int ,int ,int,double,double*) ;} ;
typedef TYPE_1__ FreezeDetectContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int,double,double*) ;

__attribute__((used)) static int FUNC_2(FreezeDetectContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{
    uint64_t VAR_3 = 0;
    uint64_t VAR_4 = 0;
    double VAR_5;
    for (int VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        if (VAR_0->width[VAR_6]) {
            uint64_t VAR_7;
            VAR_0->sad(VAR_2->data[VAR_6], VAR_2->linesize[VAR_6],
                   VAR_1->data[VAR_6], VAR_1->linesize[VAR_6],
                   VAR_0->width[VAR_6], VAR_0->height[VAR_6], &VAR_7);
            VAR_3 += VAR_7;
            VAR_4 += VAR_0->width[VAR_6] * VAR_0->height[VAR_6];
        }
    }
    FUNC_0();
    VAR_5 = (double)VAR_3 / VAR_4 / (1ULL << VAR_0->bitdepth);
    return (VAR_5 <= VAR_0->noise);
}
