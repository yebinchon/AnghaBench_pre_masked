
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBLE_ADDR_TYPE ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

BOOLEAN FUNC_3 (BOOLEAN VAR_2, BD_ADDR VAR_3, tBLE_ADDR_TYPE VAR_4)
{
    BOOLEAN VAR_5 = VAR_1;
    if(VAR_4 > VAR_0) {
        FUNC_0("wl_addr_type is error\n");
        return VAR_5;
    }

    if (VAR_2) {
        VAR_5 = FUNC_1 (VAR_4, VAR_3);
    }else{
        VAR_5 = FUNC_2 (VAR_4, VAR_3);
    }

    return VAR_5;


}
