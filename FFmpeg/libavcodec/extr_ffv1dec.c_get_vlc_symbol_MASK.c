
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int error_sum; int drift; scalar_t__ bias; } ;
typedef TYPE_1__ VlcState ;
typedef int GetBitContext ;


 int FUNC_0 (int *,char*,int,scalar_t__,int,int,int,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (TYPE_1__* const,int) ;

__attribute__((used)) static inline int FUNC_4(GetBitContext *VAR_0, VlcState *const VAR_1,
                                 int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_4 = VAR_1->count;
    VAR_3 = 0;
    while (VAR_4 < VAR_1->error_sum) {
        VAR_3++;
        VAR_4 += VAR_4;
    }

    VAR_5 = FUNC_2(VAR_0, VAR_3, 12, VAR_2);
    FUNC_0(((void*)0), "v:%d bias:%d error:%d drift:%d count:%d k:%d",
            VAR_5, VAR_1->bias, VAR_1->error_sum, VAR_1->drift, VAR_1->count, VAR_3);

    VAR_5 ^= ((2 * VAR_1->drift + VAR_1->count) >> 31);

    VAR_6 = FUNC_1(VAR_5 + VAR_1->bias, VAR_2);

    FUNC_3(VAR_1, VAR_5);

    return VAR_6;
}
