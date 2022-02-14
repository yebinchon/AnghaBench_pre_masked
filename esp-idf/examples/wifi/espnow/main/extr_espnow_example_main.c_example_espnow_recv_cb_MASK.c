
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int data_len; int * data; int * mac_addr; } ;
struct TYPE_5__ {TYPE_3__ recv_cb; } ;
struct TYPE_6__ {int id; TYPE_1__ info; } ;
typedef TYPE_2__ example_espnow_event_t ;
typedef TYPE_3__ example_espnow_event_recv_cb_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(const uint8_t *VAR_6, const uint8_t *VAR_7, int VAR_8)
{
    example_espnow_event_t VAR_9;
    example_espnow_event_recv_cb_t *VAR_10 = &VAR_9.info.recv_cb;

    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 <= 0) {
        FUNC_0(VAR_2, "Receive cb arg error");
        return;
    }

    VAR_9.id = VAR_1;
    FUNC_4(VAR_10->mac_addr, VAR_6, VAR_0);
    VAR_10->data = FUNC_3(VAR_8);
    if (VAR_10->data == ((void*)0)) {
        FUNC_0(VAR_2, "Malloc receive data fail");
        return;
    }
    FUNC_4(VAR_10->data, VAR_7, VAR_8);
    VAR_10->data_len = VAR_8;
    if (FUNC_5(VAR_5, &VAR_9, VAR_4) != VAR_3) {
        FUNC_1(VAR_2, "Send receive queue fail");
        FUNC_2(VAR_10->data);
    }
}
