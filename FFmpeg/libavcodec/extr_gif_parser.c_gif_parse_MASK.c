
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int duration; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int delay; int pc; } ;
typedef TYPE_1__ GIFParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;
 int FUNC_1 (TYPE_1__*,int const*,int,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_0, AVCodecContext *VAR_1,
                     const uint8_t **VAR_2, int *VAR_3,
                     const uint8_t *VAR_4, int VAR_5)
{
    GIFParseContext *VAR_6 = VAR_0->priv_data;
    int VAR_7;

    VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5, VAR_1);
    if (FUNC_0(&VAR_6->pc, VAR_7, &VAR_4, &VAR_5) < 0) {
        *VAR_2 = ((void*)0);
        *VAR_3 = 0;
        return VAR_5;
    }

    VAR_0->duration = VAR_6->delay;

    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_7;
}
