
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


typedef int uint8_t ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_15__ {TYPE_1__ sample_aspect_ratio; int height; int width; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_11__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_14__ {int metadata; TYPE_3__ time_base; TYPE_2__ r_frame_rate; TYPE_6__* codecpar; } ;
struct TYPE_13__ {int isvp8; int ** header; int * header_len; } ;
typedef TYPE_4__ OGGStreamContext ;
typedef TYPE_5__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int **,char*,int) ;
 int FUNC_9 (int **,int) ;
 int * FUNC_10 (int,int,int *,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_4, AVStream *VAR_5,
                                 OGGStreamContext *VAR_6, int VAR_7)
{
    AVCodecParameters *VAR_8 = VAR_5->codecpar;
    uint8_t *VAR_9;


    VAR_9 = FUNC_3(VAR_3);
    if (!VAR_9)
        return FUNC_0(VAR_2);
    VAR_6->header[0] = VAR_9;
    VAR_6->header_len[0] = VAR_3;
    FUNC_9(&VAR_9, 0x4f);
    FUNC_8(&VAR_9, "VP80", 4);
    FUNC_9(&VAR_9, 1);
    FUNC_9(&VAR_9, 1);
    FUNC_9(&VAR_9, 0);
    FUNC_5(&VAR_9, VAR_8->width);
    FUNC_5(&VAR_9, VAR_8->height);
    FUNC_6(&VAR_9, VAR_8->sample_aspect_ratio.num);
    FUNC_6(&VAR_9, VAR_8->sample_aspect_ratio.den);
    if (VAR_5->r_frame_rate.num > 0 && VAR_5->r_frame_rate.den > 0) {


        FUNC_2(VAR_4, VAR_1, "Changing time base from %d/%d to %d/%d\n",
               VAR_5->time_base.num, VAR_5->time_base.den,
               VAR_5->r_frame_rate.den, VAR_5->r_frame_rate.num);
        FUNC_4(VAR_5, 64, VAR_5->r_frame_rate.den, VAR_5->r_frame_rate.num);
    }
    FUNC_7(&VAR_9, VAR_5->time_base.den);
    FUNC_7(&VAR_9, VAR_5->time_base.num);


    if (FUNC_1(VAR_5->metadata, "", ((void*)0), VAR_0)) {
        VAR_9 = FUNC_10(7, VAR_7, &VAR_6->header_len[1], &VAR_5->metadata, 0, ((void*)0), 0);
        if (!VAR_9)
            return FUNC_0(VAR_2);
        VAR_6->header[1] = VAR_9;
        FUNC_9(&VAR_9, 0x4f);
        FUNC_8(&VAR_9, "VP80", 4);
        FUNC_9(&VAR_9, 2);
        FUNC_9(&VAR_9, 0x20);
    }

    VAR_6->isvp8 = 1;

    return 0;
}
