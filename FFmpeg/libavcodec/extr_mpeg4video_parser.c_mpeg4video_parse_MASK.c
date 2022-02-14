
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int flags; int * priv_data; } ;
typedef int ParseContext ;
typedef TYPE_1__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecParserContext *VAR_1,
                            AVCodecContext *VAR_2,
                            const uint8_t **VAR_3, int *VAR_4,
                            const uint8_t *VAR_5, int VAR_6)
{
    ParseContext *VAR_7 = VAR_1->priv_data;
    int VAR_8;

    if (VAR_1->flags & VAR_0) {
        VAR_8 = VAR_6;
    } else {
        VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);

        if (FUNC_0(VAR_7, VAR_8, &VAR_5, &VAR_6) < 0) {
            *VAR_3 = ((void*)0);
            *VAR_4 = 0;
            return VAR_6;
        }
    }
    FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6);

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_8;
}
