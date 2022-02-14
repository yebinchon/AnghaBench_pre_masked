
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_9__ {scalar_t__ buffer; } ;
struct TYPE_8__ {int val2; int next; int val1; } ;
typedef TYPE_1__ OpcodeTable ;
typedef TYPE_2__ GetByteContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(GetByteContext *VAR_1, uint32_t *VAR_2, uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    OpcodeTable VAR_6[1024];
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int64_t VAR_15;
    unsigned VAR_16, VAR_17, VAR_18;
    unsigned VAR_19;
    uint8_t *VAR_20 = (uint8_t *)VAR_1->buffer;

    VAR_12 = FUNC_4(VAR_2, VAR_6, VAR_5);
    if (VAR_12 < 0)
        return VAR_12;

    VAR_15 = FUNC_2(VAR_1);
    VAR_16 = ((VAR_15 + 7) >> 3) - 4;
    if (VAR_16 <= 0 || FUNC_1(VAR_1) < VAR_16)
        return VAR_0;

    VAR_18 = VAR_16;
    VAR_19 = FUNC_0(VAR_20 + VAR_16);
    VAR_11 = (((VAR_15 & 0xFF) - 1) & 7) + 15;
    VAR_10 = 32 - VAR_11;
    VAR_14 = (VAR_19 >> VAR_11) & 0x3FF;
    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        VAR_3[VAR_13] = VAR_6[VAR_14].val1;
        VAR_9 = VAR_6[VAR_14].val2;
        VAR_7 = VAR_9 + VAR_10;
        VAR_8 = (VAR_19 << VAR_10) >> 1 >> (31 - VAR_9);
        VAR_17 = VAR_18 - (VAR_7 >> 3);
        VAR_10 = VAR_7 & 7;
        VAR_14 = VAR_8 + VAR_6[VAR_14].next;
        VAR_18 = VAR_17;
        if (VAR_18 > VAR_16)
            return VAR_0;
        VAR_19 = FUNC_0(VAR_20 + VAR_18);
    }

    FUNC_3(VAR_1, ((VAR_15 + 7) >> 3) - 4);

    return 0;
}
