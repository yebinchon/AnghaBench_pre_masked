
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_15__ {char* key; char* value; } ;
struct TYPE_14__ {double duration; int metadata; TYPE_3__* priv_data; int * pb; } ;
struct TYPE_13__ {int flags; void* metadata_size_pos; double framerate; double datasize; double videosize; double audiosize; unsigned int metadata_totalsize; void* metadata_totalsize_pos; void* keyframes_info_offset; scalar_t__ lastkeyframelocation; void* lastkeyframelocation_offset; scalar_t__ lastkeyframetimestamp; void* lastkeyframetimestamp_offset; scalar_t__ lasttimestamp; void* lasttimestamp_offset; void* audiosize_offset; void* videosize_offset; void* datasize_offset; TYPE_2__* audio_par; TYPE_1__* video_par; scalar_t__ keyframe_index_size; scalar_t__ acurframeindex; void* filesize_offset; scalar_t__ data_par; void* duration_offset; } ;
struct TYPE_12__ {double bit_rate; double sample_rate; scalar_t__ codec_id; int channels; double codec_tag; } ;
struct TYPE_11__ {double width; double height; double bit_rate; double codec_tag; } ;
typedef TYPE_3__ FLVContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_0 (int ,char*,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,char*,char*) ;
 int FUNC_2 (int *,void*,int ) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,double) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static void FUNC_14(AVFormatContext *VAR_12, unsigned int VAR_13)
{
    AVIOContext *VAR_14 = VAR_12->pb;
    FLVContext *VAR_15 = VAR_12->priv_data;
    int VAR_16 = !(VAR_15->flags & VAR_9);
    int VAR_17 = 0;
    int64_t VAR_18;
    AVDictionaryEntry *VAR_19 = ((void*)0);


    FUNC_5(VAR_14, VAR_10);
    VAR_15->metadata_size_pos = FUNC_4(VAR_14);
    FUNC_6(VAR_14, 0);
    FUNC_6(VAR_14, VAR_13);
    FUNC_7(VAR_14, 0);




    FUNC_5(VAR_14, VAR_2);
    FUNC_12(VAR_14, "onMetaData");


    FUNC_5(VAR_14, VAR_0);
    VAR_18 = FUNC_4(VAR_14);
    VAR_17 = 4 * !!VAR_15->video_par +
                     5 * !!VAR_15->audio_par +
                     1 * !!VAR_15->data_par;
    if (VAR_16) {
        VAR_17 += 2;
    }
    FUNC_7(VAR_14, VAR_17);

    if (VAR_16) {
        FUNC_12(VAR_14, "duration");
        VAR_15->duration_offset = FUNC_4(VAR_14);

        FUNC_11(VAR_14, VAR_12->duration / VAR_7);
    }

    if (VAR_15->video_par) {
        FUNC_12(VAR_14, "width");
        FUNC_11(VAR_14, VAR_15->video_par->width);

        FUNC_12(VAR_14, "height");
        FUNC_11(VAR_14, VAR_15->video_par->height);

        FUNC_12(VAR_14, "videodatarate");
        FUNC_11(VAR_14, VAR_15->video_par->bit_rate / 1024.0);

        if (VAR_15->framerate != 0.0) {
            FUNC_12(VAR_14, "framerate");
            FUNC_11(VAR_14, VAR_15->framerate);
            VAR_17++;
        }

        FUNC_12(VAR_14, "videocodecid");
        FUNC_11(VAR_14, VAR_15->video_par->codec_tag);
    }

    if (VAR_15->audio_par) {
        FUNC_12(VAR_14, "audiodatarate");
        FUNC_11(VAR_14, VAR_15->audio_par->bit_rate / 1024.0);

        FUNC_12(VAR_14, "audiosamplerate");
        FUNC_11(VAR_14, VAR_15->audio_par->sample_rate);

        FUNC_12(VAR_14, "audiosamplesize");
        FUNC_11(VAR_14, VAR_15->audio_par->codec_id == VAR_4 ? 8 : 16);

        FUNC_12(VAR_14, "stereo");
        FUNC_9(VAR_14, VAR_15->audio_par->channels == 2);

        FUNC_12(VAR_14, "audiocodecid");
        FUNC_11(VAR_14, VAR_15->audio_par->codec_tag);
    }

    if (VAR_15->data_par) {
        FUNC_12(VAR_14, "datastream");
        FUNC_11(VAR_14, 0.0);
    }

    FUNC_8(VAR_12);
    while ((VAR_19 = FUNC_0(VAR_12->metadata, "", VAR_19, VAR_5))) {
        if( !FUNC_13(VAR_19->key, "width")
            ||!FUNC_13(VAR_19->key, "height")
            ||!FUNC_13(VAR_19->key, "videodatarate")
            ||!FUNC_13(VAR_19->key, "framerate")
            ||!FUNC_13(VAR_19->key, "videocodecid")
            ||!FUNC_13(VAR_19->key, "audiodatarate")
            ||!FUNC_13(VAR_19->key, "audiosamplerate")
            ||!FUNC_13(VAR_19->key, "audiosamplesize")
            ||!FUNC_13(VAR_19->key, "stereo")
            ||!FUNC_13(VAR_19->key, "audiocodecid")
            ||!FUNC_13(VAR_19->key, "duration")
            ||!FUNC_13(VAR_19->key, "onMetaData")
            ||!FUNC_13(VAR_19->key, "datasize")
            ||!FUNC_13(VAR_19->key, "lasttimestamp")
            ||!FUNC_13(VAR_19->key, "totalframes")
            ||!FUNC_13(VAR_19->key, "hasAudio")
            ||!FUNC_13(VAR_19->key, "hasVideo")
            ||!FUNC_13(VAR_19->key, "hasCuePoints")
            ||!FUNC_13(VAR_19->key, "hasMetadata")
            ||!FUNC_13(VAR_19->key, "hasKeyframes")
        ){
            FUNC_1(VAR_12, VAR_6, "Ignoring metadata for %s\n", VAR_19->key);
            continue;
        }
        FUNC_12(VAR_14, VAR_19->key);
        FUNC_5(VAR_14, VAR_2);
        FUNC_12(VAR_14, VAR_19->value);
        VAR_17++;
    }

    if (VAR_16) {
        FUNC_12(VAR_14, "filesize");
        VAR_15->filesize_offset = FUNC_4(VAR_14);
        FUNC_11(VAR_14, 0);
    }

    if (VAR_15->flags & VAR_8) {
        VAR_15->acurframeindex = 0;
        VAR_15->keyframe_index_size = 0;

        FUNC_12(VAR_14, "hasVideo");
        FUNC_9(VAR_14, !!VAR_15->video_par);
        VAR_17++;

        FUNC_12(VAR_14, "hasKeyframes");
        FUNC_9(VAR_14, 1);
        VAR_17++;

        FUNC_12(VAR_14, "hasAudio");
        FUNC_9(VAR_14, !!VAR_15->audio_par);
        VAR_17++;

        FUNC_12(VAR_14, "hasMetadata");
        FUNC_9(VAR_14, 1);
        VAR_17++;

        FUNC_12(VAR_14, "canSeekToEnd");
        FUNC_9(VAR_14, 1);
        VAR_17++;

        FUNC_12(VAR_14, "datasize");
        VAR_15->datasize_offset = FUNC_4(VAR_14);
        VAR_15->datasize = 0;
        FUNC_11(VAR_14, VAR_15->datasize);
        VAR_17++;

        FUNC_12(VAR_14, "videosize");
        VAR_15->videosize_offset = FUNC_4(VAR_14);
        VAR_15->videosize = 0;
        FUNC_11(VAR_14, VAR_15->videosize);
        VAR_17++;

        FUNC_12(VAR_14, "audiosize");
        VAR_15->audiosize_offset = FUNC_4(VAR_14);
        VAR_15->audiosize = 0;
        FUNC_11(VAR_14, VAR_15->audiosize);
        VAR_17++;

        FUNC_12(VAR_14, "lasttimestamp");
        VAR_15->lasttimestamp_offset = FUNC_4(VAR_14);
        VAR_15->lasttimestamp = 0;
        FUNC_11(VAR_14, 0);
        VAR_17++;

        FUNC_12(VAR_14, "lastkeyframetimestamp");
        VAR_15->lastkeyframetimestamp_offset = FUNC_4(VAR_14);
        VAR_15->lastkeyframetimestamp = 0;
        FUNC_11(VAR_14, 0);
        VAR_17++;

        FUNC_12(VAR_14, "lastkeyframelocation");
        VAR_15->lastkeyframelocation_offset = FUNC_4(VAR_14);
        VAR_15->lastkeyframelocation = 0;
        FUNC_11(VAR_14, 0);
        VAR_17++;

        FUNC_12(VAR_14, "keyframes");
        FUNC_10(VAR_14, VAR_1);
        VAR_17++;

        VAR_15->keyframes_info_offset = FUNC_4(VAR_14);
    }

    FUNC_12(VAR_14, "");
    FUNC_5(VAR_14, VAR_3);


    VAR_15->metadata_totalsize = FUNC_4(VAR_14) - VAR_15->metadata_size_pos - 10;

    FUNC_2(VAR_14, VAR_18, VAR_11);
    FUNC_7(VAR_14, VAR_17);

    FUNC_2(VAR_14, VAR_15->metadata_size_pos, VAR_11);
    FUNC_6(VAR_14, VAR_15->metadata_totalsize);
    FUNC_3(VAR_14, VAR_15->metadata_totalsize + 10 - 3);
    VAR_15->metadata_totalsize_pos = FUNC_4(VAR_14);
    FUNC_7(VAR_14, VAR_15->metadata_totalsize + 11);
}
