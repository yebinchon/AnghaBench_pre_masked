
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct variant_info {char const* bandwidth; TYPE_1__ member_0; } ;
struct variant {int duration; int bandwidth; int url; } ;
struct segment {int duration; int bandwidth; int url; } ;
typedef int line ;
typedef int int64_t ;
typedef int ff_parse_key_val_cb ;
struct TYPE_7__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_8__ {int finished; int target_duration; int start_seq_no; int last_load_time; int n_variants; int variants; int n_segments; int segments; } ;
typedef TYPE_3__ HLSContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 struct variant* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*,char const**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,struct variant*) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int ,int,char const*,char*) ;
 int FUNC_11 (char const*,int ,struct variant_info*) ;
 int FUNC_12 (int **,char const*,int ,int *,int *,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static int FUNC_15(URLContext *VAR_5, const char *VAR_6)
{
    HLSContext *VAR_7 = VAR_5->priv_data;
    AVIOContext *VAR_8;
    int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    int64_t VAR_13 = 0;
    char VAR_14[1024];
    const char *VAR_15;

    if ((VAR_9 = FUNC_12(&VAR_8, VAR_6, VAR_1,
                                   &VAR_5->interrupt_callback, ((void*)0),
                                   VAR_5->protocol_whitelist, VAR_5->protocol_blacklist)) < 0)
        return VAR_9;

    FUNC_9(VAR_8, VAR_14, sizeof(VAR_14));
    if (FUNC_14(VAR_14, "#EXTM3U")) {
        VAR_9 = VAR_0;
        goto fail;
    }

    FUNC_13(VAR_7);
    VAR_7->finished = 0;
    while (!FUNC_7(VAR_8)) {
        FUNC_9(VAR_8, VAR_14, sizeof(VAR_14));
        if (FUNC_5(VAR_14, "#EXT-X-STREAM-INF:", &VAR_15)) {
            struct variant_info VAR_16 = {0};
            VAR_11 = 1;
            FUNC_11(VAR_15, (ff_parse_key_val_cb) VAR_4,
                               &VAR_16);
            VAR_12 = FUNC_2(VAR_16.bandwidth);
        } else if (FUNC_5(VAR_14, "#EXT-X-TARGETDURATION:", &VAR_15)) {
            VAR_7->target_duration = FUNC_2(VAR_15) * VAR_2;
        } else if (FUNC_5(VAR_14, "#EXT-X-MEDIA-SEQUENCE:", &VAR_15)) {
            VAR_7->start_seq_no = FUNC_2(VAR_15);
        } else if (FUNC_5(VAR_14, "#EXT-X-ENDLIST", &VAR_15)) {
            VAR_7->finished = 1;
        } else if (FUNC_5(VAR_14, "#EXTINF:", &VAR_15)) {
            VAR_10 = 1;
            VAR_13 = FUNC_1(VAR_15) * VAR_2;
        } else if (FUNC_5(VAR_14, "#", ((void*)0))) {
            continue;
        } else if (VAR_14[0]) {
            if (VAR_10) {
                struct segment *VAR_17 = FUNC_4(sizeof(struct segment));
                if (!VAR_17) {
                    VAR_9 = FUNC_0(VAR_3);
                    goto fail;
                }
                VAR_17->duration = VAR_13;
                FUNC_10(VAR_17->url, sizeof(VAR_17->url), VAR_6, VAR_14);
                FUNC_8(&VAR_7->segments, &VAR_7->n_segments, VAR_17);
                VAR_10 = 0;
            } else if (VAR_11) {
                struct variant *VAR_18 = FUNC_4(sizeof(struct variant));
                if (!VAR_18) {
                    VAR_9 = FUNC_0(VAR_3);
                    goto fail;
                }
                VAR_18->bandwidth = VAR_12;
                FUNC_10(VAR_18->url, sizeof(VAR_18->url), VAR_6, VAR_14);
                FUNC_8(&VAR_7->variants, &VAR_7->n_variants, VAR_18);
                VAR_11 = 0;
            }
        }
    }
    VAR_7->last_load_time = FUNC_3();

fail:
    FUNC_6(VAR_8);
    return VAR_9;
}
