
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int * data; int * linesize; } ;
struct TYPE_5__ {int imageData; int widthStep; } ;
typedef TYPE_1__ IplImage ;
typedef TYPE_2__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0, const IplImage *VAR_1, enum AVPixelFormat VAR_2)
{
    VAR_0->linesize[0] = VAR_1->widthStep;
    VAR_0->data[0] = VAR_1->imageData;
}
