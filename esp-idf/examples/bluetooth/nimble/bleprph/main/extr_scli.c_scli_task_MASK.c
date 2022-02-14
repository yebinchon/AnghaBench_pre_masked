
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ uart_event_t ;
typedef int portTickType ;
typedef int linebuf ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {int max_cmdline_args; int max_cmdline_length; } ;
typedef TYPE_2__ esp_console_config_t ;
typedef int QueueHandle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int ,int,int *,int ) ;
 scalar_t__ FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_4)
{
    int VAR_5 = (int) VAR_4;
    uint8_t VAR_6[256];
    int VAR_7, VAR_8;
    esp_err_t VAR_9;
    QueueHandle_t VAR_10;
    uart_event_t VAR_11;

    FUNC_4(VAR_5, 256, 0, 8, &VAR_10, 0);

    esp_console_config_t VAR_12 = {
        .max_cmdline_args = 8,
        .max_cmdline_length = 256,
    };

    FUNC_0(&VAR_12);

    while (!VAR_3) {
        VAR_7 = 0;
        FUNC_2(VAR_6, 0, sizeof(VAR_6));
        do {
            VAR_9 = FUNC_8(VAR_10, (void * )&VAR_11, (portTickType)VAR_2);
            if (VAR_9 != VAR_1) {
                if (VAR_3 == 1) {
                    break;
                } else {
                    continue;
                }
            }
            if (VAR_11.type == VAR_0) {
                while (FUNC_5(VAR_5, (uint8_t *) &VAR_6[VAR_7], 1, 0)) {
                    if (VAR_6[VAR_7] == '\r') {
                        FUNC_6(VAR_5, "\r\n", 2);
                    } else {
                        FUNC_6(VAR_5, (char *) &VAR_6[VAR_7], 1);
                    }
                    VAR_7++;
                }
            }
        } while ((VAR_7 < 255) && VAR_6[VAR_7 - 1] != '\r');
        if (VAR_3) {
            break;
        }

        VAR_6[FUNC_3((char *)VAR_6) - 1] = '\0';
        VAR_9 = FUNC_1((char *) VAR_6, &VAR_8);
        if (VAR_9 < 0) {
            break;
        }
    }
    FUNC_7(((void*)0));
}
