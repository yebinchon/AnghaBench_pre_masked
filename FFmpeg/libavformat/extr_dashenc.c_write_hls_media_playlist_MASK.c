
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int temp_filename_hls ;
typedef int filename_hls ;
struct TYPE_22__ {TYPE_5__* priv_data; } ;
struct TYPE_21__ {double start_time_s; int m3u8_out; scalar_t__ single_file; int dirname; int hls_playlist; } ;
struct TYPE_20__ {int nb_segments; scalar_t__ segment_type; TYPE_15__* ctx; int initfile; TYPE_3__** segments; int init_start_pos; int init_range_length; } ;
struct TYPE_19__ {double prog_date_time; int file; int start_pos; int range_length; scalar_t__ duration; } ;
struct TYPE_17__ {int den; } ;
struct TYPE_18__ {TYPE_1__ time_base; } ;
struct TYPE_16__ {TYPE_2__** streams; } ;
typedef TYPE_3__ Segment ;
typedef TYPE_4__ OutputStream ;
typedef TYPE_5__ DASHContext ;
typedef TYPE_6__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_15__*,int ,char*,...) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_6__*,int *,char*) ;
 int FUNC_6 (TYPE_6__*,int *,char*,int **) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__,double,int ,int ,int ,int *,int ,double*,int ,int ,int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int,int,int,int,int ,int ) ;
 int FUNC_11 (char*,int,int ,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*,int*,int*) ;
 int FUNC_13 (TYPE_6__*,int,char*) ;
 int FUNC_14 (double) ;
 int FUNC_15 (int **,TYPE_5__*) ;
 int FUNC_16 (char*,int,char*,char*) ;
 int FUNC_17 (char const*,char*) ;

__attribute__((used)) static void FUNC_18(OutputStream *VAR_3, AVFormatContext *VAR_4,
                                     int VAR_5, int VAR_6,
                                     char *VAR_7) {
    DASHContext *VAR_8 = VAR_4->priv_data;
    int VAR_9 = VAR_3->ctx->streams[0]->time_base.den;
    char VAR_10[1024];
    char VAR_11[1024];
    AVDictionary *VAR_12 = ((void*)0);
    int VAR_13 = 0;
    int VAR_14 = 0;
    const char *VAR_15 = FUNC_2(VAR_8->dirname);
    int VAR_16 = VAR_15 && !FUNC_17(VAR_15, "file");
    int VAR_17, VAR_18, VAR_19;
    double VAR_20 = 0;

    FUNC_12(VAR_3, VAR_8, &VAR_18, &VAR_19);

    if (!VAR_8->hls_playlist || VAR_18 >= VAR_3->nb_segments ||
        VAR_3->segment_type != VAR_2)
        return;

    FUNC_11(VAR_11, sizeof(VAR_11),
                          VAR_8->dirname, VAR_5);

    FUNC_16(VAR_10, sizeof(VAR_10), VAR_16 ? "%s.tmp" : "%s", VAR_11);

    FUNC_15(&VAR_12, VAR_8);
    VAR_14 = FUNC_6(VAR_4, &VAR_8->m3u8_out, VAR_10, &VAR_12);
    FUNC_0(&VAR_12);
    if (VAR_14 < 0) {
        FUNC_13(VAR_4, VAR_14, VAR_10);
        return;
    }
    for (VAR_17 = VAR_18; VAR_17 < VAR_3->nb_segments; VAR_17++) {
        Segment *VAR_21 = VAR_3->segments[VAR_17];
        double VAR_22 = (double) VAR_21->duration / VAR_9;
        if (VAR_13 <= VAR_22)
            VAR_13 = FUNC_14(VAR_22);
    }

    FUNC_10(VAR_8->m3u8_out, 6, -1, VAR_13,
                                 VAR_19, VAR_1, 0);

    FUNC_9(VAR_8->m3u8_out, VAR_3->initfile, VAR_8->single_file,
                           VAR_3->init_range_length, VAR_3->init_start_pos);

    for (VAR_17 = VAR_18; VAR_17 < VAR_3->nb_segments; VAR_17++) {
        Segment *VAR_23 = VAR_3->segments[VAR_17];

        if (VAR_20 == 0) {
            if (VAR_3->nb_segments == 1)
                VAR_20 = VAR_8->start_time_s;
            else
                VAR_20 = VAR_23->prog_date_time;
        }
        VAR_23->prog_date_time = VAR_20;

        VAR_14 = FUNC_8(VAR_8->m3u8_out, 0, VAR_8->single_file,
                                (double) VAR_23->duration / VAR_9, 0,
                                VAR_23->range_length, VAR_23->start_pos, ((void*)0),
                                VAR_8->single_file ? VAR_3->initfile : VAR_23->file,
                                &VAR_20, 0, 0, 0);
        if (VAR_14 < 0) {
            FUNC_1(VAR_3->ctx, VAR_0, "ff_hls_write_file_entry get error\n");
        }
    }

    if (VAR_7)
        FUNC_3(VAR_8->m3u8_out, "#EXT-X-PREFETCH:%s\n", VAR_7);

    if (VAR_6)
        FUNC_7(VAR_8->m3u8_out);

    FUNC_5(VAR_4, &VAR_8->m3u8_out, VAR_10);

    if (VAR_16)
        if (FUNC_4(VAR_10, VAR_11) < 0) {
            FUNC_1(VAR_3->ctx, VAR_0, "renaming file %s to %s failed\n\n", VAR_10, VAR_11);
        }
}
