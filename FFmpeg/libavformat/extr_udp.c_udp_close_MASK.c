
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int close_req; int filters; int fifo; int udp_fd; int cond; int mutex; int circular_buffer_thread; scalar_t__ thread_started; int local_addr_storage; int dest_addr; scalar_t__ is_multicast; } ;
typedef TYPE_2__ UDPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_13(URLContext *VAR_2)
{
    UDPContext *VAR_3 = VAR_2->priv_data;
    if (VAR_3->is_multicast && (VAR_2->flags & VAR_0))
        FUNC_12(VAR_3->udp_fd, (struct sockaddr *)&VAR_3->dest_addr,(struct sockaddr *)&VAR_3->local_addr_storage);
    FUNC_2(VAR_3->udp_fd);
    FUNC_0(&VAR_3->fifo);
    FUNC_3(&VAR_3->filters);
    return 0;
}
