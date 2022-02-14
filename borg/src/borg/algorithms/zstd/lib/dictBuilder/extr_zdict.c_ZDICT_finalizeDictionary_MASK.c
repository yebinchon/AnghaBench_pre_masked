
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compressionLevel; unsigned int notificationLevel; unsigned int const dictID; } ;
typedef TYPE_1__ ZDICT_params_t ;
typedef unsigned int U64 ;
typedef unsigned int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned int const) ;
 unsigned int FUNC_4 (void const*,size_t,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_5 (int *,int,int const,void const*,size_t const*,unsigned int,void const*,size_t,unsigned int const) ;
 scalar_t__ FUNC_6 (size_t const) ;
 unsigned int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (void*,int *,size_t) ;
 int FUNC_8 (char*,void const*,size_t) ;
 int VAR_6 ;

size_t FUNC_9(void* VAR_7, size_t VAR_8,
                          const void* VAR_9, size_t VAR_10,
                          const void* VAR_11, const size_t* VAR_12,
                          unsigned VAR_13, ZDICT_params_t VAR_14)
{
    size_t VAR_15;

    BYTE VAR_16[256];
    int const VAR_17 = (VAR_14.compressionLevel == 0) ? VAR_5 : VAR_14.compressionLevel;
    U32 const VAR_18 = VAR_14.notificationLevel;


    FUNC_0(4, "ZDICT_finalizeDictionary");
    if (VAR_8 < VAR_10) return FUNC_2(VAR_4);
    if (VAR_10 < VAR_1) return FUNC_2(VAR_6);
    if (VAR_8 < VAR_2) return FUNC_2(VAR_4);


    FUNC_3(VAR_16, VAR_3);
    { U64 const VAR_19 = FUNC_4(VAR_9, VAR_10, 0);
        U32 const VAR_20 = (VAR_19 % ((1U<<31)-32768)) + 32768;
        U32 const VAR_21 = VAR_14.dictID ? VAR_14.dictID : VAR_20;
        FUNC_3(VAR_16+4, VAR_21);
    }
    VAR_15 = 8;


    FUNC_1(2, "\r%70s\r", "");
    FUNC_1(2, "statistics ... \n");
    { size_t const VAR_22 = FUNC_5(VAR_16+VAR_15, 256 -VAR_15,
                                  VAR_17,
                                  VAR_11, VAR_12, VAR_13,
                                  VAR_9, VAR_10,
                                  VAR_18);
        if (FUNC_6(VAR_22)) return VAR_22;
        VAR_15 += VAR_22;
    }


    if (VAR_15 + VAR_10 > VAR_8) VAR_10 = VAR_8 - VAR_15;
    { size_t const VAR_23 = VAR_15 + VAR_10;
        char* VAR_24 = (char*)VAR_7 + VAR_23;
        FUNC_8(VAR_24 - VAR_10, VAR_9, VAR_10);
        FUNC_7(VAR_7, VAR_16, VAR_15);
        return VAR_23;
    }
}
