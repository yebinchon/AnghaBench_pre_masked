
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int statusmsg ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int * nb_prev_pkt; int * prev_pkt; int out_chunk_size; int stream; } ;
struct TYPE_11__ {int size; int * data; int extra; int member_0; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int **,char*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **,char const*) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_10 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_4, RTMPPacket *VAR_5,
                        const char *VAR_6, const char *VAR_7)
{
    RTMPContext *VAR_8 = VAR_4->priv_data;
    RTMPPacket VAR_9 = { 0 };
    char VAR_10[128];
    uint8_t *VAR_11;
    int VAR_12;

    if ((VAR_12 = FUNC_7(&VAR_9, VAR_3,
                                     VAR_2, 0,
                                     VAR_1)) < 0) {
        FUNC_0(VAR_4, VAR_0, "Unable to create response packet\n");
        return VAR_12;
    }

    VAR_11 = VAR_9.data;
    VAR_9.extra = VAR_5->extra;
    FUNC_6(&VAR_11, "onStatus");
    FUNC_3(&VAR_11, 0);
    FUNC_2(&VAR_11);

    FUNC_5(&VAR_11);
    FUNC_1(&VAR_11, "level");
    FUNC_6(&VAR_11, "status");
    FUNC_1(&VAR_11, "code");
    FUNC_6(&VAR_11, VAR_6);
    FUNC_1(&VAR_11, "description");
    FUNC_10(VAR_10, sizeof(VAR_10),
             "%s is now published", VAR_7);
    FUNC_6(&VAR_11, VAR_10);
    FUNC_1(&VAR_11, "details");
    FUNC_6(&VAR_11, VAR_7);
    FUNC_4(&VAR_11);

    VAR_9.size = VAR_11 - VAR_9.data;
    VAR_12 = FUNC_9(VAR_8->stream, &VAR_9, VAR_8->out_chunk_size,
                               &VAR_8->prev_pkt[1], &VAR_8->nb_prev_pkt[1]);
    FUNC_8(&VAR_9);

    return VAR_12;
}
