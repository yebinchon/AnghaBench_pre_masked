
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int* sample_fmts; } ;
typedef TYPE_1__ AVCodec ;


 int const VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVCodec *VAR_1, enum AVSampleFormat VAR_2)
{
    const enum AVSampleFormat *VAR_3 = VAR_1->sample_fmts;

    while (*VAR_3 != VAR_0) {
        if (*VAR_3 == VAR_2)
            return 1;
        VAR_3++;
    }
    return 0;
}
