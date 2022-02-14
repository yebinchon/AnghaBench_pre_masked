
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pkt_size_overflow; int socket; } ;
typedef TYPE_1__ ZMQContext ;
struct TYPE_7__ {int interrupt_callback; int rw_timeout; TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_3 (int ,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_4, unsigned char *VAR_5, int VAR_6)
{
    int VAR_7;
    ZMQContext *VAR_8 = VAR_4->priv_data;

    VAR_7 = FUNC_2(VAR_4, VAR_8->socket, 0, VAR_4->rw_timeout, &VAR_4->interrupt_callback);
    if (VAR_7)
        return VAR_7;
    VAR_7 = FUNC_3(VAR_8->socket, VAR_5, VAR_6, 0);
    if (VAR_7 == -1) {
        FUNC_1(VAR_4, VAR_1, "Error occured during zmq_recv(): %s\n", VAR_3);
        return VAR_0;
    }
    if (VAR_7 > VAR_6) {
        VAR_8->pkt_size_overflow = FUNC_0(VAR_8->pkt_size_overflow, VAR_7);
        FUNC_1(VAR_4, VAR_2, "Message exceeds available space in the buffer. Message will be truncated. Setting -pkt_size %d may resolve the issue.\n", VAR_8->pkt_size_overflow);
        VAR_7 = VAR_6;
    }
    return VAR_7;
}
