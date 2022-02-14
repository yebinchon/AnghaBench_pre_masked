
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int width; int height; int* linesize; scalar_t__* data; scalar_t__* extended_data; TYPE_4__** buf; int format; } ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int,int ,int *) ;
 int FUNC_6 (int*,int ,void*) ;
 int FUNC_7 (scalar_t__*,int ,int,int *,int*) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFrame *VAR_2, int VAR_3)
{
    const AVPixFmtDescriptor *VAR_4 = FUNC_8(VAR_2->format);
    int VAR_5, VAR_6, VAR_7;
    int VAR_8 = FUNC_2(16 + 16 , VAR_3);

    if (!VAR_4)
        return FUNC_0(VAR_0);

    if ((VAR_5 = FUNC_5(VAR_2->width, VAR_2->height, 0, ((void*)0))) < 0)
        return VAR_5;

    if (!VAR_2->linesize[0]) {
        if (VAR_3 <= 0)
            VAR_3 = 32;

        for(VAR_6=1; VAR_6<=VAR_3; VAR_6+=VAR_6) {
            VAR_5 = FUNC_6(VAR_2->linesize, VAR_2->format,
                                          FUNC_1(VAR_2->width, VAR_6));
            if (VAR_5 < 0)
                return VAR_5;
            if (!(VAR_2->linesize[0] & (VAR_3-1)))
                break;
        }

        for (VAR_6 = 0; VAR_6 < 4 && VAR_2->linesize[VAR_6]; VAR_6++)
            VAR_2->linesize[VAR_6] = FUNC_1(VAR_2->linesize[VAR_6], VAR_3);
    }

    VAR_7 = FUNC_1(VAR_2->height, 32);
    if ((VAR_5 = FUNC_7(VAR_2->data, VAR_2->format, VAR_7,
                                      ((void*)0), VAR_2->linesize)) < 0)
        return VAR_5;

    VAR_2->buf[0] = FUNC_3(VAR_5 + 4*VAR_8);
    if (!VAR_2->buf[0]) {
        VAR_5 = FUNC_0(VAR_1);
        goto fail;
    }

    if ((VAR_5 = FUNC_7(VAR_2->data, VAR_2->format, VAR_7,
                                      VAR_2->buf[0]->data, VAR_2->linesize)) < 0)
        goto fail;

    for (VAR_6 = 1; VAR_6 < 4; VAR_6++) {
        if (VAR_2->data[VAR_6])
            VAR_2->data[VAR_6] += VAR_6 * VAR_8;
    }

    VAR_2->extended_data = VAR_2->data;

    return 0;
fail:
    FUNC_4(VAR_2);
    return VAR_5;
}
