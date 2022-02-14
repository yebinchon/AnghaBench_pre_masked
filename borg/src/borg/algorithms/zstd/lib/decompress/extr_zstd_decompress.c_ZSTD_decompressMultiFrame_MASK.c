
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_7__ {scalar_t__ staticSize; } ;
typedef TYPE_1__ ZSTD_DCtx ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void const*) ;
 void* FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_6 (TYPE_1__*,void*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_9 (TYPE_1__*,void*,size_t,void const**,size_t*) ;
 size_t FUNC_10 (void*,size_t,void const*,size_t const,void const*,size_t) ;
 scalar_t__ VAR_4 ;
 size_t FUNC_11 (void const*,size_t) ;
 scalar_t__ FUNC_12 (size_t const) ;
 scalar_t__ FUNC_13 (size_t const) ;
 scalar_t__ FUNC_14 (void const*,size_t) ;
 int FUNC_15 (int) ;
 int VAR_5 ;
 size_t FUNC_16 (void const*,size_t) ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_17(ZSTD_DCtx* VAR_7,
                                        void* VAR_8, size_t VAR_9,
                                  const void* VAR_10, size_t VAR_11,
                                  const void* VAR_12, size_t VAR_13,
                                  const ZSTD_DDict* VAR_14)
{
    void* const VAR_15 = VAR_8;
    int VAR_16 = 0;

    FUNC_1(5, "ZSTD_decompressMultiFrame");
    FUNC_15(VAR_12==((void*)0) || VAR_14==((void*)0));

    if (VAR_14) {
        VAR_12 = FUNC_4(VAR_14);
        VAR_13 = FUNC_5(VAR_14);
    }

    while (VAR_11 >= VAR_0) {
        { U32 const VAR_17 = FUNC_3(VAR_10);
            FUNC_1(4, "reading magic number %08X (expecting %08X)",
                        (unsigned)VAR_17, VAR_1);
            if ((VAR_17 & VAR_2) == VAR_3) {
                size_t const VAR_18 = FUNC_16(VAR_10, VAR_11);
                if (FUNC_13(VAR_18))
                    return VAR_18;
                if (VAR_11 < VAR_18) return FUNC_2(VAR_6);

                VAR_10 = (const BYTE *)VAR_10 + VAR_18;
                VAR_11 -= VAR_18;
                continue;
        } }

        if (VAR_14) {

            FUNC_0(FUNC_7(VAR_7, VAR_14));
        } else {


            FUNC_0(FUNC_8(VAR_7, VAR_12, VAR_13));
        }
        FUNC_6(VAR_7, VAR_8);

        { const size_t VAR_19 = FUNC_9(VAR_7, VAR_8, VAR_9,
                                                    &VAR_10, &VAR_11);
            if ( (FUNC_12(VAR_19) == VAR_4)
              && (VAR_16==1) ) {
                return FUNC_2(VAR_6);
            }
            if (FUNC_13(VAR_19)) return VAR_19;
            FUNC_15(VAR_19 <= VAR_9);
            VAR_8 = (BYTE*)VAR_8 + VAR_19;
            VAR_9 -= VAR_19;
        }
        VAR_16 = 1;
    }

    if (VAR_11) return FUNC_2(VAR_6);

    return (BYTE*)VAR_8 - (BYTE*)VAR_15;
}
