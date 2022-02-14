
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int * pb; } ;
struct TYPE_11__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int low_delay; int seq_closed_gop; int b_picture_count; int max_gop; int video_bit_rate; } ;
struct TYPE_9__ {int profile; int level; scalar_t__ codec_id; } ;
typedef TYPE_2__ MXFStreamContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_2, AVStream *VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    MXFStreamContext *VAR_5 = VAR_3->priv_data;
    int VAR_6 = (VAR_3->codecpar->profile<<4) | VAR_3->codecpar->level;
    int64_t VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_1);

    if (VAR_3->codecpar->codec_id != VAR_0) {

        FUNC_5(VAR_4, 4, 0x8000);
        FUNC_2(VAR_4, VAR_5->video_bit_rate);


        FUNC_5(VAR_4, 1, 0x8007);
        if (!VAR_3->codecpar->profile)
            VAR_6 |= 0x80;
        FUNC_0(VAR_4, VAR_6);


        FUNC_5(VAR_4, 1, 0x8003);
        FUNC_0(VAR_4, VAR_5->low_delay);


        FUNC_5(VAR_4, 1, 0x8004);
        FUNC_0(VAR_4, VAR_5->seq_closed_gop);


        FUNC_5(VAR_4, 2, 0x8006);
        FUNC_1(VAR_4, VAR_5->max_gop);


        FUNC_5(VAR_4, 2, 0x8008);
        FUNC_1(VAR_4, VAR_5->b_picture_count);
    }

    FUNC_3(VAR_4, VAR_7);
}
