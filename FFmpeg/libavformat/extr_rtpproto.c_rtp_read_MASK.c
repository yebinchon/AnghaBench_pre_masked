
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int member_1; int revents; int fd; int member_2; int member_0; } ;
typedef int socklen_t ;
struct TYPE_4__ {int flags; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int last_rtp_source_len; int last_rtcp_source_len; int filters; struct sockaddr_storage last_rtcp_source; struct sockaddr_storage last_rtp_source; int rtcp_fd; int rtp_fd; } ;
typedef TYPE_2__ RTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sockaddr_storage*,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct pollfd*,int,int) ;
 int FUNC_5 (int ,int *,int,int ,struct sockaddr*,int*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_6, uint8_t *VAR_7, int VAR_8)
{
    RTPContext *VAR_9 = VAR_6->priv_data;
    int VAR_10, VAR_11, VAR_12;
    struct pollfd VAR_13[2] = {{VAR_9->rtp_fd, VAR_5, 0}, {VAR_9->rtcp_fd, VAR_5, 0}};
    int VAR_14 = VAR_6->flags & VAR_1 ? 0 : 100;
    struct sockaddr_storage *VAR_15[2] = { &VAR_9->last_rtp_source, &VAR_9->last_rtcp_source };
    socklen_t *VAR_16[2] = { &VAR_9->last_rtp_source_len, &VAR_9->last_rtcp_source_len };

    for(;;) {
        if (FUNC_1(&VAR_6->interrupt_callback))
            return VAR_0;
        VAR_11 = FUNC_4(VAR_13, 2, VAR_14);
        if (VAR_11 > 0) {

            for (VAR_12 = 1; VAR_12 >= 0; VAR_12--) {
                if (!(VAR_13[VAR_12].revents & VAR_5))
                    continue;
                *VAR_16[VAR_12] = sizeof(*VAR_15[VAR_12]);
                VAR_10 = FUNC_5(VAR_13[VAR_12].fd, VAR_7, VAR_8, 0,
                                (struct sockaddr *)VAR_15[VAR_12], VAR_16[VAR_12]);
                if (VAR_10 < 0) {
                    if (FUNC_3() == FUNC_0(VAR_2) ||
                        FUNC_3() == FUNC_0(VAR_3))
                        continue;
                    return FUNC_0(VAR_4);
                }
                if (FUNC_2(VAR_15[VAR_12], &VAR_9->filters))
                    continue;
                return VAR_10;
            }
        } else if (VAR_11 < 0) {
            if (FUNC_3() == FUNC_0(VAR_3))
                continue;
            return FUNC_0(VAR_4);
        }
        if (VAR_6->flags & VAR_1)
            return FUNC_0(VAR_2);
    }
}
