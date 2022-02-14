
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int int64_t ;
typedef int addr ;
struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int circular_buffer_error; int filters; int udp_fd; int mutex; int cond; scalar_t__ fifo; } ;
typedef TYPE_2__ UDPContext ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int *,int,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (struct sockaddr_storage*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int *,int *,struct timespec*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int,int ,struct sockaddr*,int*) ;

__attribute__((used)) static int FUNC_14(URLContext *VAR_6, uint8_t *VAR_7, int VAR_8)
{
    UDPContext *VAR_9 = VAR_6->priv_data;
    int VAR_10;
    struct sockaddr_storage VAR_11;
    socklen_t VAR_12 = sizeof(VAR_11);
    if (!(VAR_6->flags & VAR_0)) {
        VAR_10 = FUNC_9(VAR_9->udp_fd, 0);
        if (VAR_10 < 0)
            return VAR_10;
    }
    VAR_10 = FUNC_13(VAR_9->udp_fd, VAR_7, VAR_8, 0, (struct sockaddr *)&VAR_11, &VAR_12);
    if (VAR_10 < 0)
        return FUNC_8();
    if (FUNC_7(&VAR_11, &VAR_9->filters))
        return FUNC_0(VAR_3);
    return VAR_10;
}
