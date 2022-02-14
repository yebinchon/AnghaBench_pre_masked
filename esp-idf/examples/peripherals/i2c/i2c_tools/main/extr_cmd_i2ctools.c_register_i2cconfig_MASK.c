
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; void* scl; void* sda; void* freq; void* port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,char*,char*,char*) ;
 void* FUNC_3 (int *,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    VAR_1.port = FUNC_2(((void*)0), "port", "<0|1>", "Set the I2C bus port number");
    VAR_1.freq = FUNC_2(((void*)0), "freq", "<Hz>", "Set the frequency(Hz) of I2C bus");
    VAR_1.sda = FUNC_3(((void*)0), "sda", "<gpio>", "Set the gpio for I2C SDA");
    VAR_1.scl = FUNC_3(((void*)0), "scl", "<gpio>", "Set the gpio for I2C SCL");
    VAR_1.end = FUNC_1(2);
    const esp_console_cmd_t VAR_2 = {
        .command = "i2cconfig",
        .help = "Config I2C bus",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0(FUNC_4(&VAR_2));
}
