
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int encrypt; int unicast; int broadcast; int len; int dest_mac; int * buffer; int delay; int count; int magic; scalar_t__ state; int peer_addr; int ifidx; int channel; } ;
typedef TYPE_1__ example_espnow_send_param_t ;
typedef int example_espnow_event_t ;
typedef TYPE_1__ esp_now_peer_info_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (TYPE_1__*) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,int) ;
 int FUNC_16 (int ,char*,int,TYPE_1__*,int,int *) ;

__attribute__((used)) static esp_err_t FUNC_17(void)
{
    example_espnow_send_param_t *VAR_16;

    VAR_15 = FUNC_15(VAR_5, sizeof(example_espnow_event_t));
    if (VAR_15 == ((void*)0)) {
        FUNC_1(VAR_10, "Create mutex fail");
        return VAR_7;
    }


    FUNC_0( FUNC_4() );
    FUNC_0( FUNC_6(VAR_12) );
    FUNC_0( FUNC_5(VAR_11) );


    FUNC_0( FUNC_7((uint8_t *)VAR_1) );


    esp_now_peer_info_t *VAR_17 = FUNC_11(sizeof(esp_now_peer_info_t));
    if (VAR_17 == ((void*)0)) {
        FUNC_1(VAR_10, "Malloc peer information fail");
        FUNC_14(VAR_15);
        FUNC_3();
        return VAR_7;
    }
    FUNC_13(VAR_17, 0, sizeof(esp_now_peer_info_t));
    VAR_17->channel = VAR_0;
    VAR_17->ifidx = VAR_6;
    VAR_17->encrypt = 0;
    FUNC_12(VAR_17->peer_addr, VAR_14, VAR_8);
    FUNC_0( FUNC_2(VAR_17) );
    FUNC_10(VAR_17);


    VAR_16 = FUNC_11(sizeof(example_espnow_send_param_t));
    FUNC_13(VAR_16, 0, sizeof(example_espnow_send_param_t));
    if (VAR_16 == ((void*)0)) {
        FUNC_1(VAR_10, "Malloc send parameter fail");
        FUNC_14(VAR_15);
        FUNC_3();
        return VAR_7;
    }
    VAR_16->unicast = 0;
    VAR_16->broadcast = 1;
    VAR_16->state = 0;
    VAR_16->magic = FUNC_8();
    VAR_16->count = VAR_2;
    VAR_16->delay = VAR_3;
    VAR_16->len = VAR_4;
    VAR_16->buffer = FUNC_11(VAR_4);
    if (VAR_16->buffer == ((void*)0)) {
        FUNC_1(VAR_10, "Malloc send buffer fail");
        FUNC_10(VAR_16);
        FUNC_14(VAR_15);
        FUNC_3();
        return VAR_7;
    }
    FUNC_12(VAR_16->dest_mac, VAR_14, VAR_8);
    FUNC_9(VAR_16);

    FUNC_16(VAR_13, "example_espnow_task", 2048, VAR_16, 4, ((void*)0));

    return VAR_9;
}
