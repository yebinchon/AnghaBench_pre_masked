
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ uart_event_t ;
typedef int linebuf ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {int max_cmdline_args; int max_cmdline_length; } ;
typedef TYPE_2__ esp_console_config_t ;
typedef int TickType_t ;
typedef int QueueHandle_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,int*) ;
 int FUNC_7 (char*,int ,int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,int,int ,int,int *,int ) ;
 scalar_t__ FUNC_10 (int,char*,int,int ) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,void*,int) ;

__attribute__((used)) static void FUNC_14(void *VAR_5)
{
    int VAR_6 = (int) VAR_5;
    uint8_t VAR_7[256];
    int VAR_8, VAR_9;
    esp_err_t VAR_10;
    QueueHandle_t VAR_11;
    uart_event_t VAR_12;

    FUNC_0(VAR_0, "Initializing UART on port %d", VAR_6);
    FUNC_9(VAR_6, 256, 0, 8, &VAR_11, 0);

    esp_console_config_t VAR_13 = {
            .max_cmdline_args = 8,
            .max_cmdline_length = 256,
    };

    FUNC_4(&VAR_13);
    FUNC_5();

    while (!FUNC_8()) {
        FUNC_11(VAR_6, "\n>> ", 4);
        FUNC_7(VAR_7, 0, sizeof(VAR_7));
        VAR_8 = 0;
        do {
            VAR_10 = FUNC_13(VAR_11, (void * )&VAR_12, (TickType_t) 10/VAR_4);
            if (VAR_10 != VAR_3) {
                if (FUNC_8()) {
                    break;
                } else {
                    continue;
                }
            }
            if (VAR_12.type == VAR_1) {
                while (FUNC_10(VAR_6, (uint8_t *) &VAR_7[VAR_8], 1, 0)) {
                    if (VAR_7[VAR_8] == '\r') {
                        FUNC_11(VAR_6, "\r\n", 2);
                    } else {
                        FUNC_11(VAR_6, (char *) &VAR_7[VAR_8], 1);
                    }
                    VAR_8++;
                }
            }
        } while ((VAR_8 < 255) && VAR_7[VAR_8-1] != '\r');
        if (FUNC_8()) {
            break;
        }
        VAR_10 = FUNC_6((char *) VAR_7, &VAR_9);
        if (VAR_10 < 0) {
            FUNC_1(VAR_0, "Console dispatcher error\n");
            break;
        }
    }

    VAR_2 = ((void*)0);
    FUNC_3();

    FUNC_2(VAR_0, "Console stopped");
    FUNC_12(((void*)0));
}
