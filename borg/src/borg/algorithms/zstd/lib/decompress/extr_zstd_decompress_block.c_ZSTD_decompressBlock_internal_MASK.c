
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_longOffset_e ;
struct TYPE_8__ {unsigned long long windowSize; } ;
struct TYPE_9__ {int ddictIsCold; int OFTptr; TYPE_1__ fParams; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned long long VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_4 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_5 (TYPE_2__*,int*,int const*,size_t) ;
 size_t FUNC_6 (TYPE_2__*,void*,size_t,int const*,size_t,int,int const) ;
 size_t FUNC_7 (TYPE_2__*,void*,size_t,int const*,size_t,int,int const) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (size_t const) ;
 int VAR_3 ;

size_t
FUNC_10(ZSTD_DCtx* VAR_4,
                              void* VAR_5, size_t VAR_6,
                        const void* VAR_7, size_t VAR_8, const int VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_7;






    ZSTD_longOffset_e const VAR_11 = (ZSTD_longOffset_e)(FUNC_2() && (!VAR_9 || (VAR_4->fParams.windowSize > (1ULL << VAR_1))));
    FUNC_0(5, "ZSTD_decompressBlock_internal (size : %u)", (U32)VAR_8);

    if (VAR_8 >= VAR_2) return FUNC_1(VAR_3);


    { size_t const VAR_12 = FUNC_4(VAR_4, VAR_7, VAR_8);
        FUNC_0(5, "ZSTD_decodeLiteralsBlock : %u", (U32)VAR_12);
        if (FUNC_9(VAR_12)) return VAR_12;
        VAR_10 += VAR_12;
        VAR_8 -= VAR_12;
    }


    {






        int VAR_13 = VAR_4->ddictIsCold;

        int VAR_14;
        size_t const VAR_15 = FUNC_5(VAR_4, &VAR_14, VAR_10, VAR_8);
        if (FUNC_9(VAR_15)) return VAR_15;
        VAR_10 += VAR_15;
        VAR_8 -= VAR_15;



        if ( !VAR_13
          && (!VAR_9 || (VAR_4->fParams.windowSize > (1<<24)))
          && (VAR_14>VAR_0) ) {
            U32 const VAR_16 = FUNC_8(VAR_4->OFTptr);
            U32 const VAR_17 = FUNC_3() ? 7 : 20;
            VAR_13 = (VAR_16 >= VAR_17);
        }


        VAR_4->ddictIsCold = 0;



        if (VAR_13)


            return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_10, VAR_8, VAR_14, VAR_11);




        return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_10, VAR_8, VAR_14, VAR_11);

    }
}
