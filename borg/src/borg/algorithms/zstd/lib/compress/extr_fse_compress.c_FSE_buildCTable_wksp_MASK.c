
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_4__ {unsigned int deltaNbBits; unsigned int deltaFindState; } ;
typedef TYPE_1__ FSE_symbolCompressionTransform ;
typedef size_t FSE_FUNCTION_TYPE ;
typedef int FSE_CTable ;


 unsigned int FUNC_0 (short const) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (TYPE_1__* const,unsigned int,int,int) ;
 int FUNC_5 (TYPE_1__* const,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (size_t* const,int ,int) ;
 int VAR_1 ;

size_t FUNC_8(FSE_CTable* VAR_2,
                      const short* VAR_3, unsigned VAR_4, unsigned VAR_5,
                            void* VAR_6, size_t VAR_7)
{
    U32 const VAR_8 = 1 << VAR_5;
    U32 const VAR_9 = VAR_8 - 1;
    void* const VAR_10 = VAR_2;
    U16* const VAR_11 = ( (U16*) VAR_10) + 2;
    void* const VAR_12 = ((U32*)VAR_10) + 1 + (VAR_5 ? VAR_8>>1 : 1) ;
    FSE_symbolCompressionTransform* const VAR_13 = (FSE_symbolCompressionTransform*) (VAR_12);
    U32 const VAR_14 = FUNC_3(VAR_8);
    U32 VAR_15[VAR_0+2];

    FSE_FUNCTION_TYPE* const VAR_16 = (FSE_FUNCTION_TYPE*)VAR_6;
    U32 VAR_17 = VAR_8-1;


    if (((size_t)1 << VAR_5) * sizeof(FSE_FUNCTION_TYPE) > VAR_7) return FUNC_2(VAR_1);
    VAR_11[-2] = (U16) VAR_5;
    VAR_11[-1] = (U16) VAR_4;
    FUNC_6(VAR_5 < 16);
    { U32 VAR_18;
        VAR_15[0] = 0;
        for (VAR_18=1; VAR_18 <= VAR_4+1; VAR_18++) {
            if (VAR_3[VAR_18-1]==-1) {
                VAR_15[VAR_18] = VAR_15[VAR_18-1] + 1;
                VAR_16[VAR_17--] = (FSE_FUNCTION_TYPE)(VAR_18-1);
            } else {
                VAR_15[VAR_18] = VAR_15[VAR_18-1] + VAR_3[VAR_18-1];
        } }
        VAR_15[VAR_4+1] = VAR_8+1;
    }


    { U32 VAR_19 = 0;
        U32 VAR_20;
        for (VAR_20=0; VAR_20<=VAR_4; VAR_20++) {
            int VAR_21;
            int const VAR_22 = VAR_3[VAR_20];
            for (VAR_21=0; VAR_21<VAR_22; VAR_21++) {
                VAR_16[VAR_19] = (FSE_FUNCTION_TYPE)VAR_20;
                VAR_19 = (VAR_19 + VAR_14) & VAR_9;
                while (VAR_19 > VAR_17)
                    VAR_19 = (VAR_19 + VAR_14) & VAR_9;
        } }

        FUNC_6(VAR_19==0);
    }


    { U32 VAR_23; for (VAR_23=0; VAR_23<VAR_8; VAR_23++) {
        FSE_FUNCTION_TYPE VAR_24 = VAR_16[VAR_23];
        VAR_11[VAR_15[VAR_24]++] = (U16) (VAR_8+VAR_23);
    } }


    { unsigned VAR_25 = 0;
        unsigned VAR_26;
        for (VAR_26=0; VAR_26<=VAR_4; VAR_26++) {
            switch (VAR_3[VAR_26])
            {
            case 0:

                VAR_13[VAR_26].deltaNbBits = ((VAR_5+1) << 16) - (1<<VAR_5);
                break;

            case -1:
            case 1:
                VAR_13[VAR_26].deltaNbBits = (VAR_5 << 16) - (1<<VAR_5);
                VAR_13[VAR_26].deltaFindState = VAR_25 - 1;
                VAR_25 ++;
                break;
            default :
                {
                    U32 const VAR_27 = VAR_5 - FUNC_0 (VAR_3[VAR_26]-1);
                    U32 const VAR_28 = VAR_3[VAR_26] << VAR_27;
                    VAR_13[VAR_26].deltaNbBits = (VAR_27 << 16) - VAR_28;
                    VAR_13[VAR_26].deltaFindState = VAR_25 - VAR_3[VAR_26];
                    VAR_25 += VAR_3[VAR_26];
    } } } }
    return 0;
}
