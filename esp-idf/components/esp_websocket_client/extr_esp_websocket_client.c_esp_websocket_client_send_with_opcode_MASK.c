
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ws_transport_opcodes_t ;
typedef TYPE_1__* esp_websocket_client_handle_t ;
typedef int TickType_t ;
struct TYPE_4__ {int buffer_size; int lock; scalar_t__ tx_buffer; int * transport; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,char const*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(esp_websocket_client_handle_t VAR_4, ws_transport_opcodes_t VAR_5, const char *VAR_6, int VAR_7, TickType_t VAR_8)
{
    int VAR_9 = VAR_7;
    int VAR_10 = 0, VAR_11 = 0;
    int VAR_12 = VAR_0;

    if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 <= 0) {
        FUNC_0(VAR_1, "Invalid arguments");
        return VAR_0;
    }

    if (FUNC_5(VAR_4->lock, VAR_8) != VAR_3) {
        FUNC_0(VAR_1, "Could not lock ws-client within %d timeout", VAR_8);
        return VAR_0;
    }

    if (!FUNC_2(VAR_4)) {
        FUNC_0(VAR_1, "Websocket client is not connected");
        goto unlock_and_return;
    }

    if (VAR_4->transport == ((void*)0)) {
        FUNC_0(VAR_1, "Invalid transport");
        goto unlock_and_return;
    }


    while (VAR_11 < VAR_7) {
        if (VAR_9 > VAR_4->buffer_size) {
            VAR_9 = VAR_4->buffer_size;
        }
        FUNC_3(VAR_4->tx_buffer, VAR_6 + VAR_11, VAR_9);

        VAR_10 = FUNC_1(VAR_4->transport, VAR_5, (char *)VAR_4->tx_buffer, VAR_9, VAR_8);
        if (VAR_10 <= 0) {
            VAR_12 = VAR_10;
            FUNC_0(VAR_1, "Network error: esp_transport_write() returned %d, errno=%d", VAR_12, VAR_2);
            goto unlock_and_return;
        }
        VAR_11 += VAR_10;
        VAR_9 = VAR_7 - VAR_11;
    }
    VAR_12 = VAR_11;
unlock_and_return:
    FUNC_4(VAR_4->lock);
    return VAR_12;
}
