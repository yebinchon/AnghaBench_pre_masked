
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct sctp_sndrcvinfo {scalar_t__ sinfo_stream; int member_0; } ;
struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ max_streams; int fd; } ;
typedef TYPE_2__ SCTPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int const*,int,struct sctp_sndrcvinfo*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int const*,int,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_5, const uint8_t *VAR_6, int VAR_7)
{
    SCTPContext *VAR_8 = VAR_5->priv_data;
    int VAR_9;

    if (!(VAR_5->flags & VAR_1)) {
        VAR_9 = FUNC_4(VAR_8->fd, 1);
        if (VAR_9 < 0)
            return VAR_9;
    }

    if (VAR_8->max_streams) {

        struct sctp_sndrcvinfo VAR_10 = { 0 };
        VAR_10.sinfo_stream = FUNC_0(VAR_6);
        if (VAR_10.sinfo_stream > VAR_8->max_streams) {
            FUNC_1(VAR_5, VAR_2, "bad input data\n");
            return VAR_0;
        }
        VAR_9 = FUNC_3(VAR_8->fd, VAR_6 + 2, VAR_7 - 2, &VAR_10, VAR_3);
    } else
        VAR_9 = FUNC_5(VAR_8->fd, VAR_6, VAR_7, VAR_4);

    return VAR_9 < 0 ? FUNC_2() : VAR_9;
}
