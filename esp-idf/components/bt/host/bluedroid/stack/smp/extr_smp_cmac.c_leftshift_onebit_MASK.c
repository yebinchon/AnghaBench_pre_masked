
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(UINT8 *VAR_1, UINT8 *VAR_2)
{
    UINT8 VAR_3, VAR_4 = 0 , VAR_5 = 0;
    FUNC_0 ("leftshift_onebit ");

    for ( VAR_3 = 0; VAR_3 < VAR_0 ; VAR_3 ++ ) {
        VAR_5 = (VAR_1[VAR_3] & 0x80) ? 1 : 0;
        VAR_2[VAR_3] = (VAR_1[VAR_3] << 1) | VAR_4;
        VAR_4 = VAR_5;
    }
    return;
}
