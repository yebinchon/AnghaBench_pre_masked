
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mimetype ;
typedef scalar_t__ int64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {char* data; } ;
struct TYPE_11__ {scalar_t__ id; int str; } ;
struct TYPE_10__ {char* tag; struct TYPE_10__* next; TYPE_1__* data; } ;
struct TYPE_9__ {int id; int description; TYPE_8__* buf; int type; } ;
typedef TYPE_1__ ID3v2ExtraMetaAPIC ;
typedef TYPE_2__ ID3v2ExtraMeta ;
typedef TYPE_3__ CodecMime ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 TYPE_8__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,int ,char*,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int *,int,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *,int,int *,int*) ;
 TYPE_3__* VAR_5 ;
 int * VAR_6 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,int ,scalar_t__) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(AVFormatContext *VAR_7, AVIOContext *VAR_8, int VAR_9,
                      const char *VAR_10, ID3v2ExtraMeta **VAR_11,
                      int VAR_12)
{
    int VAR_13, VAR_14;
    char VAR_15[64] = {0};
    const CodecMime *VAR_16 = VAR_5;
    enum AVCodecID VAR_17 = VAR_0;
    ID3v2ExtraMetaAPIC *VAR_18 = ((void*)0);
    ID3v2ExtraMeta *VAR_19 = ((void*)0);
    int64_t VAR_20 = FUNC_10(VAR_8) + VAR_9;

    if (VAR_9 <= 4 || (!VAR_12 && VAR_9 <= 6))
        goto fail;

    VAR_19 = FUNC_4(sizeof(*VAR_19));
    VAR_18 = FUNC_4(sizeof(*VAR_18));
    if (!VAR_19 || !VAR_18)
        goto fail;

    VAR_13 = FUNC_7(VAR_8);
    VAR_9--;


    if (VAR_12) {
        VAR_9 -= FUNC_6(VAR_8, VAR_9, VAR_15, sizeof(VAR_15));
    } else {
        if (FUNC_8(VAR_8, VAR_15, 3) < 0)
            goto fail;

        VAR_15[3] = 0;
        VAR_9 -= 3;
    }

    while (VAR_16->id != VAR_0) {
        if (!FUNC_5(VAR_16->str, VAR_15, sizeof(VAR_15))) {
            VAR_17 = VAR_16->id;
            break;
        }
        VAR_16++;
    }
    if (VAR_17 == VAR_0) {
        FUNC_3(VAR_7, VAR_3,
               "Unknown attached picture mimetype: %s, skipping.\n", VAR_15);
        goto fail;
    }
    VAR_18->id = VAR_17;


    VAR_14 = FUNC_7(VAR_8);
    VAR_9--;
    if (VAR_14 < 0 || VAR_14 >= FUNC_0(VAR_6)) {
        FUNC_3(VAR_7, VAR_3, "Unknown attached picture type %d.\n",
               VAR_14);
        VAR_14 = 0;
    }
    VAR_18->type = VAR_6[VAR_14];


    if (FUNC_11(VAR_7, VAR_8, VAR_13, &VAR_18->description, &VAR_9) < 0) {
        FUNC_3(VAR_7, VAR_2,
               "Error decoding attached picture description.\n");
        goto fail;
    }

    VAR_18->buf = FUNC_1(VAR_9 + VAR_1);
    if (!VAR_18->buf || !VAR_9 || FUNC_8(VAR_8, VAR_18->buf->data, VAR_9) != VAR_9)
        goto fail;
    FUNC_13(VAR_18->buf->data + VAR_9, 0, VAR_1);

    VAR_19->tag = "APIC";
    VAR_19->data = VAR_18;
    VAR_19->next = *VAR_11;
    *VAR_11 = VAR_19;



    FUNC_14(VAR_18->description);

    return;

fail:
    if (VAR_18)
        FUNC_12(VAR_18);
    FUNC_2(&VAR_19);
    FUNC_9(VAR_8, VAR_20, VAR_4);
}
