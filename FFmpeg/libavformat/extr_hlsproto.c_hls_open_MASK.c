
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int is_streamed; TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_10__ {int n_segments; int n_variants; scalar_t__ start_seq_no; scalar_t__ cur_seq_no; int finished; int playlisturl; TYPE_1__** variants; } ;
struct TYPE_8__ {int bandwidth; char const* url; } ;
typedef TYPE_3__ HLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (int ,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_6, const char *VAR_7, int VAR_8)
{
    HLSContext *VAR_9 = VAR_6->priv_data;
    int VAR_10, VAR_11;
    const char *VAR_12;

    if (VAR_8 & VAR_0)
        return FUNC_0(VAR_5);

    VAR_6->is_streamed = 1;

    if (FUNC_3(VAR_7, "hls+", &VAR_12)) {
        FUNC_2(VAR_9->playlisturl, VAR_12, sizeof(VAR_9->playlisturl));
    } else if (FUNC_3(VAR_7, "hls://", &VAR_12)) {
        FUNC_1(VAR_6, VAR_1,
               "No nested protocol specified. Specify e.g. hls+http://%s\n",
               VAR_12);
        VAR_10 = FUNC_0(VAR_3);
        goto fail;
    } else {
        FUNC_1(VAR_6, VAR_1, "Unsupported url %s\n", VAR_7);
        VAR_10 = FUNC_0(VAR_3);
        goto fail;
    }
    FUNC_1(VAR_6, VAR_2,
           "Using the hls protocol is discouraged, please try using the "
           "hls demuxer instead. The hls demuxer should be more complete "
           "and work as well as the protocol implementation. (If not, "
           "please report it.) To use the demuxer, simply use %s as url.\n",
           VAR_9->playlisturl);

    if ((VAR_10 = FUNC_5(VAR_6, VAR_9->playlisturl)) < 0)
        goto fail;

    if (VAR_9->n_segments == 0 && VAR_9->n_variants > 0) {
        int VAR_13 = 0, VAR_14 = -1;
        for (VAR_11 = 0; VAR_11 < VAR_9->n_variants; VAR_11++) {
            if (VAR_9->variants[VAR_11]->bandwidth > VAR_13 || VAR_11 == 0) {
                VAR_13 = VAR_9->variants[VAR_11]->bandwidth;
                VAR_14 = VAR_11;
            }
        }
        FUNC_2(VAR_9->playlisturl, VAR_9->variants[VAR_14]->url,
                   sizeof(VAR_9->playlisturl));
        if ((VAR_10 = FUNC_5(VAR_6, VAR_9->playlisturl)) < 0)
            goto fail;
    }

    if (VAR_9->n_segments == 0) {
        FUNC_1(VAR_6, VAR_2, "Empty playlist\n");
        VAR_10 = FUNC_0(VAR_4);
        goto fail;
    }
    VAR_9->cur_seq_no = VAR_9->start_seq_no;
    if (!VAR_9->finished && VAR_9->n_segments >= 3)
        VAR_9->cur_seq_no = VAR_9->start_seq_no + VAR_9->n_segments - 3;

    return 0;

fail:
    FUNC_4(VAR_6);
    return VAR_10;
}
