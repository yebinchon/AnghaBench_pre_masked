
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {char* value; } ;
struct TYPE_19__ {int * pb; TYPE_4__** streams; } ;
struct TYPE_18__ {size_t stream_index; int size; int * data; } ;
struct TYPE_17__ {int metadata; int index; TYPE_1__* codecpar; } ;
struct TYPE_16__ {scalar_t__ id; char* str; } ;
struct TYPE_15__ {int version; int len; } ;
struct TYPE_14__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ ID3v2EncContext ;
typedef TYPE_3__ CodecMime ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char,char,char,char) ;
 TYPE_7__* FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_6__*,int ,char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int **) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 TYPE_3__* VAR_8 ;
 int * VAR_9 ;
 int FUNC_14 (int *,char const*,int) ;
 int FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (char const*) ;

int FUNC_17(AVFormatContext *VAR_10, ID3v2EncContext *VAR_11, AVPacket *VAR_12)
{
    AVStream *VAR_13 = VAR_10->streams[VAR_12->stream_index];
    AVDictionaryEntry *VAR_14;

    AVIOContext *VAR_15;
    uint8_t *VAR_16;
    const CodecMime *VAR_17 = VAR_8;
    const char *VAR_18 = ((void*)0), *VAR_19 = "";
    int VAR_20 = VAR_11->version == 3 ? VAR_5 :
                                  VAR_6;
    int VAR_21, VAR_22, VAR_23 = 0;


    while (VAR_17->id != VAR_0) {
        if (VAR_17->id == VAR_13->codecpar->codec_id) {
            VAR_18 = VAR_17->str;
            break;
        }
        VAR_17++;
    }
    if (!VAR_18) {
        FUNC_5(VAR_10, VAR_1, "No mimetype is known for stream %d, cannot "
               "write an attached picture.\n", VAR_13->index);
        return FUNC_0(VAR_2);
    }


    VAR_14 = FUNC_3(VAR_13->metadata, "comment", ((void*)0), 0);
    for (VAR_21 = 0; VAR_14 && VAR_21 < FUNC_1(VAR_9); VAR_21++) {
        if (!FUNC_6(VAR_14->value, VAR_9[VAR_21])) {
            VAR_23 = VAR_21;
            break;
        }
    }


    if ((VAR_14 = FUNC_3(VAR_13->metadata, "title", ((void*)0), 0)))
        VAR_19 = VAR_14->value;


    if (VAR_20 == VAR_5 && FUNC_16(VAR_19))
        VAR_20 = VAR_4;


    if (FUNC_8(&VAR_15) < 0)
        return FUNC_0(VAR_3);

    FUNC_10(VAR_15, VAR_20);
    FUNC_9(VAR_15, VAR_18);
    FUNC_10(VAR_15, VAR_23);
    FUNC_14(VAR_15, VAR_19, VAR_20);
    FUNC_13(VAR_15, VAR_12->data, VAR_12->size);
    VAR_22 = FUNC_7(VAR_15, &VAR_16);

    FUNC_12(VAR_10->pb, FUNC_2('A', 'P', 'I', 'C'));
    if (VAR_11->version == 3)
        FUNC_12(VAR_10->pb, VAR_22);
    else
        FUNC_15(VAR_10->pb, VAR_22);
    FUNC_11(VAR_10->pb, 0);
    FUNC_13(VAR_10->pb, VAR_16, VAR_22);
    FUNC_4(&VAR_16);

    VAR_11->len += VAR_22 + VAR_7;

    return 0;
}
