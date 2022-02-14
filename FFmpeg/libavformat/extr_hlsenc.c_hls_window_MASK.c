
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int temp_vtt_filename ;
typedef int temp_filename ;
typedef scalar_t__ int64_t ;
struct TYPE_15__ {char* m3u8_name; scalar_t__ discontinuity_set; char* vtt_m3u8_name; int out; int baseurl; TYPE_2__* segments; int init_range_length; int fmp4_init_filename; scalar_t__ has_video; int initial_prog_date_time; scalar_t__ nb_entries; scalar_t__ sequence; } ;
typedef TYPE_1__ VariantStream ;
struct TYPE_18__ {TYPE_3__* priv_data; } ;
struct TYPE_17__ {scalar_t__ start_sequence; int flags; scalar_t__ pl_type; scalar_t__ max_seg_size; int version; scalar_t__ segment_type; scalar_t__ master_pl_name; int sub_m3u8_out; int m3u8_out; int allowcache; scalar_t__ ignore_io_errors; scalar_t__ key_info_file; scalar_t__ encrypt; } ;
struct TYPE_16__ {int duration; char const* key_uri; char* iv_string; int sub_filename; int pos; int size; struct TYPE_16__* next; int keyframe_pos; int keyframe_size; int filename; int discont; } ;
typedef TYPE_2__ HLSSegment ;
typedef TYPE_3__ HLSContext ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int,int,int ,int ,int ,int ,double*,int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int ,int ) ;
 int FUNC_10 (int ,int,int ,int,scalar_t__,scalar_t__,int) ;
 int FUNC_11 (char*,char*,TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int *,char*) ;
 int FUNC_13 (TYPE_4__*,int *,char*,int **) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_4__*,int **,TYPE_3__*) ;
 int FUNC_16 (char*,int,char*,char*) ;
 scalar_t__ FUNC_17 (char const*,char*) ;

