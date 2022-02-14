
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ LATMParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecParserContext *VAR_1, AVCodecContext *VAR_2,
                      const uint8_t **VAR_3, int *VAR_4,
                      const uint8_t *VAR_5, int VAR_6)
{
    LATMParseContext *VAR_7 = VAR_1->priv_data;
    ParseContext *VAR_8 = &VAR_7->pc;
    int VAR_9;

    if (VAR_1->flags & VAR_0) {
        VAR_9 = VAR_6;
    } else {
        VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_6);

        if (FUNC_0(VAR_8, VAR_9, &VAR_5, &VAR_6) < 0) {
            *VAR_3 = ((void*)0);
            *VAR_4 = 0;
            return VAR_6;
        }
    }
    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_9;
}
