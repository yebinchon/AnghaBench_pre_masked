
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lastBlock; } ;
typedef TYPE_1__ blockProperties_t ;
struct TYPE_6__ {scalar_t__ checksumFlag; scalar_t__ headerSize; } ;
typedef TYPE_2__ ZSTD_frameHeader ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t const VAR_3 ;
 size_t FUNC_2 (void const*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_4 (int const*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_5 (size_t const) ;
 scalar_t__ FUNC_6 (void const*,size_t) ;
 size_t FUNC_7 (void const*,size_t) ;
 int VAR_4 ;

size_t FUNC_8(const void *VAR_5, size_t VAR_6)
{




    if ( (VAR_6 >= VAR_2)
      && (FUNC_1(VAR_5) & VAR_0) == VAR_1 ) {
        return FUNC_7(VAR_5, VAR_6);
    } else {
        const BYTE* VAR_7 = (const BYTE*)VAR_5;
        const BYTE* const VAR_8 = VAR_7;
        size_t VAR_9 = VAR_6;
        ZSTD_frameHeader VAR_10;


        { size_t const VAR_11 = FUNC_3(&VAR_10, VAR_5, VAR_6);
            if (FUNC_5(VAR_11)) return VAR_11;
            if (VAR_11 > 0) return FUNC_0(VAR_4);
        }

        VAR_7 += VAR_10.headerSize;
        VAR_9 -= VAR_10.headerSize;


        while (1) {
            blockProperties_t VAR_12;
            size_t const VAR_13 = FUNC_4(VAR_7, VAR_9, &VAR_12);
            if (FUNC_5(VAR_13)) return VAR_13;

            if (VAR_3 + VAR_13 > VAR_9)
                return FUNC_0(VAR_4);

            VAR_7 += VAR_3 + VAR_13;
            VAR_9 -= VAR_3 + VAR_13;

            if (VAR_12.lastBlock) break;
        }

        if (VAR_10.checksumFlag) {
            if (VAR_9 < 4) return FUNC_0(VAR_4);
            VAR_7 += 4;
        }

        return VAR_7 - VAR_8;
    }
}
