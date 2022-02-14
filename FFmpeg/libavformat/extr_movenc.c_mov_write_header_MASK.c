
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_30__ {int value; } ;
struct TYPE_29__ {int nb_streams; TYPE_5__** streams; scalar_t__ nb_chapters; int metadata; TYPE_4__* priv_data; int * pb; } ;
struct TYPE_28__ {int metadata; TYPE_1__* codecpar; } ;
struct TYPE_27__ {int mode; int flags; scalar_t__ reserved_moov_size; int moov_written; void* reserved_header_pos; scalar_t__ nb_meta_tmcd; scalar_t__ chapter_track; scalar_t__ time; int max_fragment_size; int max_fragment_duration; TYPE_3__* tracks; } ;
struct TYPE_26__ {scalar_t__ tag; scalar_t__ language; int multichannel_as_mono; TYPE_2__* par; scalar_t__ vos_len; scalar_t__ vos_data; } ;
struct TYPE_25__ {scalar_t__ channel_layout; } ;
struct TYPE_24__ {scalar_t__ codec_id; scalar_t__ codec_type; int extradata; scalar_t__ extradata_size; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef int AVTimecode ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_7__* FUNC_2 (int ,char*,int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*,int,int) ;
 int FUNC_8 (TYPE_6__*,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int *,int,int ) ;
 int FUNC_12 (TYPE_6__*,scalar_t__) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_6__*,int,int,int ) ;
 int FUNC_15 (int *,TYPE_6__*) ;
 int FUNC_16 (int *,TYPE_4__*,TYPE_6__*) ;
 int FUNC_17 (int *,TYPE_4__*) ;
 int FUNC_18 (int *,TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_19 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_20(AVFormatContext *VAR_20)
{
    AVIOContext *VAR_21 = VAR_20->pb;
    MOVMuxContext *VAR_22 = VAR_20->priv_data;
    AVDictionaryEntry *VAR_23, *VAR_24 = FUNC_2(VAR_20->metadata, "timecode", ((void*)0), 0);
    int VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 0, VAR_29 = VAR_20->nb_streams;

    if (VAR_22->mode & (VAR_19|VAR_18|VAR_17) && VAR_20->nb_chapters)
        VAR_29++;

    if (VAR_22->flags & VAR_16) {
        VAR_27 = VAR_29;
        for (VAR_25 = 0; VAR_25 < VAR_20->nb_streams; VAR_25++)
            if (FUNC_19(VAR_20->streams[VAR_25]))
                VAR_29++;
    }

    if (VAR_22->nb_meta_tmcd)
        VAR_28 = VAR_29;

    for (VAR_25 = 0; VAR_25 < VAR_20->nb_streams; VAR_25++) {
        int VAR_30;
        AVStream *VAR_31= VAR_20->streams[VAR_25];
        MOVTrack *VAR_32= &VAR_22->tracks[VAR_25];


        if (VAR_31->codecpar->extradata_size) {
            if (VAR_31->codecpar->codec_id == VAR_4)
                FUNC_13(VAR_32, VAR_31);
            else if (!FUNC_1(VAR_32->tag) && VAR_31->codecpar->codec_id != VAR_3) {
                VAR_32->vos_len = VAR_31->codecpar->extradata_size;
                VAR_32->vos_data = FUNC_3(VAR_32->vos_len + VAR_5);
                if (!VAR_32->vos_data) {
                    return FUNC_0(VAR_6);
                }
                FUNC_9(VAR_32->vos_data, VAR_31->codecpar->extradata, VAR_32->vos_len);
                FUNC_10(VAR_32->vos_data + VAR_32->vos_len, 0, VAR_5);
            }
        }

        if (VAR_31->codecpar->codec_type != VAR_0 ||
            VAR_32->par->channel_layout != VAR_2)
            continue;

        for (VAR_30 = 0; VAR_30 < VAR_20->nb_streams; VAR_30++) {
            AVStream *VAR_33= VAR_20->streams[VAR_30];
            MOVTrack *VAR_34= &VAR_22->tracks[VAR_30];
            if (VAR_30 == VAR_25)
                continue;

            if (VAR_33->codecpar->codec_type != VAR_0 ||
                VAR_34->par->channel_layout != VAR_2 ||
                VAR_34->language != VAR_32->language ||
                VAR_34->tag != VAR_32->tag
            )
                continue;
            VAR_32->multichannel_as_mono++;
        }
    }

    if (!(VAR_22->flags & VAR_7)) {
        if ((VAR_26 = FUNC_15(VAR_21, VAR_20)) < 0)
            return VAR_26;
    }

    if (VAR_22->reserved_moov_size){
        VAR_22->reserved_header_pos = FUNC_6(VAR_21);
        if (VAR_22->reserved_moov_size > 0)
            FUNC_5(VAR_21, VAR_22->reserved_moov_size);
    }

    if (VAR_22->flags & VAR_10) {

        if (!(VAR_22->flags & (VAR_13 |
                            VAR_11 |
                            VAR_12)) &&
            !VAR_22->max_fragment_duration && !VAR_22->max_fragment_size)
            VAR_22->flags |= VAR_13;
    } else {
        if (VAR_22->flags & VAR_9)
            VAR_22->reserved_header_pos = FUNC_6(VAR_21);
        FUNC_17(VAR_21, VAR_22);
    }

    FUNC_8(VAR_20, &VAR_22->time, 1);
    if (VAR_22->time)
        VAR_22->time += 0x7C25B080;

    if (VAR_22->chapter_track)
        if ((VAR_26 = FUNC_12(VAR_20, VAR_22->chapter_track)) < 0)
            return VAR_26;

    if (VAR_22->flags & VAR_16) {
        for (VAR_25 = 0; VAR_25 < VAR_20->nb_streams; VAR_25++) {
            if (FUNC_19(VAR_20->streams[VAR_25])) {
                if ((VAR_26 = FUNC_7(VAR_20, VAR_27, VAR_25)) < 0)
                    return VAR_26;
                VAR_27++;
            }
        }
    }

    if (VAR_22->nb_meta_tmcd) {

        for (VAR_25 = 0; VAR_25 < VAR_20->nb_streams; VAR_25++) {
            AVStream *VAR_35 = VAR_20->streams[VAR_25];
            VAR_23 = VAR_24;

            if (VAR_35->codecpar->codec_type == VAR_1) {
                AVTimecode VAR_36;
                if (!VAR_23)
                    VAR_23 = FUNC_2(VAR_35->metadata, "timecode", ((void*)0), 0);
                if (!VAR_23)
                    continue;
                if (FUNC_11(VAR_20, &VAR_36, VAR_25, VAR_23->value) < 0)
                    continue;
                if ((VAR_26 = FUNC_14(VAR_20, VAR_28, VAR_25, VAR_36)) < 0)
                    return VAR_26;
                VAR_28++;
            }
        }
    }

    FUNC_4(VAR_21);

    if (VAR_22->flags & VAR_15)
        FUNC_16(VAR_21, VAR_22, VAR_20);

    if (VAR_22->flags & VAR_8 &&
        !(VAR_22->flags & VAR_7)) {
        if ((VAR_26 = FUNC_18(VAR_21, VAR_22, VAR_20)) < 0)
            return VAR_26;
        FUNC_4(VAR_21);
        VAR_22->moov_written = 1;
        if (VAR_22->flags & VAR_14)
            VAR_22->reserved_header_pos = FUNC_6(VAR_21);
    }

    return 0;
}
