
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int AV1SequenceParameters ;



 int VAR_0 ;
 int FUNC_0 (int const*,int,int *,int*,int*,int*,int*) ;
 int FUNC_1 (int *,int const*,int ) ;

int FUNC_2(AV1SequenceParameters *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    int64_t VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;

    if (VAR_3 <= 0)
        return VAR_0;

    while (VAR_3 > 0) {
        int VAR_9 = FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5,
                                   &VAR_6, &VAR_7, &VAR_8);
        if (VAR_9 < 0)
            return VAR_9;

        switch (VAR_6) {
        case 128:
            if (!VAR_4)
                return VAR_0;

            return FUNC_1(VAR_1, VAR_2 + VAR_5, VAR_4);
        default:
            break;
        }
        VAR_3 -= VAR_9;
        VAR_2 += VAR_9;
    }

    return VAR_0;
}
