
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int metadata; int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char const* const,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (unsigned int const) ;
 unsigned int const FUNC_4 (int ,scalar_t__*,unsigned int const) ;
 scalar_t__ FUNC_5 (scalar_t__*,unsigned int const) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, const char *const VAR_4, const unsigned VAR_5)
{
    uint8_t *VAR_6;
    if (!(VAR_5 + 1))
        return FUNC_0(VAR_2);

    VAR_6 = FUNC_3(VAR_5 + 1);
    if (!VAR_6)
        return FUNC_0(VAR_2);

    if (FUNC_4(VAR_3->pb, VAR_6, VAR_5) != VAR_5) {
        FUNC_2(VAR_6);
        return FUNC_0(VAR_1);
    }

    if (FUNC_5(VAR_6, VAR_5)) {
        FUNC_2(VAR_6);
        return 0;
    }

    VAR_6[VAR_5] = 0;
    FUNC_1(&VAR_3->metadata, VAR_4, VAR_6, VAR_0);
    return 0;
}
