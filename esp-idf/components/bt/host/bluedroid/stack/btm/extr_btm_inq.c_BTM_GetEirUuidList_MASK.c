
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef char* UINT32 ;
typedef char* UINT16 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (char*,int*) ;
 int* FUNC_5 (int*,int,int*,int*) ;
 int FUNC_6 (char*,char*,int) ;

UINT8 FUNC_7( UINT8 *VAR_3, UINT8 VAR_4, UINT8 *VAR_5,
                          UINT8 *VAR_6, UINT8 VAR_7)
{
    UINT8 *VAR_8;
    UINT8 VAR_9;
    UINT8 VAR_10, VAR_11;
    UINT16 *VAR_12 = (UINT16 *)VAR_6;
    UINT32 *VAR_13 = (UINT32 *)VAR_6;
    char VAR_14[VAR_0 * 2 + 1];

    VAR_8 = FUNC_5( VAR_3, VAR_4, VAR_5, &VAR_9 );
    if ( VAR_8 == ((void*)0) ) {
        return 0x00;
    }

    if ( *VAR_5 > VAR_7 ) {
        FUNC_1("BTM_GetEirUuidList number of uuid in EIR = %d, size of uuid list = %d\n",
                          *VAR_5, VAR_7 );
        *VAR_5 = VAR_7;
    }

    FUNC_0("BTM_GetEirUuidList type = %02X, number of uuid = %d\n", VAR_9, *VAR_5 );

    if ( VAR_4 == VAR_1 ) {
        for ( VAR_10 = 0; VAR_10 < *VAR_5; VAR_10++ ) {
            FUNC_3(*(VAR_12 + VAR_10), VAR_8);
            FUNC_0("                     0x%04X\n", *(VAR_12 + VAR_10));
        }
    } else if ( VAR_4 == VAR_2 ) {
        for ( VAR_10 = 0; VAR_10 < *VAR_5; VAR_10++ ) {
            FUNC_4(*(VAR_13 + VAR_10), VAR_8);
            FUNC_0("                     0x%08X\n", *(VAR_13 + VAR_10));
        }
    } else if ( VAR_4 == VAR_0 ) {
        for ( VAR_10 = 0; VAR_10 < *VAR_5; VAR_10++ ) {
            FUNC_2(VAR_6 + VAR_10 * VAR_0, VAR_8);
            for ( VAR_11 = 0; VAR_11 < VAR_0; VAR_11++ ) {
                FUNC_6(VAR_14 + VAR_11 * 2, "%02X", *(VAR_6 + VAR_10 * VAR_0 + VAR_11));
            }
            FUNC_0("                     0x%s\n", VAR_14);
        }
    }

    return VAR_9;
}
