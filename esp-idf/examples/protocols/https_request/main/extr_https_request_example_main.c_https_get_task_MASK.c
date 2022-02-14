
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct esp_tls {int dummy; } ;
struct TYPE_3__ {scalar_t__ cacert_bytes; scalar_t__ cacert_buf; } ;
typedef TYPE_1__ esp_tls_cfg_t ;
typedef int buf ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct esp_tls*) ;
 struct esp_tls* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (struct esp_tls*,char*,int) ;
 int FUNC_7 (struct esp_tls*,scalar_t__,size_t) ;
 int VAR_5 ;
 int FUNC_8 (char) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(void *VAR_8)
{
    char VAR_9[512];
    int VAR_10, VAR_11;

    while(1) {
        esp_tls_cfg_t VAR_12 = {
            .cacert_buf = VAR_7,
            .cacert_bytes = VAR_6 - VAR_7,
        };

        struct esp_tls *VAR_13 = FUNC_5(VAR_4, &VAR_12);

        if(VAR_13 != ((void*)0)) {
            FUNC_2(VAR_3, "Connection established...");
        } else {
            FUNC_1(VAR_3, "Connection failed...");
            goto exit;
        }

        size_t VAR_14 = 0;
        do {
            VAR_10 = FUNC_7(VAR_13,
                                     VAR_2 + VAR_14,
                                     FUNC_9(VAR_2) - VAR_14);
            if (VAR_10 >= 0) {
                FUNC_2(VAR_3, "%d bytes written", VAR_10);
                VAR_14 += VAR_10;
            } else if (VAR_10 != VAR_0 && VAR_10 != VAR_1) {
                FUNC_1(VAR_3, "esp_tls_conn_write  returned 0x%x", VAR_10);
                goto exit;
            }
        } while(VAR_14 < FUNC_9(VAR_2));

        FUNC_2(VAR_3, "Reading HTTP response...");

        do
        {
            VAR_11 = sizeof(VAR_9) - 1;
            FUNC_3(VAR_9, sizeof(VAR_9));
            VAR_10 = FUNC_6(VAR_13, (char *)VAR_9, VAR_11);

            if(VAR_10 == VAR_1 || VAR_10 == VAR_0)
                continue;

            if(VAR_10 < 0)
           {
                FUNC_1(VAR_3, "esp_tls_conn_read  returned -0x%x", -VAR_10);
                break;
            }

            if(VAR_10 == 0)
            {
                FUNC_2(VAR_3, "connection closed");
                break;
            }

            VAR_11 = VAR_10;
            FUNC_0(VAR_3, "%d bytes read", VAR_11);

            for(int VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
                FUNC_8(VAR_9[VAR_15]);
            }
        } while(1);

    exit:
        FUNC_4(VAR_13);
        FUNC_8('\n');

        static int VAR_16;
        FUNC_2(VAR_3, "Completed %d requests", ++VAR_16);

        for(int VAR_17 = 10; VAR_17 >= 0; VAR_17--) {
            FUNC_2(VAR_3, "%d...", VAR_17);
            FUNC_10(1000 / VAR_5);
        }
        FUNC_2(VAR_3, "Starting again!");
    }
}
