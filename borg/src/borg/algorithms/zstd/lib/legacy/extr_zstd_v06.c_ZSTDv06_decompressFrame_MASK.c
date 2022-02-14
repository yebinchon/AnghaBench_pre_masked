
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int blockType; int member_1; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int ZSTDv06_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int *,int,int const*,size_t const) ;
 scalar_t__ FUNC_2 (int *,void const*,size_t const) ;
 size_t FUNC_3 (int *,int *,int,int const*,size_t const) ;
 size_t FUNC_4 (void const*,size_t) ;
 size_t VAR_2 ;
 size_t FUNC_5 (int const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (size_t const) ;




 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static size_t FUNC_7(ZSTDv06_DCtx* VAR_5,
                                 void* VAR_6, size_t VAR_7,
                                 const void* VAR_8, size_t VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_8;
    const BYTE* const VAR_11 = VAR_10 + VAR_9;
    BYTE* const VAR_12 = (BYTE* const)VAR_6;
    BYTE* VAR_13 = VAR_12;
    BYTE* const VAR_14 = VAR_12 + VAR_7;
    size_t VAR_15 = VAR_9;
    blockProperties_t VAR_16 = { 131, 0 };


    if (VAR_9 < VAR_2+VAR_1) return FUNC_0(VAR_4);


    { size_t const VAR_17 = FUNC_4(VAR_8, VAR_2);
        if (FUNC_6(VAR_17)) return VAR_17;
        if (VAR_9 < VAR_17+VAR_1) return FUNC_0(VAR_4);
        if (FUNC_2(VAR_5, VAR_8, VAR_17)) return FUNC_0(VAR_3);
        VAR_10 += VAR_17; VAR_15 -= VAR_17;
    }


    while (1) {
        size_t VAR_18=0;
        size_t const VAR_19 = FUNC_5(VAR_10, VAR_11-VAR_10, &VAR_16);
        if (FUNC_6(VAR_19)) return VAR_19;

        VAR_10 += VAR_1;
        VAR_15 -= VAR_1;
        if (VAR_19 > VAR_15) return FUNC_0(VAR_4);

        switch(VAR_16.blockType)
        {
        case 131:
            VAR_18 = FUNC_3(VAR_5, VAR_13, VAR_14-VAR_13, VAR_10, VAR_19);
            break;
        case 129 :
            VAR_18 = FUNC_1(VAR_13, VAR_14-VAR_13, VAR_10, VAR_19);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :

            if (VAR_15) return FUNC_0(VAR_4);
            break;
        default:
            return FUNC_0(VAR_0);
        }
        if (VAR_19 == 0) break;

        if (FUNC_6(VAR_18)) return VAR_18;
        VAR_13 += VAR_18;
        VAR_10 += VAR_19;
        VAR_15 -= VAR_19;
    }

    return VAR_13-VAR_12;
}
