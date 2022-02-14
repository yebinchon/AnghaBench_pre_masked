
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; void* data_length; void* register_address; int chip_address; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    VAR_1.chip_address = FUNC_3("c", "chip", "<chip_addr>", "Specify the address of the chip on that bus");
    VAR_1.register_address = FUNC_2("r", "register", "<register_addr>", "Specify the address on that chip to read from");
    VAR_1.data_length = FUNC_2("l", "length", "<length>", "Specify the length to read from that data address");
    VAR_1.end = FUNC_1(1);
    const esp_console_cmd_t VAR_2 = {
        .command = "i2cget",
        .help = "Read registers visible through the I2C bus",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0(FUNC_4(&VAR_2));
}
