
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * oformat; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int uid; } ;
struct TYPE_10__ {int body_offset; int edit_unit_byte_count; int duration; TYPE_4__* timecode_track; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ MXFCodecUL ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_3, AVStream *VAR_4)
{
    MXFContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;


    FUNC_3(VAR_6, 16, 0x0201);
    if (VAR_4 == VAR_5->timecode_track)
        FUNC_1(VAR_6, VAR_2, 16);
    else {
        const MXFCodecUL *VAR_7 = FUNC_2(VAR_4->codecpar->codec_type);
        FUNC_1(VAR_6, VAR_7->uid, 16);
    }


    FUNC_3(VAR_6, 8, 0x0202);

    if (VAR_4 != VAR_5->timecode_track && VAR_3->oformat == &VAR_1 && VAR_4->codecpar->codec_type == VAR_0) {
        FUNC_0(VAR_6, VAR_5->body_offset / VAR_5->edit_unit_byte_count);
    } else {
        FUNC_0(VAR_6, VAR_5->duration);
    }
}
