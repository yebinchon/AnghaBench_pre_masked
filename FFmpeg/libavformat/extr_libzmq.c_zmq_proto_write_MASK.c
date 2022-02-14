
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int socket; } ;
typedef TYPE_1__ ZMQContext ;
struct TYPE_7__ {int interrupt_callback; int rw_timeout; TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int,int ,int *) ;
 int FUNC_2 (int ,unsigned char const*,int,int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
    int VAR_6;
    ZMQContext *VAR_7 = VAR_3->priv_data;

    VAR_6 = FUNC_1(VAR_3, VAR_7->socket, 1, VAR_3->rw_timeout, &VAR_3->interrupt_callback);
    if (VAR_6)
        return VAR_6;
    VAR_6 = FUNC_2(VAR_7->socket, VAR_4, VAR_5, 0);
    if (VAR_6 == -1) {
        FUNC_0(VAR_3, VAR_1, "Error occured during zmq_send(): %s\n", VAR_2);
        return VAR_0;
    }
    return VAR_6;
}
