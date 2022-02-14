
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int* linesize; int height; int width; int format; scalar_t__* data; TYPE_5__** buf; } ;
struct TYPE_6__ {scalar_t__ sw_format; int height; int width; int pool; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int*,int ,scalar_t__,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_4, AVFrame *VAR_5)
{
    int VAR_6;

    VAR_5->buf[0] = FUNC_1(VAR_4->pool);
    if (!VAR_5->buf[0])
        return FUNC_0(VAR_3);

    VAR_6 = FUNC_2(VAR_5->data, VAR_5->linesize, VAR_5->buf[0]->data,
                               VAR_4->sw_format, VAR_4->width, VAR_4->height, VAR_2);
    if (VAR_6 < 0)
        return VAR_6;



    if (VAR_4->sw_format == VAR_1) {
        VAR_5->linesize[1] = VAR_5->linesize[2] = VAR_5->linesize[0] / 2;
        VAR_5->data[2] = VAR_5->data[1];
        VAR_5->data[1] = VAR_5->data[2] + VAR_5->linesize[2] * VAR_4->height / 2;
    }

    VAR_5->format = VAR_0;
    VAR_5->width = VAR_4->width;
    VAR_5->height = VAR_4->height;

    return 0;
}
