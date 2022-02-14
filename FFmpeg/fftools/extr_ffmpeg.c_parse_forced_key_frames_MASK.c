
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {TYPE_2__* ctx; } ;
struct TYPE_11__ {int time_base; scalar_t__ start; } ;
struct TYPE_10__ {int time_base; } ;
struct TYPE_9__ {int nb_chapters; TYPE_4__** chapters; } ;
struct TYPE_8__ {size_t file_index; int forced_kf_count; scalar_t__* forced_kf_pts; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AVChapter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__* FUNC_3 (int,int) ;
 scalar_t__* FUNC_4 (scalar_t__*,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;
 TYPE_7__** VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (scalar_t__*,int,int,int ) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static void FUNC_11(char *VAR_5, OutputStream *VAR_6,
                                    AVCodecContext *VAR_7)
{
    char *VAR_8;
    int VAR_9 = 1, VAR_10, VAR_11, VAR_12 = 0;
    int64_t VAR_13, *VAR_14;

    for (VAR_8 = VAR_5; *VAR_8; VAR_8++)
        if (*VAR_8 == ',')
            VAR_9++;
    VAR_11 = VAR_9;
    VAR_14 = FUNC_3(VAR_11, sizeof(*VAR_14));
    if (!VAR_14) {
        FUNC_2(((void*)0), VAR_0, "Could not allocate forced key frames array.\n");
        FUNC_6(1);
    }

    VAR_8 = VAR_5;
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        char *VAR_15 = FUNC_10(VAR_8, ',');

        if (VAR_15)
            *VAR_15++ = 0;

        if (!FUNC_7(VAR_8, "chapters", 8)) {

            AVFormatContext *VAR_16 = VAR_4[VAR_6->file_index]->ctx;
            int VAR_17;

            if (VAR_16->nb_chapters > VAR_2 - VAR_11 ||
                !(VAR_14 = FUNC_4(VAR_14, VAR_11 += VAR_16->nb_chapters - 1,
                                     sizeof(*VAR_14)))) {
                FUNC_2(((void*)0), VAR_0,
                       "Could not allocate forced key frames array.\n");
                FUNC_6(1);
            }
            VAR_13 = VAR_8[8] ? FUNC_8("force_key_frames", VAR_8 + 8, 1) : 0;
            VAR_13 = FUNC_5(VAR_13, VAR_1, VAR_7->time_base);

            for (VAR_17 = 0; VAR_17 < VAR_16->nb_chapters; VAR_17++) {
                AVChapter *VAR_18 = VAR_16->chapters[VAR_17];
                FUNC_1(VAR_12 < VAR_11);
                VAR_14[VAR_12++] = FUNC_5(VAR_18->start, VAR_18->time_base,
                                            VAR_7->time_base) + VAR_13;
            }

        } else {

            VAR_13 = FUNC_8("force_key_frames", VAR_8, 1);
            FUNC_1(VAR_12 < VAR_11);
            VAR_14[VAR_12++] = FUNC_5(VAR_13, VAR_1, VAR_7->time_base);

        }

        VAR_8 = VAR_15;
    }

    FUNC_0(VAR_12 == VAR_11);
    FUNC_9(VAR_14, VAR_11, sizeof(*VAR_14), VAR_3);
    VAR_6->forced_kf_count = VAR_11;
    VAR_6->forced_kf_pts = VAR_14;
}
