
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; char* path; char* sub_protocol; int parent; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int random_key ;
typedef int expected_server_sha1 ;
typedef int expected_server_magic ;
typedef int expected_server_key ;
typedef int esp_transport_handle_t ;
typedef int client_key ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,char const*,int,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;
 scalar_t__ FUNC_5 (int ,char*,int,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (unsigned char*,int,int ) ;
 int FUNC_8 (unsigned char*,int,size_t*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,size_t,unsigned char*) ;
 int FUNC_10 (char*,int,char*,...) ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 size_t FUNC_14 (char*) ;
 int * FUNC_15 (char*,char*) ;

__attribute__((used)) static int FUNC_16(esp_transport_handle_t VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
    transport_ws_t *VAR_6 = FUNC_3(VAR_2);
    if (FUNC_2(VAR_6->parent, VAR_3, VAR_4, VAR_5) < 0) {
        FUNC_1(VAR_1, "Error connecting to host %s:%d", VAR_3, VAR_4);
        return -1;
    }

    unsigned char VAR_7[16];
    FUNC_7(VAR_7, sizeof(VAR_7), 0);


    unsigned char VAR_8[28] = {0};

    size_t VAR_9 = 0;
    FUNC_8(VAR_8, sizeof(VAR_8), &VAR_9, VAR_7, sizeof(VAR_7));
    int VAR_10 = FUNC_10(VAR_6->buffer, VAR_0,
                         "GET %s HTTP/1.1\r\n"
                         "Connection: Upgrade\r\n"
                         "Host: %s:%d\r\n"
                         "Upgrade: websocket\r\n"
                         "Sec-WebSocket-Version: 13\r\n"
                         "Sec-WebSocket-Key: %s\r\n"
                         "User-Agent: ESP32 Websocket Client\r\n",
                         VAR_6->path,
                         VAR_3, VAR_4,
                         VAR_8);
    if (VAR_10 <= 0 || VAR_10 >= VAR_0) {
        FUNC_1(VAR_1, "Error in request generation, %d", VAR_10);
        return -1;
    }
    if (VAR_6->sub_protocol) {
        int VAR_11 = FUNC_10(VAR_6->buffer + VAR_10, VAR_0 - VAR_10, "Sec-WebSocket-Protocol: %s\r\n", VAR_6->sub_protocol);
        VAR_10 += VAR_11;
        if (VAR_11 <= 0 || VAR_10 >= VAR_0) {
            FUNC_1(VAR_1, "Error in request generation"
                          "(snprintf of subprotocol returned %d, desired request len: %d, buffer size: %d", VAR_11, VAR_10, VAR_0);
            return -1;
        }
    }
    int VAR_12 = FUNC_10(VAR_6->buffer + VAR_10, VAR_0 - VAR_10, "\r\n");
    VAR_10 += VAR_12;
    if (VAR_12 <= 0 || VAR_10 >= VAR_0) {
        FUNC_1(VAR_1, "Error in request generation"
                       "(snprintf of header terminal returned %d, desired request len: %d, buffer size: %d", VAR_12, VAR_10, VAR_0);
        return -1;
    }
    FUNC_0(VAR_1, "Write upgrate request\r\n%s", VAR_6->buffer);
    if (FUNC_5(VAR_6->parent, VAR_6->buffer, VAR_10, VAR_5) <= 0) {
        FUNC_1(VAR_1, "Error write Upgrade header %s", VAR_6->buffer);
        return -1;
    }
    int VAR_13 = 0;
    do {
        if ((VAR_10 = FUNC_4(VAR_6->parent, VAR_6->buffer + VAR_13, VAR_0 - VAR_13, VAR_5)) <= 0) {
            FUNC_1(VAR_1, "Error read response for Upgrade header %s", VAR_6->buffer);
            return -1;
        }
        VAR_13 += VAR_10;
        VAR_6->buffer[VAR_13] = '\0';
        FUNC_0(VAR_1, "Read header chunk %d, current header size: %d", VAR_10, VAR_13);
    } while (((void*)0) == FUNC_15(VAR_6->buffer, "\r\n\r\n") && VAR_13 < VAR_0);

    char *VAR_14 = FUNC_6(VAR_6->buffer, "Sec-WebSocket-Accept:");
    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_1, "Sec-WebSocket-Accept not found");
        return -1;
    }


    unsigned char VAR_15[20];

    unsigned char VAR_16[33] = {0};

    const char VAR_17[] = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
    unsigned char VAR_18[sizeof(VAR_8) + sizeof(VAR_17) + 1];
    FUNC_13((char*)VAR_18, (char*)VAR_8);
    FUNC_11((char*)VAR_18, VAR_17);

    size_t VAR_19 = FUNC_14((char*)VAR_18);
    FUNC_9(VAR_18, VAR_19, VAR_15);
    FUNC_8(VAR_16, sizeof(VAR_16), &VAR_9, VAR_15, sizeof(VAR_15));
    VAR_16[ (VAR_9 < sizeof(VAR_16)) ? VAR_9 : (sizeof(VAR_16) - 1) ] = 0;
    FUNC_0(VAR_1, "server key=%s, send_key=%s, expected_server_key=%s", (char *)VAR_14, (char*)VAR_8, VAR_16);
    if (FUNC_12((char*)VAR_16, (char*)VAR_14) != 0) {
        FUNC_1(VAR_1, "Invalid websocket key");
        return -1;
    }
    return 0;
}
