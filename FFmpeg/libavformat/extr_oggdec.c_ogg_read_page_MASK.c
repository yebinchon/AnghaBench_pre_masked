
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ogg_stream {int page_pos; scalar_t__ psize; char* segments; int nsegs; int segp; int got_data; int pstart; int sync_pos; int bufsize; int bufpos; char* buf; int flags; int granule; scalar_t__ incomplete; } ;
struct ogg {int page_pos; struct ogg_stream* streams; } ;
struct TYPE_16__ {struct ogg* priv_data; TYPE_1__* pb; } ;
struct TYPE_15__ {int seekable; } ;
typedef TYPE_1__ AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (struct ogg*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (struct ogg*,int ) ;
 int FUNC_16 (struct ogg*,int) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_19(AVFormatContext *VAR_11, int *VAR_12)
{
    AVIOContext *VAR_13 = VAR_11->pb;
    struct ogg *VAR_14 = VAR_11->priv_data;
    struct ogg_stream *VAR_15;
    int VAR_16, VAR_17 = 0;
    int VAR_18, VAR_19;
    uint64_t VAR_20;
    uint32_t VAR_21;
    int VAR_22, VAR_23;
    uint8_t VAR_24[4];
    int VAR_25 = 0;

    VAR_16 = FUNC_6(VAR_13, VAR_24, 4);
    if (VAR_16 < 4)
        return VAR_16 < 0 ? VAR_16 : VAR_0;

    do {
        int VAR_26;

        if (VAR_24[VAR_25 & 3] == 'O' &&
            VAR_24[(VAR_25 + 1) & 3] == 'g' &&
            VAR_24[(VAR_25 + 2) & 3] == 'g' && VAR_24[(VAR_25 + 3) & 3] == 'S')
            break;

        if(!VAR_17 && (VAR_13->seekable & VAR_2) && VAR_14->page_pos > 0) {
            FUNC_14(VAR_24, 0, 4);
            FUNC_9(VAR_13, VAR_14->page_pos+4, VAR_10);
            VAR_14->page_pos = -1;
        }

        VAR_26 = FUNC_5(VAR_13);

        if (FUNC_4(VAR_13))
            return VAR_0;

        VAR_24[VAR_25++ & 3] = VAR_26;
    } while (VAR_17++ < VAR_7);

    if (VAR_17 >= VAR_7) {
        FUNC_2(VAR_11, VAR_5, "cannot find sync word\n");
        return VAR_1;
    }

    if (FUNC_5(VAR_13) != 0) {
        FUNC_2 (VAR_11, VAR_4, "ogg page, unsupported version\n");
        return VAR_1;
    }

    VAR_18 = FUNC_5(VAR_13);
    VAR_20 = FUNC_8(VAR_13);
    VAR_21 = FUNC_7(VAR_13);
    FUNC_10(VAR_13, 8);
    VAR_19 = FUNC_5(VAR_13);

    VAR_23 = FUNC_15(VAR_14, VAR_21);
    if (VAR_23 < 0) {
        if (FUNC_12(VAR_14))
            VAR_23 = FUNC_18(VAR_11, VAR_21, VAR_19);
        else
            VAR_23 = FUNC_17(VAR_11, VAR_21);

        if (VAR_23 < 0) {
            FUNC_2(VAR_11, VAR_4, "failed to create or replace stream\n");
            return VAR_23;
        }
    }

    VAR_15 = VAR_14->streams + VAR_23;
    VAR_14->page_pos =
    VAR_15->page_pos = FUNC_11(VAR_13) - 27;

    if (VAR_15->psize > 0) {
        VAR_16 = FUNC_16(VAR_14, VAR_23);
        if (VAR_16 < 0)
            return VAR_16;
    }

    VAR_16 = FUNC_6(VAR_13, VAR_15->segments, VAR_19);
    if (VAR_16 < VAR_19)
        return VAR_16 < 0 ? VAR_16 : VAR_0;

    VAR_15->nsegs = VAR_19;
    VAR_15->segp = 0;

    VAR_22 = 0;
    for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
        VAR_22 += VAR_15->segments[VAR_17];

    if (!(VAR_18 & VAR_8))
        VAR_15->got_data = 1;

    if (VAR_18 & VAR_9 || VAR_15->incomplete) {
        if (!VAR_15->psize) {



            while (VAR_15->segp < VAR_15->nsegs) {
                int VAR_27 = VAR_15->segments[VAR_15->segp++];
                VAR_15->pstart += VAR_27;
                if (VAR_27 < 255)
                    break;
            }
            VAR_15->sync_pos = VAR_15->page_pos;
        }
    } else {
        VAR_15->psize = 0;
        VAR_15->sync_pos = VAR_15->page_pos;
    }

    if (VAR_15->bufsize - VAR_15->bufpos < VAR_22) {
        uint8_t *VAR_28 = FUNC_3((VAR_15->bufsize *= 2) + VAR_3);
        if (!VAR_28)
            return FUNC_0(VAR_6);
        FUNC_13(VAR_28, VAR_15->buf, VAR_15->bufpos);
        FUNC_1(VAR_15->buf);
        VAR_15->buf = VAR_28;
    }

    VAR_16 = FUNC_6(VAR_13, VAR_15->buf + VAR_15->bufpos, VAR_22);
    if (VAR_16 < VAR_22)
        return VAR_16 < 0 ? VAR_16 : VAR_0;

    VAR_15->bufpos += VAR_22;
    VAR_15->granule = VAR_20;
    VAR_15->flags = VAR_18;

    FUNC_14(VAR_15->buf + VAR_15->bufpos, 0, VAR_3);
    if (VAR_12)
        *VAR_12 = VAR_23;

    return 0;
}
