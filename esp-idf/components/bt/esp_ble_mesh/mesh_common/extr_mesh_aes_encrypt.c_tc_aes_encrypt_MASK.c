
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int state ;
struct TYPE_3__ {scalar_t__ words; } ;
typedef TYPE_1__* const TCAesKeySched_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int,int const*,int) ;
 int FUNC_1 (int const*,int ,int) ;
 int FUNC_2 (int const*,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

int FUNC_6(uint8_t *VAR_6, const uint8_t *VAR_7, const TCAesKeySched_t VAR_8)
{
    uint8_t VAR_9[VAR_1 * VAR_0];
    unsigned int VAR_10;

    if (VAR_6 == (uint8_t *) 0) {
        return VAR_3;
    } else if (VAR_7 == (const uint8_t *) 0) {
        return VAR_3;
    } else if (VAR_8 == (TCAesKeySched_t) 0) {
        return VAR_3;
    }

    (void)FUNC_0(VAR_9, sizeof(VAR_9), VAR_7, sizeof(VAR_9));
    FUNC_2(VAR_9, VAR_8->words);

    for (VAR_10 = 0; VAR_10 < (VAR_2 - 1); ++VAR_10) {
        FUNC_5(VAR_9);
        FUNC_4(VAR_9);
        FUNC_3(VAR_9);
        FUNC_2(VAR_9, VAR_8->words + VAR_0 * (VAR_10 + 1));
    }

    FUNC_5(VAR_9);
    FUNC_4(VAR_9);
    FUNC_2(VAR_9, VAR_8->words + VAR_0 * (VAR_10 + 1));

    (void)FUNC_0(VAR_6, sizeof(VAR_9), VAR_9, sizeof(VAR_9));


    FUNC_1(VAR_9, VAR_5, sizeof(VAR_9));

    return VAR_4;
}
