
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_11__ {int size; int flags; int stream_index; int data; } ;
struct TYPE_10__ {TYPE_1__* codecpar; TYPE_4__ attached_pic; int index; int disposition; int * priv_data; } ;
struct TYPE_9__ {int fc; } ;
struct TYPE_8__ {int codec_id; int codec_type; } ;
typedef int MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int * FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_8, AVIOContext *VAR_9, int VAR_10, int VAR_11)
{
    AVPacket VAR_12;
    AVStream *VAR_13;
    MOVStreamContext *VAR_14;
    enum AVCodecID VAR_15;
    int VAR_16;

    switch (VAR_10) {
    case 0xd: VAR_15 = VAR_2; break;
    case 0xe: VAR_15 = VAR_3; break;
    case 0x1b: VAR_15 = VAR_1; break;
    default:
        FUNC_3(VAR_8->fc, VAR_5, "Unknown cover type: 0x%x.\n", VAR_10);
        FUNC_6(VAR_9, VAR_11);
        return 0;
    }

    VAR_13 = FUNC_5(VAR_8->fc, ((void*)0));
    if (!VAR_13)
        return FUNC_0(VAR_7);
    VAR_14 = FUNC_4(sizeof(*VAR_14));
    if (!VAR_14)
        return FUNC_0(VAR_7);
    VAR_13->priv_data = VAR_14;

    VAR_16 = FUNC_2(VAR_9, &VAR_12, VAR_11);
    if (VAR_16 < 0)
        return VAR_16;

    if (VAR_12.size >= 8 && VAR_15 != VAR_1) {
        if (FUNC_1(VAR_12.data) == 0x89504e470d0a1a0a) {
            VAR_15 = VAR_3;
        } else {
            VAR_15 = VAR_2;
        }
    }

    VAR_13->disposition |= VAR_4;

    VAR_13->attached_pic = VAR_12;
    VAR_13->attached_pic.stream_index = VAR_13->index;
    VAR_13->attached_pic.flags |= VAR_6;

    VAR_13->codecpar->codec_type = VAR_0;
    VAR_13->codecpar->codec_id = VAR_15;

    return 0;
}
