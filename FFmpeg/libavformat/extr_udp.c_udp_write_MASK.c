
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int circular_buffer_error; int udp_fd; int dest_addr_len; int dest_addr; int is_connected; int mutex; int cond; scalar_t__ fifo; } ;
typedef TYPE_2__ UDPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *,int,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int const*,int,int ) ;
 int FUNC_10 (int ,int const*,int,int ,struct sockaddr*,int ) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    UDPContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;
    if (!(VAR_2->flags & VAR_0)) {
        VAR_6 = FUNC_5(VAR_5->udp_fd, 1);
        if (VAR_6 < 0)
            return VAR_6;
    }

    if (!VAR_5->is_connected) {
        VAR_6 = FUNC_10 (VAR_5->udp_fd, VAR_3, VAR_4, 0,
                      (struct sockaddr *) &VAR_5->dest_addr,
                      VAR_5->dest_addr_len);
    } else
        VAR_6 = FUNC_9(VAR_5->udp_fd, VAR_3, VAR_4, 0);

    return VAR_6 < 0 ? FUNC_4() : VAR_6;
}
