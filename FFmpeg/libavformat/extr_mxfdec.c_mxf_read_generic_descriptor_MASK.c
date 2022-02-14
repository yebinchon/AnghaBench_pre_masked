
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
typedef int UID ;
struct TYPE_6__ {void* den; void* num; } ;
struct TYPE_5__ {void* den; void* num; } ;
struct TYPE_7__ {int extradata_size; int pix_fmt; int extradata; void* bits_per_sample; void* channels; int essence_codec_ul; TYPE_2__ sample_rate; void* vert_subsampling; void* horiz_subsampling; void* component_depth; void* field_dominance; TYPE_1__ aspect_ratio; void** video_line_map; void* frame_layout; void* height; void* width; void* linked_track_id; int codec_ul; int essence_container_ul; int duration; int sub_descriptors_count; int sub_descriptors_refs; } ;
typedef TYPE_3__ MXFDescriptor ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int VAR_5 ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(void *VAR_7, AVIOContext *VAR_8, int VAR_9, int VAR_10, UID VAR_11, int64_t VAR_12)
{
    MXFDescriptor *VAR_13 = VAR_7;
    int VAR_14, VAR_15;

    switch(VAR_9) {
    case 0x3F01:
        return FUNC_11(VAR_8, &VAR_13->sub_descriptors_refs,
                                             &VAR_13->sub_descriptors_count);
    case 0x3002:
        VAR_13->duration = FUNC_8(VAR_8);
        break;
    case 0x3004:
        FUNC_9(VAR_8, VAR_13->essence_container_ul, 16);
        break;
    case 0x3005:
        FUNC_9(VAR_8, VAR_13->codec_ul, 16);
        break;
    case 0x3006:
        VAR_13->linked_track_id = FUNC_7(VAR_8);
        break;
    case 0x3201:
        FUNC_9(VAR_8, VAR_13->essence_codec_ul, 16);
        break;
    case 0x3203:
        VAR_13->width = FUNC_7(VAR_8);
        break;
    case 0x3202:
        VAR_13->height = FUNC_7(VAR_8);
        break;
    case 0x320C:
        VAR_13->frame_layout = FUNC_5(VAR_8);
        break;
    case 0x320D:
        VAR_14 = FUNC_7(VAR_8);
        VAR_15 = FUNC_7(VAR_8);
        if (VAR_15 == 4) {
            if (VAR_14 > 0)
                VAR_13->video_line_map[0] = FUNC_7(VAR_8);
            else
                VAR_13->video_line_map[0] = 0;
            if (VAR_14 > 1)
                VAR_13->video_line_map[1] = FUNC_7(VAR_8);
            else
                VAR_13->video_line_map[1] = 0;
        } else
            FUNC_3(((void*)0), VAR_0, "VideoLineMap element size %d currently not supported\n", VAR_15);
        break;
    case 0x320E:
        VAR_13->aspect_ratio.num = FUNC_7(VAR_8);
        VAR_13->aspect_ratio.den = FUNC_7(VAR_8);
        break;
    case 0x3212:
        VAR_13->field_dominance = FUNC_5(VAR_8);
        break;
    case 0x3301:
        VAR_13->component_depth = FUNC_7(VAR_8);
        break;
    case 0x3302:
        VAR_13->horiz_subsampling = FUNC_7(VAR_8);
        break;
    case 0x3308:
        VAR_13->vert_subsampling = FUNC_7(VAR_8);
        break;
    case 0x3D03:
        VAR_13->sample_rate.num = FUNC_7(VAR_8);
        VAR_13->sample_rate.den = FUNC_7(VAR_8);
        break;
    case 0x3D06:
        FUNC_9(VAR_8, VAR_13->essence_codec_ul, 16);
        break;
    case 0x3D07:
        VAR_13->channels = FUNC_7(VAR_8);
        break;
    case 0x3D01:
        VAR_13->bits_per_sample = FUNC_7(VAR_8);
        break;
    case 0x3401:
        FUNC_10(VAR_8, VAR_13);
        break;
    default:

        if (FUNC_1(VAR_11, VAR_6)) {
            if (VAR_13->extradata)
                FUNC_3(((void*)0), VAR_0, "Duplicate sony_mpeg4_extradata\n");
            FUNC_2(VAR_13->extradata);
            VAR_13->extradata_size = 0;
            VAR_13->extradata = FUNC_4(VAR_10);
            if (!VAR_13->extradata)
                return FUNC_0(VAR_2);
            VAR_13->extradata_size = VAR_10;
            FUNC_9(VAR_8, VAR_13->extradata, VAR_10);
        }
        if (FUNC_1(VAR_11, VAR_5)) {
            uint32_t VAR_16 = FUNC_6(VAR_8);
            if (VAR_16 == VAR_3 ||
                VAR_16 == VAR_4)
                VAR_13->pix_fmt = VAR_1;
        }
        break;
    }
    return 0;
}
