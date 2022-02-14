
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int height; int width; int linesize; scalar_t__ data; int format; } ;
struct TYPE_11__ {int sw_format; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (scalar_t__,int ,int const**,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(AVHWFramesContext *VAR_4, AVFrame *VAR_5,
                                  const AVFrame *VAR_6)
{
    AVFrame *VAR_7;
    int VAR_8;

    if (VAR_6->format != VAR_4->sw_format)
        return FUNC_0(VAR_3);

    VAR_7 = FUNC_1();
    if (!VAR_7)
        return FUNC_0(VAR_2);
    VAR_7->format = VAR_5->format;

    VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_5, VAR_1 | VAR_0);
    if (VAR_8 < 0)
        goto fail;

    FUNC_3(VAR_7->data, VAR_7->linesize, (const uint8_t **)VAR_6->data, VAR_6->linesize,
                  VAR_4->sw_format, VAR_6->width, VAR_6->height);

fail:
    FUNC_2(&VAR_7);
    return VAR_8;
}
