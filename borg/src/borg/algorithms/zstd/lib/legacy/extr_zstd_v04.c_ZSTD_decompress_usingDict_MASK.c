
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int blockType; } ;
typedef TYPE_1__ blockProperties_t ;
struct TYPE_11__ {char const* dictEnd; char const* previousDstEnd; char const* vBase; char const* base; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int *,int,int const*,size_t) ;
 size_t FUNC_2 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_4 (TYPE_2__*,int *,int,int const*,size_t) ;
 int FUNC_5 (TYPE_2__*,void const*,size_t) ;
 size_t VAR_2 ;
 size_t FUNC_6 (int const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_2__*) ;




 int VAR_3 ;

__attribute__((used)) static size_t FUNC_9(ZSTD_DCtx* VAR_4,
                                 void* VAR_5, size_t VAR_6,
                                 const void* VAR_7, size_t VAR_8,
                                 const void* VAR_9, size_t VAR_10)
{
    const BYTE* VAR_11 = (const BYTE*)VAR_7;
    const BYTE* VAR_12 = VAR_11 + VAR_8;
    BYTE* const VAR_13 = (BYTE* const)VAR_5;
    BYTE* VAR_14 = VAR_13;
    BYTE* const VAR_15 = VAR_13 + VAR_6;
    size_t VAR_16 = VAR_8;
    blockProperties_t VAR_17;


    FUNC_8(VAR_4);
    if (VAR_9)
    {
        FUNC_5(VAR_4, VAR_9, VAR_10);
        VAR_4->dictEnd = VAR_4->previousDstEnd;
        VAR_4->vBase = (const char*)VAR_5 - ((const char*)(VAR_4->previousDstEnd) - (const char*)(VAR_4->base));
        VAR_4->base = VAR_5;
    }
    else
    {
        VAR_4->vBase = VAR_4->base = VAR_4->dictEnd = VAR_5;
    }


    {
        size_t VAR_18;
        if (VAR_8 < VAR_2+VAR_1) return FUNC_0(VAR_3);
        VAR_18 = FUNC_2(VAR_4, VAR_7, VAR_2);
        if (FUNC_7(VAR_18)) return VAR_18;
        if (VAR_8 < VAR_18+VAR_1) return FUNC_0(VAR_3);
        VAR_11 += VAR_18; VAR_16 -= VAR_18;
        VAR_18 = FUNC_3(VAR_4, VAR_7, VAR_18);
        if (FUNC_7(VAR_18)) return VAR_18;
    }


    while (1)
    {
        size_t VAR_19=0;
        size_t VAR_20 = FUNC_6(VAR_11, VAR_12-VAR_11, &VAR_17);
        if (FUNC_7(VAR_20)) return VAR_20;

        VAR_11 += VAR_1;
        VAR_16 -= VAR_1;
        if (VAR_20 > VAR_16) return FUNC_0(VAR_3);

        switch(VAR_17.blockType)
        {
        case 131:
            VAR_19 = FUNC_4(VAR_4, VAR_14, VAR_15-VAR_14, VAR_11, VAR_20);
            break;
        case 129 :
            VAR_19 = FUNC_1(VAR_14, VAR_15-VAR_14, VAR_11, VAR_20);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :

            if (VAR_16) return FUNC_0(VAR_3);
            break;
        default:
            return FUNC_0(VAR_0);
        }
        if (VAR_20 == 0) break;

        if (FUNC_7(VAR_19)) return VAR_19;
        VAR_14 += VAR_19;
        VAR_11 += VAR_20;
        VAR_16 -= VAR_20;
    }

    return VAR_14-VAR_13;
}
