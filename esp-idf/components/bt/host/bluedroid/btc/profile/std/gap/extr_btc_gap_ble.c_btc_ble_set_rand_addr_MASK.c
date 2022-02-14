
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_SET_RAND_ADDR_CBACK ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int*,int (*) (int )) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static void FUNC_5 (BD_ADDR VAR_3, tBTA_SET_RAND_ADDR_CBACK *VAR_4)
{
    if (VAR_3 != ((void*)0)) {






        BD_ADDR VAR_5, VAR_6;
        FUNC_4(VAR_5, 0xff, sizeof(BD_ADDR));
        FUNC_4(VAR_6, 0x00, sizeof(BD_ADDR));
        VAR_6[0] = VAR_6[0] | VAR_2;
        if((VAR_3[0] & VAR_2) == VAR_2
            && FUNC_3(VAR_5, VAR_3, VAR_0) != 0
            && FUNC_3(VAR_6, VAR_3, VAR_0) != 0){
            FUNC_0(VAR_3, FUNC_2);
        } else {
            FUNC_2(VAR_1);
            FUNC_1("Invalid random address, the high bit should be 0b11, bits of the random part shall not be all 1 or 0");
        }
    } else {
        FUNC_2(VAR_1);
        FUNC_1("Invalid random addressm, the address value is NULL");
    }
}
