
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static esp_err_t FUNC_3(const char *VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
    FUNC_0( VAR_3 != ((void*)0));
    FUNC_0( VAR_2 != ((void*)0));


    uint16_t VAR_5 = FUNC_1(VAR_3, (VAR_4 - 2));
    uint16_t VAR_6 = ((uint16_t)(VAR_3[VAR_4 - 1]) << 8) | VAR_3[VAR_4 - 2];
    const char* VAR_7 = (VAR_6 != VAR_5) ? "incorrect " : "correct ";

    FUNC_2("%s%s RS485 packet = [ ", VAR_2, VAR_7);
    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            FUNC_2("0x%.2X ", (uint8_t)VAR_3[VAR_8]);
    }
    FUNC_2(" ]\r\n");
    FUNC_2("crc_in = 0x%.4X\r\n", (uint16_t)VAR_6);
    FUNC_2("crc_calc = 0x%.4X\r\n", (uint16_t)VAR_5);
    esp_err_t VAR_9 = (VAR_6 != VAR_5) ? VAR_0 : VAR_1;
    return VAR_9;
}
