
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;


 int* FUNC_0 (int*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




__attribute__((used)) static UINT8 *FUNC_1( UINT8 *VAR_6, UINT8 VAR_7,
                                     UINT8 *VAR_8, UINT8 *VAR_9 )
{
    UINT8 *VAR_10;
    UINT8 VAR_11, VAR_12;
    UINT8 VAR_13;

    switch ( VAR_7 ) {
    case 129:
        VAR_11 = VAR_1;
        VAR_12 = VAR_4;
        break;
    case 128:
        VAR_11 = VAR_2;
        VAR_12 = VAR_5;
        break;
    case 130:
        VAR_11 = VAR_0;
        VAR_12 = VAR_3;
        break;
    default:
        *VAR_8 = 0;
        return ((void*)0);
        break;
    }

    VAR_10 = FUNC_0( VAR_6, VAR_11, &VAR_13 );
    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_0( VAR_6, VAR_12, &VAR_13 );
        *VAR_9 = VAR_12;
    } else {
        *VAR_9 = VAR_11;
    }

    *VAR_8 = VAR_13 / VAR_7;
    return VAR_10;
}
