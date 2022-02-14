
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* display_definition; } ;
struct TYPE_7__ {int version; void* x; void* y; void* height; void* width; } ;
typedef TYPE_1__ DVBSubDisplayDefinition ;
typedef TYPE_2__ DVBSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 (int const**) ;
 int FUNC_3 (int const**) ;
 int FUNC_4 (TYPE_3__*,void*,void*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2,
                                                   const uint8_t *VAR_3,
                                                   int VAR_4)
{
    DVBSubContext *VAR_5 = VAR_2->priv_data;
    DVBSubDisplayDefinition *VAR_6 = VAR_5->display_definition;
    int VAR_7, VAR_8;

    if (VAR_4 < 5)
        return VAR_0;

    VAR_8 = FUNC_3(&VAR_3);
    VAR_7 = VAR_8 >> 4;
    if (VAR_6 && VAR_6->version == VAR_7)
        return 0;

    if (!VAR_6) {
        VAR_6 = FUNC_1(sizeof(*VAR_6));
        if (!VAR_6)
            return FUNC_0(VAR_1);
        VAR_5->display_definition = VAR_6;
    }

    VAR_6->version = VAR_7;
    VAR_6->x = 0;
    VAR_6->y = 0;
    VAR_6->width = FUNC_2(&VAR_3) + 1;
    VAR_6->height = FUNC_2(&VAR_3) + 1;
    if (!VAR_2->width || !VAR_2->height) {
        int VAR_9 = FUNC_4(VAR_2, VAR_6->width, VAR_6->height);
        if (VAR_9 < 0)
            return VAR_9;
    }

    if (VAR_8 & 1<<3) {
        if (VAR_4 < 13)
            return VAR_0;

        VAR_6->x = FUNC_2(&VAR_3);
        VAR_6->width = FUNC_2(&VAR_3) - VAR_6->x + 1;
        VAR_6->y = FUNC_2(&VAR_3);
        VAR_6->height = FUNC_2(&VAR_3) - VAR_6->y + 1;
    }

    return 0;
}
