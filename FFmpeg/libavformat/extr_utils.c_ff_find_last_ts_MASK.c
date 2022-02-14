
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pos_max ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,scalar_t__*,scalar_t__,scalar_t__ (*) (struct AVFormatContext*,int,scalar_t__*,scalar_t__)) ;

int FUNC_4(AVFormatContext *VAR_2, int VAR_3, int64_t *VAR_4, int64_t *VAR_5,
                    int64_t (*VAR_6)(struct AVFormatContext *, int , int64_t *, int64_t ))
{
    int64_t VAR_7 = 1024;
    int64_t VAR_8, VAR_9;
    int64_t VAR_10 = FUNC_2(VAR_2->pb);
    int64_t VAR_11 = VAR_10 - 1;
    do {
        VAR_8 = VAR_11;
        VAR_11 = FUNC_0(0, (VAR_11) - VAR_7);
        VAR_9 = FUNC_3(VAR_2, VAR_3,
                                    &VAR_11, VAR_8, VAR_6);
        VAR_7 += VAR_7;
    } while (VAR_9 == VAR_0 && 2*VAR_8 > VAR_7);
    if (VAR_9 == VAR_0)
        return -1;

    for (;;) {
        int64_t VAR_12 = VAR_11 + 1;
        int64_t VAR_13 = FUNC_3(VAR_2, VAR_3,
                                            &VAR_12, VAR_1, VAR_6);
        if (VAR_13 == VAR_0)
            break;
        FUNC_1(VAR_12 > VAR_11);
        VAR_9 = VAR_13;
        VAR_11 = VAR_12;
        if (VAR_12 >= VAR_10)
            break;
    }

    if (VAR_4)
        *VAR_4 = VAR_9;
    if (VAR_5)
        *VAR_5 = VAR_11;

    return 0;
}
