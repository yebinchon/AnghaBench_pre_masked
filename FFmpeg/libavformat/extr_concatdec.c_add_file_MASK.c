
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* url; TYPE_2__* priv_data; } ;
struct TYPE_11__ {scalar_t__ safe; unsigned int nb_files; TYPE_1__* files; } ;
struct TYPE_10__ {char* url; void* user_duration; void* outpoint; void* inpoint; void* next_dts; void* duration; void* start_time; } ;
typedef TYPE_1__ ConcatFile ;
typedef TYPE_2__ ConcatContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (unsigned int,int) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_3__*,int ,char*,char*) ;
 char* FUNC_6 (size_t) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,size_t) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,size_t,char*,char*) ;
 int FUNC_10 (char*,char const*,size_t) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_5, char *VAR_6, ConcatFile **VAR_7,
                    unsigned *VAR_8)
{
    ConcatContext *VAR_9 = VAR_5->priv_data;
    ConcatFile *VAR_10;
    char *VAR_11 = ((void*)0);
    const char *VAR_12;
    size_t VAR_13, VAR_14;
    int VAR_15;

    if (VAR_9->safe > 0 && !FUNC_12(VAR_6)) {
        FUNC_5(VAR_5, VAR_0, "Unsafe file name '%s'\n", VAR_6);
        FUNC_1(FUNC_0(VAR_3));
    }

    VAR_12 = FUNC_8(VAR_6);
    VAR_14 = VAR_12 ? FUNC_13(VAR_12) : 0;
    if (VAR_12 && !FUNC_10(VAR_6, VAR_12, VAR_14) &&
        (VAR_6[VAR_14] == ':' || VAR_6[VAR_14] == ',')) {
        VAR_11 = VAR_6;
        VAR_6 = ((void*)0);
    } else {
        VAR_13 = FUNC_13(VAR_5->url) + FUNC_13(VAR_6) + 16;
        if (!(VAR_11 = FUNC_6(VAR_13)))
            FUNC_1(FUNC_0(VAR_2));
        FUNC_9(VAR_11, VAR_13, VAR_5->url, VAR_6);
        FUNC_4(&VAR_6);
    }

    if (VAR_9->nb_files >= *VAR_8) {
        size_t VAR_16 = FUNC_2(*VAR_8 * 2, 16);
        ConcatFile *VAR_17;
        if (VAR_16 <= VAR_9->nb_files || VAR_16 > VAR_4 / sizeof(*VAR_9->files) ||
            !(VAR_17 = FUNC_7(VAR_9->files, VAR_16 * sizeof(*VAR_9->files))))
            FUNC_1(FUNC_0(VAR_2));
        VAR_9->files = VAR_17;
        *VAR_8 = VAR_16;
    }

    VAR_10 = &VAR_9->files[VAR_9->nb_files++];
    FUNC_11(VAR_10, 0, sizeof(*VAR_10));
    *VAR_7 = VAR_10;

    VAR_10->url = VAR_11;
    VAR_10->start_time = VAR_1;
    VAR_10->duration = VAR_1;
    VAR_10->next_dts = VAR_1;
    VAR_10->inpoint = VAR_1;
    VAR_10->outpoint = VAR_1;
    VAR_10->user_duration = VAR_1;

    return 0;

fail:
    FUNC_3(VAR_11);
    FUNC_3(VAR_6);
    return VAR_15;
}