__attribute__((used)) static int FUNC_18(AVFormatContext *VAR_14, int VAR_15, VariantStream *VAR_16)
{
    HLSContext *VAR_17 = VAR_14->priv_data;
    HLSSegment *VAR_18;
    int VAR_19 = 0;
    int VAR_20 = 0;
    char VAR_21[VAR_10];
    char VAR_22[VAR_10];
    int64_t VAR_23 = FUNC_0(VAR_17->start_sequence, VAR_16->sequence - VAR_16->nb_entries);
    const char *VAR_24 = FUNC_4(VAR_16->m3u8_name);
    int VAR_25 = VAR_24 && !FUNC_17(VAR_24, "file");
    int VAR_26 = VAR_25 && ((VAR_17->flags & VAR_9) || !(VAR_17->pl_type == VAR_12));
    static unsigned VAR_27;
    char *VAR_28 = ((void*)0);
    char *VAR_29 = ((void*)0);
    AVDictionary *VAR_30 = ((void*)0);
    double VAR_31 = VAR_16->initial_prog_date_time;
    double *VAR_32 = (VAR_17->flags & VAR_6) ? &VAR_31 : ((void*)0);
    int VAR_33 = (VAR_17->flags & VAR_8) || (VAR_17->max_seg_size > 0);

    VAR_17->version = 3;
    if (VAR_33) {
        VAR_17->version = 4;
        VAR_23 = 0;
    }

    if (VAR_17->flags & VAR_3) {
        VAR_17->version = 6;
    }

    if (VAR_17->segment_type == VAR_13) {
        VAR_17->version = 7;
    }

    if (!VAR_25 && (VAR_17->flags & VAR_9) && !VAR_27++)
        FUNC_2(VAR_14, VAR_0, "Cannot use rename on non file protocol, this may lead to races and temporary partial files\n");

    FUNC_15(VAR_14, &VAR_30, VAR_17);
    FUNC_16(VAR_21, sizeof(VAR_21), VAR_26 ? "%s.tmp" : "%s", VAR_16->m3u8_name);
    if ((VAR_20 = FUNC_13(VAR_14, VAR_33 ? &VAR_17->m3u8_out : &VAR_16->out, VAR_21, &VAR_30)) < 0) {
        if (VAR_17->ignore_io_errors)
            VAR_20 = 0;
        goto fail;
    }

    for (VAR_18 = VAR_16->segments; VAR_18; VAR_18 = VAR_18->next) {
        if (VAR_19 <= VAR_18->duration)
            VAR_19 = FUNC_14(VAR_18->duration);
    }

    VAR_16->discontinuity_set = 0;
    FUNC_10(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, VAR_17->version, VAR_17->allowcache,
                                 VAR_19, VAR_23, VAR_17->pl_type, VAR_17->flags & VAR_4);

    if ((VAR_17->flags & VAR_2) && VAR_23==VAR_17->start_sequence && VAR_16->discontinuity_set==0 ) {
        FUNC_5(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, "#EXT-X-DISCONTINUITY\n");
        VAR_16->discontinuity_set = 1;
    }
    if (VAR_16->has_video && (VAR_17->flags & VAR_3)) {
        FUNC_5(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, "#EXT-X-INDEPENDENT-SEGMENTS\n");
    }
    for (VAR_18 = VAR_16->segments; VAR_18; VAR_18 = VAR_18->next) {
        if ((VAR_17->encrypt || VAR_17->key_info_file) && (!VAR_28 || FUNC_17(VAR_18->key_uri, VAR_28) ||
                                    FUNC_3(VAR_18->iv_string, VAR_29))) {
            FUNC_5(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, "#EXT-X-KEY:METHOD=AES-128,URI=\"%s\"", VAR_18->key_uri);
            if (*VAR_18->iv_string)
                FUNC_5(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, ",IV=0x%s", VAR_18->iv_string);
            FUNC_5(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, "\n");
            VAR_28 = VAR_18->key_uri;
            VAR_29 = VAR_18->iv_string;
        }

        if ((VAR_17->segment_type == VAR_13) && (VAR_18 == VAR_16->segments)) {
            FUNC_9(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, (VAR_17->flags & VAR_8) ? VAR_18->filename : VAR_16->fmp4_init_filename,
                                   VAR_17->flags & VAR_8, VAR_16->init_range_length, 0);
        }

        VAR_20 = FUNC_8(VAR_33 ? VAR_17->m3u8_out : VAR_16->out, VAR_18->discont, VAR_33,
                                      VAR_18->duration, VAR_17->flags & VAR_7,
                                      VAR_18->size, VAR_18->pos, VAR_16->baseurl,
                                      VAR_18->filename, VAR_32, VAR_18->keyframe_size, VAR_18->keyframe_pos, VAR_17->flags & VAR_4);
        if (VAR_20 < 0) {
            FUNC_2(VAR_14, VAR_1, "ff_hls_write_file_entry get error\n");
        }
    }

    if (VAR_15 && (VAR_17->flags & VAR_5)==0)
        FUNC_7(VAR_33 ? VAR_17->m3u8_out : VAR_16->out);

    if (VAR_16->vtt_m3u8_name) {
        FUNC_16(VAR_22, sizeof(VAR_22), VAR_26 ? "%s.tmp" : "%s", VAR_16->vtt_m3u8_name);
        if ((VAR_20 = FUNC_13(VAR_14, &VAR_17->sub_m3u8_out, VAR_22, &VAR_30)) < 0) {
            if (VAR_17->ignore_io_errors)
                VAR_20 = 0;
            goto fail;
        }
        FUNC_10(VAR_17->sub_m3u8_out, VAR_17->version, VAR_17->allowcache,
                                     VAR_19, VAR_23, VAR_11, 0);
        for (VAR_18 = VAR_16->segments; VAR_18; VAR_18 = VAR_18->next) {
            VAR_20 = FUNC_8(VAR_17->sub_m3u8_out, 0, VAR_33,
                                          VAR_18->duration, 0, VAR_18->size, VAR_18->pos,
                                          VAR_16->baseurl, VAR_18->sub_filename, ((void*)0), 0, 0, 0);
            if (VAR_20 < 0) {
                FUNC_2(VAR_14, VAR_1, "ff_hls_write_file_entry get error\n");
            }
        }

        if (VAR_15)
            FUNC_7(VAR_17->sub_m3u8_out);

    }

fail:
    FUNC_1(&VAR_30);
    VAR_20 = FUNC_12(VAR_14, VAR_33 ? &VAR_17->m3u8_out : &VAR_16->out, VAR_21);
    if (VAR_20 < 0) {
        return VAR_20;
    }
    FUNC_12(VAR_14, &VAR_17->sub_m3u8_out, VAR_16->vtt_m3u8_name);
    if (VAR_26) {
        FUNC_11(VAR_21, VAR_16->m3u8_name, VAR_14);
        if (VAR_16->vtt_m3u8_name)
            FUNC_11(VAR_22, VAR_16->vtt_m3u8_name, VAR_14);
    }
    if (VAR_20 >= 0 && VAR_17->master_pl_name)
        if (FUNC_6(VAR_14, VAR_16) < 0)
            FUNC_2(VAR_14, VAR_1, "Master playlist creation failed\n");

    return VAR_20;
}
