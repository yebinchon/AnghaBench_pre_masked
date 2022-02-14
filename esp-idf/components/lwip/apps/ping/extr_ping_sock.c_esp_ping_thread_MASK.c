
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_5__ {scalar_t__ seqno; int flags; scalar_t__ count; scalar_t__ sock; struct TYPE_5__* packet_hdr; int cb_args; int (* on_ping_end ) (int ,int ) ;int interval_ms; int (* on_ping_timeout ) (int ,int ) ;int (* on_ping_success ) (int ,int ) ;scalar_t__ elapsed_time_ms; scalar_t__ total_time_ms; scalar_t__ received; scalar_t__ transmitted; } ;
typedef TYPE_1__ esp_ping_t ;
typedef int esp_ping_handle_t ;
typedef int TickType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct timeval,struct timeval) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(void *VAR_4)
{
    esp_ping_t *VAR_5 = (esp_ping_t *)(VAR_4);
    TickType_t VAR_6;
    struct timeval VAR_7, VAR_8;
    int VAR_9;

    while (1) {

        if (FUNC_10(VAR_3, FUNC_6(VAR_0))) {

            VAR_5->packet_hdr->seqno = 0;
            VAR_5->transmitted = 0;
            VAR_5->received = 0;
            VAR_5->total_time_ms = 0;

            VAR_6 = FUNC_13();
            while ((VAR_5->flags & VAR_2) && ((VAR_5->count == 0) || (VAR_5->packet_hdr->seqno < VAR_5->count))) {
                FUNC_3(VAR_5);
                FUNC_5(&VAR_7, ((void*)0));
                VAR_9 = FUNC_2(VAR_5);
                FUNC_5(&VAR_8, ((void*)0));
                VAR_5->elapsed_time_ms = FUNC_0(VAR_8, VAR_7);
                VAR_5->total_time_ms += VAR_5->elapsed_time_ms;
                if (VAR_9 >= 0) {
                    if (VAR_5->on_ping_success) {
                        VAR_5->on_ping_success((esp_ping_handle_t)VAR_5, VAR_5->cb_args);
                    }
                } else {
                    if (VAR_5->on_ping_timeout) {
                        VAR_5->on_ping_timeout((esp_ping_handle_t)VAR_5, VAR_5->cb_args);
                    }
                }
                FUNC_11(&VAR_6, FUNC_6(VAR_5->interval_ms));
            }

            if (VAR_5->on_ping_end) {
                VAR_5->on_ping_end((esp_ping_handle_t)VAR_5, VAR_5->cb_args);
            }
        } else {

            if (!(VAR_5->flags & VAR_1)) {
                break;
            }
        }
    }

    if (VAR_5->packet_hdr) {
        FUNC_4(VAR_5->packet_hdr);
    }
    if (VAR_5->sock > 0) {
        FUNC_1(VAR_5->sock);
    }
    FUNC_4(VAR_5);
    FUNC_12(((void*)0));
}
