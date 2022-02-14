
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pkt_size; int context; void* socket; scalar_t__ pkt_size_overflow; } ;
typedef TYPE_1__ ZMQContext ;
struct TYPE_6__ {int is_streamed; scalar_t__ max_packet_size; int flags; TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,char*,int ) ;
 void* FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_8, const char *VAR_9, int VAR_10)
{
    int VAR_11;
    ZMQContext *VAR_12 = VAR_8->priv_data;
    VAR_12->pkt_size_overflow = 0;
    VAR_8->is_streamed = 1;

    if (VAR_12->pkt_size > 0)
        VAR_8->max_packet_size = VAR_12->pkt_size;

    VAR_12->context = FUNC_5();
    if (!VAR_12->context) {

        FUNC_0(VAR_8, VAR_3, "Error occured during zmq_ctx_new()\n");
        return VAR_0;
    }

    FUNC_1(VAR_9, "zmq:", &VAR_9);


    if (VAR_8->flags & VAR_2) {
        VAR_12->socket = FUNC_8(VAR_12->context, VAR_4);
        if (!VAR_12->socket) {
            FUNC_0(VAR_8, VAR_3, "Error occured during zmq_socket(): %s\n", VAR_5);
            FUNC_6(VAR_12->context);
            return VAR_0;
        }

        VAR_11 = FUNC_2(VAR_12->socket, VAR_9);
        if (VAR_11 == -1) {
            FUNC_0(VAR_8, VAR_3, "Error occured during zmq_bind(): %s\n", VAR_5);
            FUNC_3(VAR_12->socket);
            FUNC_6(VAR_12->context);
            return VAR_0;
        }
    }


    if (VAR_8->flags & VAR_1) {
        VAR_12->socket = FUNC_8(VAR_12->context, VAR_6);
        if (!VAR_12->socket) {
            FUNC_0(VAR_8, VAR_3, "Error occured during zmq_socket(): %s\n", VAR_5);
            FUNC_6(VAR_12->context);
            return VAR_0;
        }

        FUNC_7(VAR_12->socket, VAR_7, "", 0);
        VAR_11 = FUNC_4(VAR_12->socket, VAR_9);
        if (VAR_11 == -1) {
            FUNC_0(VAR_8, VAR_3, "Error occured during zmq_connect(): %s\n", VAR_5);
            FUNC_3(VAR_12->socket);
            FUNC_6(VAR_12->context);
            return VAR_0;
        }
    }
    return 0;
}
