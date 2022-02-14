
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int pc; } ;
typedef TYPE_1__ SiprParserContext ;
typedef int ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_0, AVCodecContext *VAR_1,
                      const uint8_t **VAR_2, int *VAR_3,
                      const uint8_t *VAR_4, int VAR_5)
{
    SiprParserContext *VAR_6 = VAR_0->priv_data;
    ParseContext *VAR_7 = &VAR_6->pc;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_1, VAR_4, VAR_5);
    if (FUNC_0(VAR_7, VAR_8, &VAR_4, &VAR_5) < 0) {
        *VAR_2 = ((void*)0);
        *VAR_3 = 0;
        return VAR_5;
    }

    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_8;
}
