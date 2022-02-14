
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutBitContext ;


 int FUNC_0 (int *,int,int const) ;

__attribute__((used)) static int FUNC_1(PutBitContext *VAR_0, int VAR_1, int VAR_2,
                             const uint8_t *VAR_3, const uint8_t *VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_0(VAR_0, 4, VAR_1);
    FUNC_0(VAR_0, 4, VAR_2);

    VAR_5 = 0;
    for(VAR_6=1;VAR_6<=16;VAR_6++) {
        VAR_5 += VAR_3[VAR_6];
        FUNC_0(VAR_0, 8, VAR_3[VAR_6]);
    }

    for(VAR_6=0;VAR_6<VAR_5;VAR_6++)
        FUNC_0(VAR_0, 8, VAR_4[VAR_6]);

    return VAR_5 + 17;
}
