
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char read_opcode; int parent; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int esp_transport_handle_t ;


 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_5(esp_transport_handle_t VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
    transport_ws_t *VAR_6 = FUNC_2(VAR_2);
    int VAR_7;
    char VAR_8[VAR_0];
    char *VAR_9 = VAR_8, VAR_10, *VAR_11 = ((void*)0);
    int VAR_12;
    int VAR_13;
    if ((VAR_13 = FUNC_3(VAR_6->parent, VAR_5)) <= 0) {
        return VAR_13;
    }


    int VAR_14 = 2;
    if ((VAR_12 = FUNC_4(VAR_6->parent, VAR_9, VAR_14, VAR_5)) <= 0) {
        FUNC_1(VAR_1, "Error read data");
        return VAR_12;
    }
    VAR_6->read_opcode = (*VAR_9 & 0x0F);
    VAR_9 ++;
    VAR_10 = ((*VAR_9 >> 7) & 0x01);
    VAR_7 = (*VAR_9 & 0x7F);
    VAR_9++;
    FUNC_0(VAR_1, "Opcode: %d, mask: %d, len: %d\r\n", VAR_6->read_opcode, VAR_10, VAR_7);
    if (VAR_7 == 126) {

        if ((VAR_12 = FUNC_4(VAR_6->parent, VAR_9, VAR_14, VAR_5)) <= 0) {
            FUNC_1(VAR_1, "Error read data");
            return VAR_12;
        }
        VAR_7 = VAR_9[0] << 8 | VAR_9[1];
    } else if (VAR_7 == 127) {

        VAR_14 = 8;
        if ((VAR_12 = FUNC_4(VAR_6->parent, VAR_9, VAR_14, VAR_5)) <= 0) {
            FUNC_1(VAR_1, "Error read data");
            return VAR_12;
        }

        if (VAR_9[0] != 0 || VAR_9[1] != 0 || VAR_9[2] != 0 || VAR_9[3] != 0) {

            VAR_7 = 0xFFFFFFFF;
        } else {
            VAR_7 = VAR_9[4] << 24 | VAR_9[5] << 16 | VAR_9[6] << 8 | VAR_9[7];
        }
    }

    if (VAR_7 > VAR_4) {
        FUNC_0(VAR_1, "Actual data to receive (%d) are longer than ws buffer (%d)", VAR_7, VAR_4);
        VAR_7 = VAR_4;
    }


    if (VAR_7 != 0 && (VAR_12 = FUNC_4(VAR_6->parent, VAR_3, VAR_7, VAR_5)) <= 0) {
        FUNC_1(VAR_1, "Error read data");
        return VAR_12;
    }

    if (VAR_10) {
        VAR_11 = VAR_3;
        VAR_9 = VAR_3 + 4;
        for (int VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
            VAR_3[VAR_15] = (VAR_9[VAR_15] ^ VAR_11[VAR_15 % 4]);
        }
    }
    return VAR_7;
}
