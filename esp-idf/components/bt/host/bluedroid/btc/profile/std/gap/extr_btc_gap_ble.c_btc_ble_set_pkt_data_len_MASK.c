
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int tBTA_SET_PKT_DATA_LENGTH_CBACK ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(BD_ADDR VAR_2, uint16_t VAR_3, tBTA_SET_PKT_DATA_LENGTH_CBACK *VAR_4)
{
    if (VAR_3 > VAR_0) {
        VAR_3 = VAR_0;
    } else if (VAR_3 < VAR_1) {
        VAR_3 = VAR_1;
    }

    FUNC_0(VAR_2, VAR_3, VAR_4);
}
