
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int (* get_freq ) (int *,size_t,size_t*) ;int (* decode ) (int *,int *,size_t,size_t,size_t) ;int rc; int gb; } ;
typedef TYPE_1__ SCPRContext ;
typedef int RangeCoder ;
typedef int GetByteContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t,size_t*) ;
 int FUNC_1 (int *,int *,size_t,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(SCPRContext *VAR_2, uint32_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t *VAR_6)
{
    GetByteContext *VAR_7 = &VAR_2->gb;
    RangeCoder *VAR_8 = &VAR_2->rc;
    uint32_t VAR_9 = VAR_3[VAR_4];
    uint32_t VAR_10;
    uint32_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    int VAR_14, VAR_15;

    if ((VAR_15 = VAR_2->get_freq(VAR_8, VAR_9, &VAR_10)) < 0)
        return VAR_15;

    while (VAR_11 < VAR_4) {
        VAR_13 = VAR_3[VAR_11];
        if (VAR_10 >= VAR_12 + VAR_13)
            VAR_12 += VAR_13;
        else
            break;
        VAR_11++;
    }

    if (VAR_11 >= VAR_4)
        return VAR_0;

    if ((VAR_15 = VAR_2->decode(VAR_7, VAR_8, VAR_12, VAR_13, VAR_9)) < 0)
        return VAR_15;

    VAR_3[VAR_11] = VAR_13 + VAR_5;
    VAR_9 += VAR_5;
    if (VAR_9 > VAR_1) {
        VAR_9 = 0;
        for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
            uint32_t VAR_16 = (VAR_3[VAR_14] >> 1) + 1;
            VAR_3[VAR_14] = VAR_16;
            VAR_9 += VAR_16;
        }
    }

    VAR_3[VAR_4] = VAR_9;
    *VAR_6 = VAR_11;

    return 0;
}
