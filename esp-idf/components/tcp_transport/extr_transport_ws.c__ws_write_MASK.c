
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {int parent; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int esp_transport_handle_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (char*,int,int ) ;

__attribute__((used)) static int FUNC_5(esp_transport_handle_t VAR_4, int VAR_5, int VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
    transport_ws_t *VAR_10 = FUNC_1(VAR_4);
    char *VAR_11 = (char *)VAR_7;
    char VAR_12[VAR_0];
    char *VAR_13;
    int VAR_14 = 0, VAR_15;

    int VAR_16;
    if ((VAR_16 = FUNC_2(VAR_10->parent, VAR_9)) <= 0) {
        FUNC_0(VAR_1, "Error transport_poll_write");
        return VAR_16;
    }
    VAR_12[VAR_14++] = VAR_5;

    if (VAR_8 <= 125) {
        VAR_12[VAR_14++] = (uint8_t)(VAR_8 | VAR_6);
    } else if (VAR_8 < 65536) {
        VAR_12[VAR_14++] = VAR_2 | VAR_6;
        VAR_12[VAR_14++] = (uint8_t)(VAR_8 >> 8);
        VAR_12[VAR_14++] = (uint8_t)(VAR_8 & 0xFF);
    } else {
        VAR_12[VAR_14++] = VAR_3 | VAR_6;

        VAR_12[VAR_14++] = 0;
        VAR_12[VAR_14++] = 0;
        VAR_12[VAR_14++] = 0;
        VAR_12[VAR_14++] = 0;
        VAR_12[VAR_14++] = (uint8_t)((VAR_8 >> 24) & 0xFF);
        VAR_12[VAR_14++] = (uint8_t)((VAR_8 >> 16) & 0xFF);
        VAR_12[VAR_14++] = (uint8_t)((VAR_8 >> 8) & 0xFF);
        VAR_12[VAR_14++] = (uint8_t)((VAR_8 >> 0) & 0xFF);
    }

    if (VAR_6) {
        VAR_13 = &VAR_12[VAR_14];
        FUNC_4(VAR_12 + VAR_14, 4, 0);
        VAR_14 += 4;

        for (VAR_15 = 0; VAR_15 < VAR_8; ++VAR_15) {
            VAR_11[VAR_15] = (VAR_11[VAR_15] ^ VAR_13[VAR_15 % 4]);
        }
    }

    if (FUNC_3(VAR_10->parent, VAR_12, VAR_14, VAR_9) != VAR_14) {
        FUNC_0(VAR_1, "Error write header");
        return -1;
    }
    if (VAR_8 == 0) {
        return 0;
    }

    int VAR_17 = FUNC_3(VAR_10->parent, VAR_11, VAR_8, VAR_9);


    if (VAR_6) {
        VAR_13 = &VAR_12[VAR_14-4];
        for (VAR_15 = 0; VAR_15 < VAR_8; ++VAR_15) {
            VAR_11[VAR_15] = (VAR_11[VAR_15] ^ VAR_13[VAR_15 % 4]);
        }
    }
    return VAR_17;
}
