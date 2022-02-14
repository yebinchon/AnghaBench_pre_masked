
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ recv_buffer_size; scalar_t__ send_buffer_size; scalar_t__ tcp_nodelay; scalar_t__ tcp_mss; } ;
typedef TYPE_1__ TCPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_7, int VAR_8)
{
    TCPContext *VAR_9 = VAR_7;


    if (VAR_9->recv_buffer_size > 0) {
        if (FUNC_1 (VAR_8, VAR_2, VAR_3, &VAR_9->recv_buffer_size, sizeof (VAR_9->recv_buffer_size))) {
            FUNC_0(VAR_7, VAR_0, "setsockopt(SO_RCVBUF)");
        }
    }
    if (VAR_9->send_buffer_size > 0) {
        if (FUNC_1 (VAR_8, VAR_2, VAR_4, &VAR_9->send_buffer_size, sizeof (VAR_9->send_buffer_size))) {
            FUNC_0(VAR_7, VAR_0, "setsockopt(SO_SNDBUF)");
        }
    }
    if (VAR_9->tcp_nodelay > 0) {
        if (FUNC_1 (VAR_8, VAR_1, VAR_6, &VAR_9->tcp_nodelay, sizeof (VAR_9->tcp_nodelay))) {
            FUNC_0(VAR_7, VAR_0, "setsockopt(TCP_NODELAY)");
        }
    }

    if (VAR_9->tcp_mss > 0) {
        if (FUNC_1 (VAR_8, VAR_1, VAR_5, &VAR_9->tcp_mss, sizeof (VAR_9->tcp_mss))) {
            FUNC_0(VAR_7, VAR_0, "setsockopt(TCP_MAXSEG)");
        }
    }

}
