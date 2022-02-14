
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_12__ {int height; int width; scalar_t__ data; int * linesize; scalar_t__ format; } ;
struct TYPE_11__ {scalar_t__ sw_format; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (scalar_t__,int *,int const**,int *,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*,int ) ;

__attribute__((used)) static int FUNC_5(AVHWFramesContext *VAR_3, AVFrame *VAR_4,
                                    const AVFrame *VAR_5)
{
    AVFrame *VAR_6;
    ptrdiff_t VAR_7[4], VAR_8[4];
    int VAR_9, VAR_10;

    if (VAR_4->format != VAR_3->sw_format)
        return FUNC_0(VAR_2);

    VAR_6 = FUNC_1();
    if (!VAR_6)
        return FUNC_0(VAR_1);
    VAR_6->format = VAR_4->format;

    VAR_9 = FUNC_4(VAR_3, VAR_6, VAR_5, VAR_0);
    if (VAR_9 < 0)
        goto fail;

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
        VAR_8[VAR_10] = VAR_4->linesize[VAR_10];
        VAR_7[VAR_10] = VAR_6->linesize[VAR_10];
    }
    FUNC_3(VAR_4->data, VAR_8, (const uint8_t **)VAR_6->data, VAR_7,
                          VAR_3->sw_format, VAR_5->width, VAR_5->height);
fail:
    FUNC_2(&VAR_6);
    return VAR_9;
}
