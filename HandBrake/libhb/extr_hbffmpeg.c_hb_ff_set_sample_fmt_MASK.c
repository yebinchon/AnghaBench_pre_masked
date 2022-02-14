
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_6__ {scalar_t__ type; int* sample_fmts; } ;
struct TYPE_5__ {int request_sample_fmt; int sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AVCodec ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(AVCodecContext *VAR_2, AVCodec *VAR_3,
                          enum AVSampleFormat VAR_4)
{
    if (VAR_2 != ((void*)0) && VAR_3 != ((void*)0) &&
        VAR_3->type == VAR_0 && VAR_3->sample_fmts != ((void*)0))
    {
        const enum AVSampleFormat *VAR_5;
        enum AVSampleFormat VAR_6;

        VAR_6 = (FUNC_2(VAR_4) ?
                         FUNC_0(VAR_4) :
                         FUNC_1(VAR_4));

        VAR_2->request_sample_fmt = VAR_1;

        for (VAR_5 = VAR_3->sample_fmts; *VAR_5 != VAR_1; VAR_5++)
        {
            if (*VAR_5 == VAR_4)
            {
                VAR_2->request_sample_fmt = VAR_4;
                break;
            }
            else if (*VAR_5 == VAR_6)
            {
                VAR_2->request_sample_fmt = VAR_6;
            }
        }





        if (VAR_2->request_sample_fmt == VAR_1)
        {
            VAR_2->request_sample_fmt = VAR_3->sample_fmts[0];
        }
        VAR_2->sample_fmt = VAR_2->request_sample_fmt;
    }
}
