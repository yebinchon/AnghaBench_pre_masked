
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int block_align; } ;
struct TYPE_5__ {int duration; } ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int const*,int) ;

__attribute__((used)) static int FUNC_1(AVCodecParserContext *VAR_0, AVCodecContext *VAR_1,
                        const uint8_t **VAR_2, int *VAR_3,
                        const uint8_t *VAR_4, int VAR_5)
{
    if (VAR_5 >= 248)
        VAR_0->duration = FUNC_0(VAR_4 + 244, VAR_1->block_align == 8640);



    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_5;
}
