
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int mb_slave_interface_t ;
typedef scalar_t__ mb_port_type_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int ,int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,void**) ;
 int * VAR_3 ;

esp_err_t FUNC_2(mb_port_type_t VAR_4, void** VAR_5)
{
    void* VAR_6 = ((void*)0);
    esp_err_t VAR_7 = VAR_1;
    switch(VAR_4)
    {
        case 129:

            VAR_7 = FUNC_1(VAR_4, &VAR_6);
            break;
        case 128:


            return VAR_1;
        default:
            return VAR_1;
    }
    FUNC_0((VAR_6 != ((void*)0)),
                    VAR_0,
                    "Slave interface initialization failure, error=(0x%x), port type=(0x%x).",
                    VAR_7, (uint16_t)VAR_4);

    if ((VAR_6 != ((void*)0)) && (VAR_7 == VAR_2)) {
        VAR_3 = (mb_slave_interface_t*) VAR_6;
        *VAR_5 = VAR_6;
    }

    return VAR_7;
}
