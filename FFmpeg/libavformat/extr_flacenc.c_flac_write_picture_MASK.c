
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct AVFormatContext {TYPE_4__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_15__ {char* value; } ;
struct TYPE_14__ {size_t stream_index; char const* data; int size; } ;
struct TYPE_13__ {TYPE_1__* codecpar; int metadata; int index; } ;
struct TYPE_12__ {scalar_t__ id; char* str; } ;
struct TYPE_11__ {int attached_types; } ;
struct TYPE_10__ {scalar_t__ codec_id; int width; int height; int format; } ;
typedef TYPE_2__ FlacMuxerContext ;
typedef TYPE_3__ CodecMime ;
typedef TYPE_4__ AVStream ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_6__* FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct AVFormatContext*,int ,char*,...) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char const*,int) ;
 TYPE_3__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    FlacMuxerContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    const AVPixFmtDescriptor *VAR_10;
    const CodecMime *VAR_11 = VAR_4;
    AVDictionaryEntry *VAR_12;
    const char *VAR_13 = ((void*)0), *VAR_14 = "";
    const AVStream *VAR_15 = VAR_6->streams[VAR_7->stream_index];
    int VAR_16, VAR_17, VAR_18, VAR_19 = 0, VAR_20;

    if (!VAR_7->data)
        return 0;

    while (VAR_11->id != VAR_0) {
        if (VAR_11->id == VAR_15->codecpar->codec_id) {
            VAR_13 = VAR_11->str;
            break;
        }
        VAR_11++;
    }
    if (!VAR_13) {
        FUNC_4(VAR_6, VAR_2, "No mimetype is known for stream %d, cannot "
               "write an attached picture.\n", VAR_15->index);
        return FUNC_0(VAR_3);
    }
    VAR_17 = FUNC_11(VAR_13);


    VAR_12 = FUNC_2(VAR_15->metadata, "comment", ((void*)0), 0);
    for (VAR_16 = 0; VAR_12 && VAR_16 < FUNC_1(VAR_5); VAR_16++) {
        if (!FUNC_6(VAR_12->value, VAR_5[VAR_16])) {
            VAR_19 = VAR_16;
            break;
        }
    }

    if ((VAR_8->attached_types & (1 << VAR_19)) & 0x6) {
        FUNC_4(VAR_6, VAR_2, "Duplicate attachment for type '%s'\n", VAR_5[VAR_19]);
        return FUNC_0(VAR_3);
    }

    if (VAR_19 == 1 && (VAR_15->codecpar->codec_id != VAR_1 ||
                      VAR_15->codecpar->width != 32 ||
                      VAR_15->codecpar->height != 32)) {
        FUNC_4(VAR_6, VAR_2, "File icon attachment must be a 32x32 PNG");
        return FUNC_0(VAR_3);
    }

    VAR_8->attached_types |= (1 << VAR_19);


    if ((VAR_12 = FUNC_2(VAR_15->metadata, "title", ((void*)0), 0)))
        VAR_14 = VAR_12->value;
    VAR_18 = FUNC_11(VAR_14);

    VAR_20 = 4 + 4 + VAR_17 + 4 + VAR_18 + 4 + 4 + 4 + 4 + 4 + VAR_7->size;
    if (VAR_20 >= 1<<24) {
        FUNC_4(VAR_6, VAR_2, "Picture block too big %d >= %d\n", VAR_20, 1<<24);
        return FUNC_0(VAR_3);
    }

    FUNC_7(VAR_9, 0x06);
    FUNC_8(VAR_9, VAR_20);

    FUNC_9(VAR_9, VAR_19);

    FUNC_9(VAR_9, VAR_17);
    FUNC_10(VAR_9, VAR_13, VAR_17);

    FUNC_9(VAR_9, VAR_18);
    FUNC_10(VAR_9, VAR_14, VAR_18);

    FUNC_9(VAR_9, VAR_15->codecpar->width);
    FUNC_9(VAR_9, VAR_15->codecpar->height);
    if ((VAR_10 = FUNC_5(VAR_15->codecpar->format)))
        FUNC_9(VAR_9, FUNC_3(VAR_10));
    else
        FUNC_9(VAR_9, 0);
    FUNC_9(VAR_9, 0);

    FUNC_9(VAR_9, VAR_7->size);
    FUNC_10(VAR_9, VAR_7->data, VAR_7->size);
    return 0;
}
