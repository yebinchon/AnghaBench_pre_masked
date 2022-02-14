
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,scalar_t__,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

BOOL FUNC_5(void)
{
    USHORT VAR_8 = 0;
    BOOL VAR_9 = VAR_1;

    if( VAR_6 ) {

        while((VAR_9 == VAR_1) && (VAR_8++ < VAR_2)) {

            VAR_9 = FUNC_2( );
        }
        FUNC_0(VAR_4, "MB_TX_buffer send: (%d) bytes\n", (uint16_t)VAR_8);

        esp_err_t VAR_10 = FUNC_3(VAR_7, VAR_3);
        FUNC_4(VAR_5, VAR_1);
        FUNC_1((VAR_10 == VAR_0), VAR_1, "mb serial sent buffer failure.");
        return VAR_5;
    }
    return VAR_1;
}
