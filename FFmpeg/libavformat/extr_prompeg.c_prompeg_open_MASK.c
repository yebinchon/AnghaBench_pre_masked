
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hostname ;
typedef int buf ;
struct TYPE_8__ {int max_packet_size; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int max_packet_size; } ;
struct TYPE_9__ {int l; int d; scalar_t__ ttl; int init; TYPE_4__* fec_row_hd; TYPE_4__* fec_col_hd; } ;
typedef TYPE_2__ PrompegContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,...) ;
 int FUNC_4 (int *,int ,int *,int ,char*,int,int*,int *,int ,char const*) ;
 int FUNC_5 (char*,int,char*,int *,char*,int,int *) ;
 int FUNC_6 (TYPE_4__**) ;
 scalar_t__ FUNC_7 (TYPE_4__**,char*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_8 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_5, const char *VAR_6, int VAR_7) {
    PrompegContext *VAR_8 = VAR_5->priv_data;
    AVDictionary *VAR_9 = ((void*)0);
    int VAR_10;
    char VAR_11[256];
    char VAR_12[1024];

    VAR_8->fec_col_hd = ((void*)0);
    VAR_8->fec_row_hd = ((void*)0);

    if (VAR_8->l * VAR_8->d > 100) {
        FUNC_3(VAR_5, VAR_0, "L * D must be <= 100\n");
        return FUNC_0(VAR_2);
    }

    FUNC_4(((void*)0), 0, ((void*)0), 0, VAR_11, sizeof (VAR_11), &VAR_10,
            ((void*)0), 0, VAR_6);

    if (VAR_10 < 1 || VAR_10 > VAR_4 - 4) {
        FUNC_3(VAR_5, VAR_0, "Invalid RTP base port %d\n", VAR_10);
        return FUNC_0(VAR_2);
    }

    if (VAR_8->ttl > 0) {
        FUNC_8(VAR_12, sizeof (VAR_12), "%d", VAR_8->ttl);
        FUNC_2(&VAR_9, "ttl", VAR_12, 0);
    }

    FUNC_5(VAR_12, sizeof (VAR_12), "udp", ((void*)0), VAR_11, VAR_10 + 2, ((void*)0));
    if (FUNC_7(&VAR_8->fec_col_hd, VAR_12, VAR_7, &VAR_5->interrupt_callback,
            &VAR_9, VAR_5->protocol_whitelist, VAR_5->protocol_blacklist, VAR_5) < 0)
        goto fail;
    FUNC_5(VAR_12, sizeof (VAR_12), "udp", ((void*)0), VAR_11, VAR_10 + 4, ((void*)0));
    if (FUNC_7(&VAR_8->fec_row_hd, VAR_12, VAR_7, &VAR_5->interrupt_callback,
            &VAR_9, VAR_5->protocol_whitelist, VAR_5->protocol_blacklist, VAR_5) < 0)
        goto fail;

    VAR_5->max_packet_size = VAR_8->fec_col_hd->max_packet_size;
    VAR_8->init = 1;

    FUNC_1(&VAR_9);
    FUNC_3(VAR_5, VAR_1, "ProMPEG CoP#3-R2 FEC L=%d D=%d\n", VAR_8->l, VAR_8->d);
    return 0;

fail:
    FUNC_6(&VAR_8->fec_col_hd);
    FUNC_6(&VAR_8->fec_row_hd);
    FUNC_1(&VAR_9);
    return FUNC_0(VAR_3);
}
