
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sctp_sndrcvinfo {int sinfo_stream; int member_0; } ;
struct TYPE_4__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int fd; scalar_t__ max_streams; } ;
typedef TYPE_2__ SCTPContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int,int *,int ,struct sctp_sndrcvinfo*,int ) ;
 int FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    SCTPContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;

    if (!(VAR_1->flags & VAR_0)) {
        VAR_5 = FUNC_4(VAR_4->fd, 0);
        if (VAR_5 < 0)
            return VAR_5;
    }

    if (VAR_4->max_streams) {

        struct sctp_sndrcvinfo VAR_6 = { 0 };
        VAR_5 = FUNC_2(VAR_4->fd, VAR_2 + 2, VAR_3 - 2, ((void*)0), 0, &VAR_6, 0);
        FUNC_0(VAR_2, VAR_6.sinfo_stream);
        VAR_5 = VAR_5 < 0 ? VAR_5 : VAR_5 + 2;
    } else
        VAR_5 = FUNC_3(VAR_4->fd, VAR_2, VAR_3, 0);

    return VAR_5 < 0 ? FUNC_1() : VAR_5;
}
