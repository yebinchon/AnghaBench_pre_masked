
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtd ;
typedef scalar_t__ U32 ;
struct TYPE_6__ {void* tableLog; scalar_t__ tableType; scalar_t__ maxTableLog; } ;
struct TYPE_5__ {void* nbBits; void* byte; } ;
typedef int HUFv07_DTable ;
typedef TYPE_1__ HUFv07_DEltX2 ;
typedef TYPE_2__ DTableDesc ;
typedef void* BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 size_t FUNC_4 (void**,int,scalar_t__*,scalar_t__*,scalar_t__*,void const*,size_t) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int VAR_2 ;

size_t FUNC_6 (HUFv07_DTable* VAR_3, const void* VAR_4, size_t VAR_5)
{
    BYTE VAR_6[VAR_0 + 1];
    U32 VAR_7[VAR_1 + 1];
    U32 VAR_8 = 0;
    U32 VAR_9 = 0;
    size_t VAR_10;
    void* const VAR_11 = VAR_3 + 1;
    HUFv07_DEltX2* const VAR_12 = (HUFv07_DEltX2*)VAR_11;

    FUNC_1(sizeof(DTableDesc) == sizeof(HUFv07_DTable));


    VAR_10 = FUNC_4(VAR_6, VAR_0 + 1, VAR_7, &VAR_9, &VAR_8, VAR_4, VAR_5);
    if (FUNC_3(VAR_10)) return VAR_10;


    { DTableDesc VAR_13 = FUNC_2(VAR_3);
        if (VAR_8 > (U32)(VAR_13.maxTableLog+1)) return FUNC_0(VAR_2);
        VAR_13.tableType = 0;
        VAR_13.tableLog = (BYTE)VAR_8;
        FUNC_5(VAR_3, &VAR_13, sizeof(VAR_13));
    }


    { U32 VAR_14, VAR_15 = 0;
        for (VAR_14=1; VAR_14<VAR_8+1; VAR_14++) {
            U32 VAR_16 = VAR_15;
            VAR_15 += (VAR_7[VAR_14] << (VAR_14-1));
            VAR_7[VAR_14] = VAR_16;
    } }


    { U32 VAR_17;
        for (VAR_17=0; VAR_17<VAR_9; VAR_17++) {
            U32 const VAR_18 = VAR_6[VAR_17];
            U32 const VAR_19 = (1 << VAR_18) >> 1;
            U32 VAR_20;
            HUFv07_DEltX2 VAR_21;
            VAR_21.byte = (BYTE)VAR_17; VAR_21.nbBits = (BYTE)(VAR_8 + 1 - VAR_18);
            for (VAR_20 = VAR_7[VAR_18]; VAR_20 < VAR_7[VAR_18] + VAR_19; VAR_20++)
                VAR_12[VAR_20] = VAR_21;
            VAR_7[VAR_18] += VAR_19;
    } }

    return VAR_10;
}
