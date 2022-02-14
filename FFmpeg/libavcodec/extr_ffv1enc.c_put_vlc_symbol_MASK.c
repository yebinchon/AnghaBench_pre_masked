
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int error_sum; int drift; int bias; } ;
typedef TYPE_1__ VlcState ;
typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int,int ,int,int,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (TYPE_1__* const,int) ;

__attribute__((used)) static inline void FUNC_5(PutBitContext *VAR_0, VlcState *const VAR_1,
                                  int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    VAR_2 = FUNC_2(VAR_2 - VAR_1->bias, VAR_3);

    VAR_4 = VAR_1->count;
    VAR_5 = 0;
    while (VAR_4 < VAR_1->error_sum) {
        VAR_5++;
        VAR_4 += VAR_4;
    }

    FUNC_0(VAR_5 <= 13);

    VAR_6 = VAR_2 ^ ((2 * VAR_1->drift + VAR_1->count) >> 31);

    FUNC_1(((void*)0), "v:%d/%d bias:%d error:%d drift:%d count:%d k:%d\n", VAR_2, VAR_6,
            VAR_1->bias, VAR_1->error_sum, VAR_1->drift, VAR_1->count, VAR_5);
    FUNC_3(VAR_0, VAR_6, VAR_5, 12, VAR_3);

    FUNC_4(VAR_1, VAR_2);
}
