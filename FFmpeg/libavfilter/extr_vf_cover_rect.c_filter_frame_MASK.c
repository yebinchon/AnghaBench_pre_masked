
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int value; } ;
struct TYPE_20__ {int * outputs; TYPE_2__* priv; } ;
struct TYPE_19__ {TYPE_5__* dst; } ;
struct TYPE_18__ {int width; int height; int metadata; } ;
struct TYPE_17__ {int width; int height; scalar_t__ mode; TYPE_1__* cover_frame; } ;
struct TYPE_16__ {int width; int height; } ;
typedef TYPE_2__ CoverContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int ,int) ;
 TYPE_6__* FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int,int) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ,char**,int) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    CoverContext *VAR_6 = VAR_5->priv;
    AVDictionaryEntry *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    int VAR_11 = -1, VAR_12 = -1, VAR_13 = -1, VAR_14 = -1;
    char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);

    VAR_7 = FUNC_3(VAR_4->metadata, "lavfi.rect.x", ((void*)0), VAR_0);
    VAR_8 = FUNC_3(VAR_4->metadata, "lavfi.rect.y", ((void*)0), VAR_0);
    VAR_9 = FUNC_3(VAR_4->metadata, "lavfi.rect.w", ((void*)0), VAR_0);
    VAR_10 = FUNC_3(VAR_4->metadata, "lavfi.rect.h", ((void*)0), VAR_0);
    if (VAR_7 && VAR_8 && VAR_9 && VAR_10) {
        VAR_11 = FUNC_8(VAR_7->value, &VAR_15, 10);
        VAR_12 = FUNC_8(VAR_8->value, &VAR_16, 10);
        VAR_13 = FUNC_8(VAR_9->value, &VAR_17, 10);
        VAR_14 = FUNC_8(VAR_10->value, &VAR_18, 10);
    }

    if (!VAR_15 || *VAR_15 || !VAR_16 || *VAR_16 ||
        !VAR_17 || *VAR_17 || !VAR_18 || *VAR_18
    ) {
        return FUNC_7(VAR_5->outputs[0], VAR_4);
    }

    if (VAR_11 < 0) {
        VAR_13 += VAR_11;
        VAR_11 = 0;
    }
    if (VAR_12 < 0) {
        VAR_14 += VAR_12;
        VAR_12 = 0;
    }
    VAR_13 = FUNC_1(VAR_13, VAR_4->width - VAR_11);
    VAR_14 = FUNC_1(VAR_14, VAR_4->height - VAR_12);

    if (VAR_13 > VAR_4->width || VAR_14 > VAR_4->height || VAR_13 <= 0 || VAR_14 <= 0)
        return FUNC_0(VAR_1);

    if (VAR_6->cover_frame) {
        if (VAR_13 != VAR_6->cover_frame->width || VAR_14 != VAR_6->cover_frame->height)
            return FUNC_0(VAR_1);
    }

    VAR_6->width = VAR_13;
    VAR_6->height = VAR_14;

    VAR_11 = FUNC_2(VAR_11, 0, VAR_4->width - VAR_13);
    VAR_12 = FUNC_2(VAR_12, 0, VAR_4->height - VAR_14);

    FUNC_4(VAR_4);

    if (VAR_6->mode == VAR_2) {
        FUNC_5 (VAR_6, VAR_4, VAR_11, VAR_12);
    } else {
        FUNC_6(VAR_6, VAR_4, VAR_11, VAR_12);
    }
    return FUNC_7(VAR_5->outputs[0], VAR_4);
}
